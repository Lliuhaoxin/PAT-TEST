#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<int, float> re;
    map<int, float> p1;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int temp1;
        float temp2;
        cin >> temp1 >> temp2;
        p1[temp1] = temp2;
    }
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int temp1;
        float temp2;
        cin >> temp1 >> temp2;
        map<int, float>::iterator it;
        for (it = p1.begin(); it != p1.end(); it++)
        {
            if (re.find(it->first + temp1) == re.end())
                re[it->first + temp1] = it->second * temp2;
            else
                re[it->first + temp1] += it->second * temp2;
            if (re[it->first + temp1] == 0)
                re.erase(it->first + temp1);
        }
    }
    cout << re.size();
    map<int, float>::reverse_iterator it;
    for (it = re.rbegin(); it != re.rend(); it++)
        printf(" %d %.1f", it->first, it->second);
    cout << endl;
    return 0;
}