#include<stdio.h>
#include <stdlib.h>
#include<limits.h>

#define MAX 100

// function prototypes
void menu();
void createGraph();
void displayGraph();
void primMST();

int graph[MAX][MAX], n;

int main()
{
    menu();
    return 0;
}

void menu()
{
    int choice;
    do
    {
        printf("\nLAB-6\n");
        printf("1. Create Graph\n");
        printf("2. Display Graph\n");
        printf("3. Minimum Spanning Tree using Prim's Algorithm\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1: createGraph();
                    break;
            case 2: displayGraph();
                    break;
            case 3: primMST();
                    break;
            case 4: exit(0);
            default: printf("Invalid choice\n");
        }
    }while(choice!=4);
}

void createGraph()
{
    int i, j;
    printf("Enter the number of vertices: ");
    scanf("%d", &n);
    printf("Enter the adjacency matrix:\n");
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d", &graph[i][j]);
}

void displayGraph()
{
    int i, j;
    printf("The adjacency matrix is:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            printf("%d\t", graph[i][j]);
        printf("\n");
    }
}

void primMST()
{
    int parent[MAX], key[MAX], visited[MAX], i, j, u, v, min, sum=0;

    // initialize arrays
    for(i=0;i<n;i++)
    {
        key[i] = INT_MAX;
        visited[i] = 0;
    }

    key[0] = 0;
    parent[0] = -1;

    for(i=0;i<n-1;i++)
    {
        min = INT_MAX;

        // find the vertex with minimum key value
        for(j=0;j<n;j++)
            if(!visited[j] && key[j]<min)
            {
                min = key[j];
                u = j;
            }

        visited[u] = 1;

        // update key values and parent array
        for(v=0;v<n;v++)
            if(graph[u][v] && !visited[v] && graph[u][v]<key[v])
            {
                parent[v] = u;
                key[v] = graph[u][v];
            }
    }

    // display MST
    printf("Minimum Spanning Tree using Prim's Algorithm:\n");
    printf("Vertex\tParent\tKey\n");
    for(i=1;i<n;i++)
    {
        printf("%d\t%d\t%d\n", i, parent[i], key[i]);
        sum += key[i];
    }
    printf("Total weight of MST is %d\n", sum);
}