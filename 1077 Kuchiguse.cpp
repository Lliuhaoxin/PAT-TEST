#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    int N;
    string re;
    cin >> N;
    cin.ignore();
    for (int i = 0; i < N; i++)
    {
        string temp;
        getline(cin, temp);
        reverse(temp.begin(), temp.end());
        if (i == 1)
        {
            re = temp;
            continue;
        }
        for (int j = 0; j < temp.size(); j++)
            if (re[j] != temp[j])
            {
                re = re.substr(0, j);
                break;
            }
    }
    reverse(re.begin(), re.end());
    if (re.size() == 0)
        cout << "nai" << endl;
    else
        cout << re << endl;
    return 0;
}
