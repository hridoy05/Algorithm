#include<iostream>
#include<stdio.h>
#define WHITE 1
#define GREY 2
#define BLACK 3
using namespace std;
int adj[100][100];
int color[100];
int node;
int edge;
void dfsvisit(int x)
{
   color[x]=GREY;
   //some work
   for(int i=0;i<node;i++)
   {
       if(adj[x][i]==1)
       {
           if(color[i]==WHITE)
           {
               dfsvisit(i);
           }
       }
   }


   color[x]=0;
}
void dfs()
{
   for(int i=0;i<node;i++)
   {
      color[i]=WHITE;
   }
   for(int i=0;i<node;i++)
   {
       if(color[i]==WHITE)
       {
           dfsvisit(i);
       }
   }
}
int main()
{
    int n1,n2;
    freopen("input.txt","r",stdin);
    scanf("%d",&node);
    scanf("%d",&edge);
    for(int i=0;i<edge;i++)
    {
        scanf("%d %d",&n1,&n2);
        adj[n1][n2]=1;
        adj[n2][n1]=1;
    }
    dfs();
}

