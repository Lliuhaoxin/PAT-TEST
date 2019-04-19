#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    int nums[40], length = 0;
    scanf("%d%d", &a, &b);
    while (a != 0)
    {
        nums[length++] = a % b;
        a = a / b;
    }
    bool flag = false;
    for (int i = 0; i < length / 2; i++)
    {
        if (nums[i] != nums[length - i - 1])
        {
            printf("No\n");
            flag = true;
            break;
        }
    }
    if (!flag)
        printf("Yes\n");
    for (int i = 0; i < length; i++)
    {
        cout << nums[length - i - 1];
        if (i != length - 1)
            cout << " ";
    }
    if (length == 0)
        cout << "0";
    return 0;
}