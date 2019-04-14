#include <bits/stdc++.h>
using namespace std;
int main()
{
    float re = 1;
    int a[3];
    string str = "WTL";
    for (int i = 0; i < 3; i++)
    {
        float temp = -1, t;
        int k = 0;
        for (int j = 0; j < 3; j++)
        {
            cin >> t;
            if (t > temp)
            {
                temp = t;
                k = j;
            }
        }
        re *= temp;
        a[i] = k;
    }
    for (int i = 0; i < 3; i++)
        cout << str[a[i]] << " ";
    printf("%.2f\n", (re * 0.65 - 1) * 2);
    return 0;
}