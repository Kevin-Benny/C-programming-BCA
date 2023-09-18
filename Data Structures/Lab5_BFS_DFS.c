// here we use visited index not the value visited holds
//visited[] always holds 0 or 1
//stack and queue is used as depends on bfs or dfs
#include <stdio.h>
int mat[20][20],n,visited[20],queue[20],v,front=-1,rear=-1,count,top=-1,stack[20];
void display(){
    printf("Adjacency Matrix\n");
    for(int i=0;i<n;i++){
     for(int j=0;j<n;j++){
        printf("%d ",mat[i][j]);
    }
    printf("\n");   
    }
}
int input(){
    int i,j;
    printf("\nEnter the number of vertices: ");
    scanf("%d",&n);
    for (i = 0; i < n; i++)
    {
        queue[i] = 0;
        visited[i] = 0;
    }
    printf("Enter graph data in matrix form:    \n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &mat[i][j]);
    printf("Enter the starting vertex: ");
    scanf("%d",&v);
    display();
    return v;
}
void bfs(int start){
    count=1;
    queue[++rear]=start;
	++front;
	visited[start]=1;
	
	while(rear>=front){
		start=queue[front++];
		if(count==n)
		    printf("%c",start + 65);
		else{
		    printf("%c -> ",start + 65);
		    count++;
		}
		for(int i=0;i<n;i++){
			if(mat[start][i] && visited[i]==0){
				queue[++rear]=i; 
				visited[i]=1;
			}
		}
	}
}
void dfs(int start){
	int i;
	count=1;
	stack[++top]=start;
	visited[start]=1;
	while(top!=-1){
		start=stack[top--];
		if(count==n){
			printf("%c",start+65);
		}
		else{
			printf("%c -> ",start+65);
			count++;
		}
		for(i=0;i<n;i++){
			if(mat[start][i] && visited[i]==0){
				stack[++top]=i;
				visited[i]=1;
			}
		}
	}
	
}
int main() {
    int op,ex=1;
    while(ex){
        printf("\n1) BFS");
        printf("\n2) DFS");
        printf("\n3) Exit");
        printf("\nEnter your option: ");
        scanf("%d",&op);
        switch(op){
            case 1:
                bfs(input());
                break;
            case 2:
                dfs(input());
                break;
            case 3:
                ex=0;
                break;
            default:printf("\nWrong option");
        }
    }
    return 0;
}

// 0 1 0 1 1 0 0 1 0 1 0 0 1 1 0 1 0 0 0 0 0 1 0 0 0 0 0 0 1 0 0 0 0 0 0 0 1 0 0 0 0 0 0 1 0 0 0 0 0
