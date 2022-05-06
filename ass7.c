#include<stdio.h>
#include<stdlib.h>
int cost[15][15];
int n,mincost,v1=0,v2=0;
void findmin()
{
int edgewt=99,i,j;
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{






void main()
{
int i,j,;
printf("Enter the no of vertices");
scanf("%d",&n);
printf("Enter the undirected graph as adjacency matrix\n");

for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
scanf("%d\t",&cost[i][j]);
}
}

for(i=0;i<n;i++)
{
for(j=0;j<n;J++)
{
printf("%d\t",cost[i][j]);


