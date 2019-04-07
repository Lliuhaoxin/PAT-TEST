#include <bits/stdc++.h>
using namespace std;
int main()
{
    string nums[] = {
        "zero",
        "one",
        "two",
        "three",
        "four",
        "five",
        "six",
        "seven",
        "eight",
        "nine"};
    string a;
    int b = 0;
    cin >> a;
    for (int i = 0; i < a.length(); i++)
        b += a[i] - '0';
    string temp = to_string(b);
    for (int i = 0; i < temp.length(); i++)
    {
        cout << nums[temp[i] - '0'];
        if (i != temp.length() - 1)
            cout << " ";
    }
    cout << endl;
}