#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, sum = 0, start = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        sum += temp > start ? (temp - start) * 6 : (start - temp) * 4;
        start = temp;
        sum += 5;
    }
    cout << sum << endl;
    return 0;
}