#include <bits/stdc++.h>
using namespace std;
int e[1001][1001];
bool visit[1001];
int N;
void dfs(int i)
{
    visit[i] = true;
    for (int j = 0; j < N; j++)
    {
        if (visit[j] == false && e[i][j] == 1)
            dfs(j);
    }
}
int main()
{
    int M, K;
    cin >> N >> M >> K;
    for (int i = 0; i < M; i++)
    {
        int temp1, temp2;
        cin >> temp1 >> temp2;
        e[temp1 - 1][temp2 - 1] = 1;
        e[temp2 - 1][temp1 - 1] = 1;
    }
    for (int i = 0; i < K; i++)
    {
        int count = 0;
        fill(visit, visit + 1001, false);
        int node;
        cin >> node;
        visit[node - 1] = true;
        for (int j = 0; j < N; j++)
        {
            if (visit[j] == false)
            {
                dfs(j);
                count++;
            }
        }
        cout << count - 1 << endl;
    }
    return 0;
}