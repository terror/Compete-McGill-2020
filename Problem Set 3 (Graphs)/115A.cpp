#include <bits/stdc++.h>

using namespace std;

vector<int> v[2001];
int m = -1;

void dfs(int x, int l)
{
    m = max(m, l);
    for (int i = 0; i < v[x].size(); ++i)
    {
        dfs(v[x][i], l + 1);
    }
}

int main()
{
    int n, x;
    cin >> n;

    for (int i = 1; i <= n; ++i)
    {
        cin >> x;
        if (x != -1)
            v[x].push_back(i);
        else
            v[0].push_back(i);
    }

    for (int i = 0; i < v[0].size(); i++)
    {
        dfs(v[0][i], 1);
    }
    cout << m << endl;
    return 0;
}