#include<stdio.h>
#include<stdlib.h>
int main()
{
int i,j,n,cost[10][10];
printf("\n read no.of nodes:");
scanf("%d",&n);
printf("\n read the cost of matrix\n");
for(i=1;i<=n;i++)
for(j=1;j<=n;j++)
{
scanf("%d",&cost[i][j]);
}
for(i=1;i<=n;i++)
for(j=1;j<=n;j++)
{
printf("%d",cost[i][j]);
}
printf("\n");
}

