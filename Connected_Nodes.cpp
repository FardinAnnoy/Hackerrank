#include <bits/stdc++.h>
using namespace std;
vector<int> v[1005];
bool vis[1005];

int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    int q;
    cin >> q;

    vector<int> query(q);
    for (int i = 0; i < q; i++)
    {
        cin >> query[i];

        vector<int> connected;
        for (int val : v[query[i]])
        {
            connected.push_back(val);
        }

        if (connected.empty())
        {
            cout << -1 << endl;
        }
        else
        {
            sort(connected.begin(), connected.end(), greater<int>());
            for (int val : connected)
            {
                cout << val << " ";
            }
            cout << endl;
        }
    }

    return 0;
}