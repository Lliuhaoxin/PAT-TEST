#include <bits/stdc++.h>
using namespace std;
string s;
// void func(string a)
// {
//     int f = 0;
//     for (int i = 0; i < a.length(); i++)
//     {
//         char temp = (s[i] - '0' + a[i] - '0') % 10 + '0' + f;
//         f = (s[i] - '0' + a[i] - '0' +f) / 10;
//         s[i] = temp;
//     }
//     if (f)
//         s += "1";
//     reverse(s.begin(), s.end());
// }
void func(string t)
{
    int len = s.length(), carry = 0;
    for (int i = 0; i < len; i++)
    {
        s[i] = s[i] + t[i] + carry - '0';
        carry = 0;
        if (s[i] > '9')
        {
            s[i] = s[i] - 10;
            carry = 1;
        }
    }
    if (carry)
        s += '1';
    reverse(s.begin(), s.end());
}
int main()
{
    int n, i;
    cin >> s >> n;
    for (i = 0; i <= n; i++)
    {
        string temp = s;
        reverse(temp.begin(), temp.end());
        if (s == temp || i == n)
            break;
        func(temp);
    }
    cout << s << endl
         << i;
    return 0;
}