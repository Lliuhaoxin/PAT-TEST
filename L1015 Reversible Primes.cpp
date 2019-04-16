#include <bits/stdc++.h>
using namespace std;
bool isprime(int n)
{
    if (n <= 1)
        return false;
    int m = (int)sqrt(n);
    for (int i = 2; i <= m; i++)
        if (n % i == 0)
            return false;
    return true;
}
int main()
{
    int n, radix;
    while (scanf("%d", &n) != EOF && n > 0)
    {
        scanf("%d", &radix);
        if (!isprime(n))
        {
            cout << "No" << endl;
            continue;
        }
        vector<int> re;
        while (n != 0)
        {
            re.push_back(n % radix);
            n = n / radix;
        }
        for (int i = 0; i < re.size(); i++)
        {
            n = n * radix + re[i];
        }
        if (isprime(n))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}