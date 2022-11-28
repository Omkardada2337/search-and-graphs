#include <bits/stdc++.h>
using namespace std;

void BFS(int G[][7], int start, int n)
{
    queue<int> q;
    int a[n + 1] = {0};
    int i = start;
    cout << i << " ";
    a[i] = 1;
    q.push(i);

    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        for (int j = 1; j < 7; j++)
        {
            if (G[u][j] == 1 && a[j] == 0)
            {
                cout << j << " ";
                a[j] = 1;
                q.push(j);
            }
        }
    }
}
int main()
{
    int G[7][7] = {
        {0, 0, 0, 0, 0, 0, 0},
        {0, 0, 1, 1, 0, 0, 0},
        {0, 1, 0, 0, 1, 0, 0},
        {0, 1, 0, 0, 1, 0, 0},
        {0, 0, 1, 1, 0, 1, 1},
        {0, 0, 0, 0, 1, 0, 0},
        {0, 0, 0, 0, 1, 0, 0}};
    BFS(G, 3, 6);
}