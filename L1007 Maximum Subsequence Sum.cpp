#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sum = -1, temp_sum = 0, l = 0, r = n - 1, temp_l = 0;
    vector<int> a;
    a.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        temp_sum = temp_sum + a[i];
        if (temp_sum < 0)
        {
            temp_sum = 0;
            temp_l = i + 1;
        }
        else if (temp_sum > sum)
        {
            sum = temp_sum;
            l = temp_l;
            r = i;
        }
    }
    sum = sum < 0 ? 0 : sum;
    cout << sum << " " << a[l] << " " << a[r] << endl;
    return 0;
}