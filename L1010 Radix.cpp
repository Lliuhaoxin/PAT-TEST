#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll num2dec(string n, int r)
{
    ll sum = 0;
    for (int i = n.size() - 1; i >= 0; i--)
    {
        int temp = isdigit(n[i]) ? n[i] - '0' : n[i] - 'a' + 10;
        sum += temp * pow(r, n.size() - 1 - i);
    }
    return sum;
}

ll find_radix(string n, ll num)
{
    char it = *max_element(n.begin(), n.end());
    ll l = (isdigit(it) ? it - '0' : it - 'a' + 10) + 1;
    ll r = max(num, l);
    while (l <= r)
    {
        ll m = (l + r) / 2;
        ll t = num2dec(n, m);
        if (t < 0 || t > num)
            r = m - 1;
        else if (t == num)
            return m;
        else
            l = m + 1;
    }
    return -1;
}

int main()
{
    string n1, n2;
    ll tag, radix, re;
    cin >> n1 >> n2 >> tag >> radix;
    if (tag == 1)
        re = find_radix(n2, num2dec(n1, radix));
    else
        re = find_radix(n1, num2dec(n2, radix));
    if (re != -1)
        cout << re << endl;
    else
        cout << "Impossible" << endl;
    return 0;
}