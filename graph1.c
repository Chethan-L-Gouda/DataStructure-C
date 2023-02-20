#include<stdio.h>
#include<stdlib.h>

int a[20][20],q[20],visited[2],reach[10],n,i,j,f=0,r=-1,count=0;
void bfs(int v){
	for(i=0;i<=n;i++)
		if(a[v][i] && !visited[i])
			q[++r]=i;
	if(f<=r){
		visited[q[f]]=1;
		bfs(q[f++]);
	}
}
void dfs(int v){
	int i;reach[v]=1;
	for (i=0; i<= n; i++) {
		if(a[v][i] && !reach[i]){
			printf("%d -> %d\n",v,i);
			count++;
			dfs(i);
		}
	}	
}
int main(){ 
	int v, choice;
	printf("\n Enter the number of vertices:"); scanf("%d",&n);
	for(i=1;i<=n;i++){
		q[i]=0;
		visited[i]=0;
		reach[i]=0;
	}
	printf("Enter the graph data in Matrix : \n");
	for (i=1; i<=n; i++)
		for (j=1; j<=n; j++) 
			scanf("%d",&a[i][j]);
	printf("1.BFS\n2.DFS\n3.Exit\n");
	printf("Enter the choice : ");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			printf("\nEnter the Starting Vertex : ");
			scanf("%d",&v);
			bfs(v);
			if(v<1 || v>n)
				printf("BFS not possible !");
			else{
				printf("The nodes reachable from %d are :",v);
				for(i=1;i<=n;i++)
					if(visited[i])
						printf("%d ",i);
				printf("\n");
			}
			break;
		case 2:
			dfs(1);
			if(count == n-1)
				printf("\nThe graph is connected.\n");
			else
				printf("\nThe graph is not connected\n");
			break;
		case 3:
			exit(0);
		default:
			printf("Invalid choice.");
	}
}
