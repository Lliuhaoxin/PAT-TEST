#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k1, k2;
    map<int, float> m;
    cin >> k1;
    for (int i = 0; i < k1; i++)
    {
        int temp1;
        float temp2;
        cin >> temp1 >> temp2;
        m.insert(make_pair(temp1, temp2));
    }
    cin >> k2;
    for (int i = 0; i < k2; i++)
    {
        int temp1;
        float temp2;
        cin >> temp1 >> temp2;
        if (m.find(temp1) == m.end())
            m[temp1] = temp2;
        else
            m[temp1] += temp2;
        if (m[temp1] == 0)
            m.erase(temp1);
    }
    cout << m.size();
    map<int, float>::reverse_iterator it;
    int i = 0;
    for (it = m.rbegin(); it != m.rend(); it++, i++)
    {
        printf(" %d %.1f", it->first, it->second);
    }
    cout << endl;
    return 0;
}