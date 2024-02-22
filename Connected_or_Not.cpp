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
    }
    int q;
    cin >> q;
    while (q--)
    {

        int src, des;
        cin >> src >> des;
        bool flag = false;
        if (src == des)
        {
            cout << "YES" << endl;
            continue;
        }
        for (int x : v[src])
        {
            if (x == des)
            {
                cout << "YES" << endl;
                flag = true;
                break;
            }
        }
        if (flag == false)
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}