#include <bits/stdc++.h>
using namespace std;
int c;
struct stu
{
    string id, name;
    int score;
};
bool cmp(stu a, stu b)
{
    if (c == 1)
        return a.id < b.id;
    if (c == 2)
        return a.name == b.name ? a.id < b.id : a.name < b.name;
    if (c == 3)
        return a.score == b.score ? a.id < b.id : a.score < b.score;
}
int main()
{
    vector<stu> s;
    int n;
    cin >> n >> c;
    for (int i = 0; i < n; i++)
    {
        stu temp;
        cin >> temp.id >> temp.name >> temp.score;
        s.push_back(temp);
    }
    sort(s.begin(), s.end(), cmp);
    for (int i = 0; i < s.size(); i++)
        cout << s[i].id << " " << s[i].name << " " << s[i].score << endl;
    return 0;
}
// 有时候报超时，第二遍提交就好了。。。