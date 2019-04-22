#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[10]={0};
    int n, f = 0, flag = 0;
    string re, s;
    cin >> s;
    for (int i = s.length() - 1; i >= 0; i--)
    {
        int temp = s[i] - '0';
        a[temp]++;
        a[temp * 2 % 10 + f]--;
        re.push_back(temp * 2 % 10 + f + '0');
        f = temp * 2 / 10;
    }
    for (int i = 0; i < 10; i++)
    {
        if (a[i] != 0)
            flag = 1;
    }
    if (!flag && !f)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    reverse(re.begin(), re.end());
    if(f==1) cout<<"1";
    cout << re << endl;
    return 0;
}