#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;

    int c = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == s[i + 1])
        {
            c += 1;
            s.erase(i, 2);
            i = -1;
        }
    }

    if (c % 2 == 0)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
    return 0;
}