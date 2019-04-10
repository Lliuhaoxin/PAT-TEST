#include <bits/stdc++.h>
using namespace std;
int main()
{
    string MAX_T = "00:00:00", MIN_T = "24:00:00", MAX_P, MIN_P, P, T;
    int n;
    cin >> n;
    while (n--)
    {
        cin >> P;
        cin >> T;
        if (T <= MIN_T)
        {
            MIN_T = T;
            MIN_P = P;
        }
        cin >> T;
        if (T >= MAX_T)
        {
            MAX_T = T;
            MAX_P = P;
        }
    }
    cout << MIN_P << " " << MAX_P;
    return 0;
}
// string可以直接按照字典序比大小