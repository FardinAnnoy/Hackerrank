#include <bits/stdc++.h>
using namespace std;

const long long N = 1001;
vector<pair<long long, long long>> v[N];
long long dis[N];
class cmp
{
public:
    bool operator()(pair<long long, long long> a, pair<long long, long long> b)
    {
        return a.second > b.second;
    }
};

void dijkstra(long long src)
{
    priority_queue<pair<long long, long long>, vector<pair<long long, long long>>, cmp> pq;
    pq.push({src, 0});
    dis[src] = 0;

    while (!pq.empty())
    {
        pair<long long, long long> parent = pq.top();
        pq.pop();
        long long node = parent.first;
        long long cost = parent.second;

        for (pair<long long, long long> child : v[node])
        {
            long long childnode = child.first;
            long long childcost = child.second;

            if (cost + childcost < dis[childnode])
            {
                dis[childnode] = cost + childcost;
                pq.push({childnode, dis[childnode]});
            }
        }
    }
}

int main()
{
    long long n, e;
    cin >> n >> e;

    while (e--)
    {
        long long a, b, c;
        cin >> a >> b >> c;
        v[a].push_back({b, c});
    }
    for (int i = 1; i <= n; i++)
    {
        dis[i] = INT_MAX;
    }
    long long src;
    cin >> src;
    dijkstra(src);

    long long t;
    cin >> t;
    while (t--)
    {
        long long d, dw;
        cin >> d >> dw;

        if (dis[d] <= dw)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}