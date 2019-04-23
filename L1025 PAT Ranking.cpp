#include <bits/stdc++.h>
using namespace std;
struct stu
{
    string id;
    int local, score, final_rank, local_rank;
};
bool func_cmp(stu a, stu b)
{
    return a.score == b.score ? a.id < b.id : a.score > b.score;
}
int main()
{
    int n;
    vector<stu> final_list;
    cin >> n;
    for (int p = 1; p <= n; p++)
    {
        int k;
        cin >> k;
        vector<stu> temp(k);
        for (int i = 0; i < k; i++)
        {
            cin >> temp[i].id >> temp[i].score;
            temp[i].local = p;
        }
        sort(temp.begin(), temp.end(), func_cmp);
        temp[0].local_rank = 1;
        final_list.push_back(temp[0]);
        for (int i = 1; i < k; i++)
        {
            if (temp[i].score == temp[i - 1].score)
                temp[i].local_rank = temp[i - 1].local_rank;
            else
                temp[i].local_rank = i + 1;
            final_list.push_back(temp[i]);
        }
    }
    sort(final_list.begin(), final_list.end(), func_cmp);
    final_list[0].final_rank = 1;
    for (int i = 1; i < final_list.size(); i++)
    {
        if (final_list[i - 1].score == final_list[i].score)
            final_list[i].final_rank = final_list[i - 1].final_rank;
        else
            final_list[i].final_rank = i + 1;
    }
    cout << final_list.size() << endl;
    for (int i = 0; i < final_list.size(); i++)
    {
        cout << final_list[i].id << " " << final_list[i].final_rank << " " << final_list[i].local << " " << final_list[i].local_rank << endl;
    }
    return 0;
}