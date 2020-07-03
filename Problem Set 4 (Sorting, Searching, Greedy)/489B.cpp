#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef vector<int> vi;
int n, m;

int main()
{
    cin >> n;
    vi b(n);
    for (auto &x : b)
        cin >> x;
    cin >> m;
    vi g(m);
    for (auto &x : g)
        cin >> x;

    sort(b.begin(), b.end());
    sort(g.begin(), g.end());

    int ans = 0;
    for (int i = 0, j = 0; i < n; ++i)
    {
        while (j < m && g[j] < b[i] - 1)
            ++j;
        if (j < m && g[j] <= b[i] + 1)
            ++j, ++ans;
    }
    cout << ans;

    return 0;
}