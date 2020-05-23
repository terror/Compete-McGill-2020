#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int s;
        cin >> s;

        vector<int> v;
        int p = 1;

        while (s > 0)
        {
            if (s % 10 > 0)
            {
                v.push_back((s % 10) * p);
            }
            s /= 10;
            p *= 10;
        }
        cout << v.size() << endl;
        for (auto n : v)
            cout << n << " ";
        cout << endl;
    }
}