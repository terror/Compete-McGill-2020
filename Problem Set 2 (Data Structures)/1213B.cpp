#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int c = 0;
        int n;
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++)
            cin >> a[i];

        int minPrice = INT_MAX;
        int i = n - 1;
        while (i >= 0)
        {
            if (a[i] > minPrice)
                c += 1;
            minPrice = min(minPrice, a[i]);
            i--;
        }
        cout << c << endl;
    }
    return 0;
}