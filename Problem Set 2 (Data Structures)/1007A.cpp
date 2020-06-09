#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    map<int, int> m;
    int n;
    cin >> n;
    int Max = 0;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (!m.count(arr[i]))
        {
            m[arr[i]] = 1;
        }
        else
        {
            m[arr[i]] += 1;
        }
        if (m[arr[i]] > Max)
        {
            Max = m[arr[i]];
        }
    }

    cout << n - Max;

    return 0;
}