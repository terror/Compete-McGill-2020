#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    string v[100];
    vector<string> left, right;
    string middle;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (int i = 0; i < n; i++)
    {
        string t = v[i];
        reverse(t.begin(), t.end());
        if (t == v[i])
        {
            middle = t;
        }
        else
        {
            for (int j = 0; j < n; j++)
            {
                if (j != i)
                {
                    string temp = v[i];
                    string x = v[j];
                    reverse(x.begin(), x.end());
                    if (temp == x && find(left.begin(), left.end(), temp) == left.end() && find(right.begin(), right.end(), x) == right.end())
                    {
                        left.push_back(v[i]);
                        right.push_back(v[j]);
                        break;
                    }
                }
            }
        }
    }
    cout << (left.size() + right.size()) * m + middle.size() << endl;
    for (string x : left)
        cout << x;
    cout << middle;
    reverse(right.begin(), right.end());
    for (string x : right)
        cout << x;
    if (left.empty())
    {
        cout << " " << endl;
    }
    return 0;
}