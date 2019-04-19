#include <bits/stdc++.h>
using namespace std;
int win[105];
struct node
{
    int time,p;
}person[10005];
bool cmp(node a,node b)
{
    return a.time < b.time;
}
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    int h,m,s,ans = 0;
    int begin = 8 * 60 * 60;
    int end = 17 * 60 * 60;
    for (int i = 0; i < k; i++)
    {
        win[i] = begin;
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%d:%d:%d %d",&h,&m,&s,&person[i].p);
        person[i].time = (h * 60 + m) * 60 + s;
        person[i].p *= 60;
    }
    sort(person, person + n,cmp);
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (person[i].time > end) continue;
        int poi = 0;
        for (int j = 0; j < k; j++)
        {
            if (win[j] < win[poi])  poi = j;
        }
        if (win[poi] >= person[i].time)
        {
            ans += win[poi] - person[i].time;
            win[poi] += person[i].p;
        }
        else  win[poi] = person[i].time + person[i].p;
        count++;  
    }
    printf("%.1f\n",(ans * 1.0 / (60 * count)));
    return 0;
}