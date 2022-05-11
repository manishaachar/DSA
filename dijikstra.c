#include<stdio.h>
#include<stdlib.h>
int n,cost[10][10],d[10],p[10],i,j;

void dijik(int src)
{
	int s[10],u,v,min;
	for(i=0;i<n;i++)
	{
		d[i]=cost[src][j];
		s[i]=0;		
		p[i]=src;
	}
	s[src]=1;
	for(i=1;i<n;i++)
	{
		min=99;
		u=-1;
		for(j=0;j<n;j++)
		{
			if(s[j]==0)
			{
				if(d[j]<min)

				{
					min=d[j];
					u=j;
				}
			}
	if(u==-1)
		return;
	s[u]=1;
	for(v=0;v<n;v++)
	{
		if(s[v]==0)
			if(d[u]+cost[u][v]<d[v])
			{
				d[v]=d[u]+cost[u][v];
				p[v]=u;
			}
		}
	}
}
}

void print_path(int src, int dst)
{
int i;
	i=dst;
	while(i!=src)
	{
		printf("%d<--",i);
		i=p[i];
	} 
printf("%d=%d",i,d[dst]);
}


void main()
{
        int i,j,src;
        printf("Enter the number of vertices:");
        scanf("%d",&n);
        for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        scanf("%d",&cost[i][j]); 
        for(i=0;i<n;i++)
        {
                for(j=0;j<n;j++)
                {
                        printf("%d\t",cost[i][j]);
                } 
                printf("\n");
        }
		printf("Enter source vertex:");
		scanf("%d",&src);
for(j=0;j<n;j++)
{
print_path(src,j);
printf("\n");
dijik(src);	
   }
}


