#include <bits/stdc++.h>
using namespace std;
#define INF 99999999
int main()
{
    int n, m, c1, c2;
    int rescue[501] = {0}, dis[501], visit[501] = {0}, nums[501] = {0}, wight[501] = {0};
    int road[501][501] = {0};
    fill(dis, dis + 501, INF);
    fill(road[0], road[0] + 501 * 501, INF);
    cin >> n >> m >> c1 >> c2;
    for (int i = 0; i < n; i++)
        cin >> rescue[i];

    for (int i = 0; i < m; i++)
    {
        int temp1, temp2, temp3;
        cin >> temp1 >> temp2 >> temp3;
        road[temp1][temp2] = temp3;
        road[temp2][temp1] = temp3;
    }
    dis[c1] = 0;
    nums[c1] = 1;
    wight[c1] = rescue[c1];
    for (int i = 0; i < n; i++)
    {
        int min_dis = INF, p = -1;
        for (int j = 0; j < n; j++)
        {
            if (visit[j] == 0 && dis[j] < min_dis)
            {
                p = j;
                min_dis = dis[j];
            }
        }
        if (p == -1)
            break;
        visit[p] = 1;
        for (int j = 0; j < n; j++)
        {
            if (visit[j] == 0 && road[p][j] != INF)
            {
                if (dis[p] + road[p][j] < dis[j])
                {
                    dis[j] = dis[p] + road[p][j];
                    nums[j] = nums[p];
                    wight[j] = wight[p] + rescue[j];
                }
                else if (dis[p] + road[p][j] == dis[j])
                {
                    nums[j] = nums[j] + nums[p];
                    if (wight[p] + rescue[j] > wight[j])
                        wight[j] = wight[p] + rescue[j];
                }
            }
        }
    }
    cout << nums[c2] << " " << wight[c2] << endl;
    return 0;
}