#include <stdio.h>
#include <stdbool.h>

#define MAX 100001
int N;

int link[MAX][MAX]; // Assuming MAX is the maximum value of N
int parent[MAX];

void find_parent(int node)
{
    for (int i = 0; i < N; i++)
    {
        int next = link[node][i];
        if (parent[node] != next)
        {
            parent[next] = node;
            find_parent(next);
        }
    }
}

void print_parent()
{
    for (int i = 2; i <= N; i++)
    {
        printf("%d\n", parent[i]);
    }
}

int main()
{
    scanf("%d", &N);
    for (int i = 0; i < N - 1; i++)
    {
        int n1, n2;
        scanf("%d %d", &n1, &n2);

        link[n1][i] = n2;
        link[n2][i] = n1;
    }

    find_parent(1);
    print_parent();

    return 0;
}
