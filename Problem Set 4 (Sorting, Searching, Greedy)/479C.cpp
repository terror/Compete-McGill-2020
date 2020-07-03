#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define pl pair<ll, ll>
#define vpl vector<pl>
#define pb push_back
#define mp make_pair

ll n;

int main()
{
    cin >> n;
    vpl v;
    while (n--)
    {
        ll a, b;
        cin >> a >> b;
        v.pb(mp(a, b));
    }

    sort(v.begin(), v.end());

    ll day = min(v[0].first, v[0].second);
    set<ll> s;
    for (int i = 1; i < v.size(); ++i)
    {
        ll t;
        if (v[i].first >= day && v[i].second >= day)
            t = min(v[i].first, v[i].second);
        else if (v[i].first >= day && v[i].second < day)
            t = v[i].first;
        else
            t = v[i].second;

        if (!s.count(t))
            day = t, s.insert(t);
    }

    cout << day;
}