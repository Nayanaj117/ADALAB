/*BFS method. */

#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<stdlib.h>
int a[10][10],vis[10],n;

void bfs(int v)
{
	int q[10],f=0,r=0,u;
	vis[v]=1;
	q[r]=v;
	
	while(f<=r)
	{
		u=q[f++];
		printf("%d --> ",u);
		for(int i=1;i<=n;i++)
		{
			if(a[u][i]==1&&vis[i]==0)
			{
				vis[i]=1;
				r++;
				q[r]=i;
			}
		}
	}
}




void main()
{
	int src;
	printf("Enter no of vertices:\t");
	scanf("%d",&n);
	printf("enter adjacency matrix:\n");
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
			scanf("%d",&a[i][j]);
	}
	
	for(int i=1;i<=n;i++)
		vis[i]=0;
	
	printf("Enter source vertex:\t");
	scanf("%d",&src);
	printf("Nodes accessible from source node %d are :\n",src);
	bfs(src);
	
	printf("\n THE BFS TRAVERSAL:\n");
	
	for(int i=1;i<=n;i++)
		vis[i]=0;
	
	for(int i=1;i<=n;i++)
	{
		if(vis[i]==0)
			bfs(i);
	}
	
}
