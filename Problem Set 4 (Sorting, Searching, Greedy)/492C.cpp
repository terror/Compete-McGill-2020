#include <bits/stdc++.h>

using namespace std;
#define pi pair<int, int>
#define vpi vector<pi>
#define pb push_back
#define mp make_pair
typedef long long ll;
ll n, sum, r, avg, a, b;

int main()
{
    cin >> n >> r >> avg;
    vpi v;
    for (int i = 0; i < n; ++i)
        cin >> a >> b, sum += a, v.pb(mp(b, a));
    sort(v.begin(), v.end());

    ll t = 0, ans = 0, i = 0;
    while (sum < avg * n)
        // min of what we need vs current exam
        t = min(avg * n - sum, r - v[i].second), ans += t * v[i].first, sum += t, i++;
    cout << ans;

    return 0;
}