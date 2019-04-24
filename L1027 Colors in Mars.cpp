#include <bits/stdc++.h>
using namespace std;
int main()
{
    string nums = "0123456789ABC";
    cout << "#";
    for (int i = 0; i < 3; i++)
    {
        int val;
        cin >> val;
        cout << nums[val / 13] << nums[val % 13];
    }
    cout << endl;
}