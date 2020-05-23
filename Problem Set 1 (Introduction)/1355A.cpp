#include <iostream>
#include <bits/stdc++.h>

using namespace std;
long long GetSum(long long);

int main()
{
    int n;
    scanf("%d", &n);

    while (n--)
    {
        long long a, k;
        scanf("%lld%lld", &a, &k);

        for (int i = 0; i < k - 1; i++)
        {
            if (GetSum(a) == 0)
                break;
            a += GetSum(a);
        }
        printf("%lld\n", a);
    }
    return 0;
}

long long GetSum(long long n)
{
    long long a = 10, b = 0;
    while (n > 0)
    {
        long long y = n % 10;
        n /= 10;
        a = min(a, y);
        b = max(b, y);
    }
    return a * b;
}
