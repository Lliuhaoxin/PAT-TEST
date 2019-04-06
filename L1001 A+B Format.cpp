#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    string re = to_string(a + b);
    for (int i = 0; i < re.length(); i++)
    {
        cout << re[i];
        if (re[i] == '-')
            continue;
        if ((re.length() - i - 1) % 3 == 0 && i != re.length() - 1)
            cout << ",";
    }
    cout << endl;
}

// a,b=list(map(int,input().split()))
// print(format(a+b,','))