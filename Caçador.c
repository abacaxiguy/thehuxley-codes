#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int verify(char map[10][10], int i, int j, int n, int m, int prev[10][10])
{
    if (i < 0 || j < 0 || i >= n || j >= m)
        return 0;
    else if (map[i][j] == '#')
        return 0;
    else if (prev[i][j])
        return 0;
    return 1;
}

int loot(char square)
{
    if (square == '.')
        return 0;
    else if (square == 'b')
        return 1;
    else if (square == 'p')
        return 5;
    else if (square == 'o')
        return 10;
    else if (square == 'd')
        return 50;
}

void travel(char map[10][10], int i, int j, int *best, int runs_best, int n, int m, int prev[10][10])
{
    int got_stuck = 1;
    runs_best += loot(map[i][j]);

    prev[i][j] = 1;

    if (verify(map, i + 1, j, n, m, prev))
    {
        got_stuck = 0;
        travel(map, i + 1, j, best, runs_best, n, m, prev);
    }
    if (verify(map, i, j + 1, n, m, prev))
    {
        got_stuck = 0;
        travel(map, i, j + 1, best, runs_best, n, m, prev);
    }
    if (verify(map, i - 1, j, n, m, prev))
    {
        got_stuck = 0;
        travel(map, i - 1, j, best, runs_best, n, m, prev);
    }
    if (verify(map, i, j - 1, n, m, prev))
    {
        got_stuck = 0;
        travel(map, i, j - 1, best, runs_best, n, m, prev);
    }

    prev[i][j] = 0;

    if (got_stuck)
    {

        if (runs_best > *best)
            *best = runs_best;

        return;
    }
}

void search(char map[10][10], int n, int m)
{
    int i = 0, j = 0, best = 0;
    int prev[10][10];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            prev[i][j] = 0;
    }

    if (verify(map, i, j, n, m, prev))
        travel(map, i, j, &best, 0, n, m, prev);

    printf("%d\n", best);
}

int main()
{
    int n, m;
    char map[10][10];

    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf(" %c", &map[i][j]);
        }
    }

    search(map, n, m);

    return 0;
}