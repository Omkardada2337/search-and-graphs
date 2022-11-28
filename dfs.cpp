#include <bits/stdc++.h>
using namespace std;
void DFS(int G[][7], int start, int n)
{
    static int visited[7] = {0};
    int i = start;
    if (visited[i] == 0)
    {
        cout << i << " ";
        visited[i] = 1;
        for (int j = 1; j < n; j++)
        {
            if (G[i][j] == 1)
                DFS(G, j, n);
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
    DFS(G, 3, 7);
}