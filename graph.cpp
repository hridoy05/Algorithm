#include<iostream>
#include<stdio.h>
using namespace std;
int adj[100][100];
int main()
{
    freopen("input.txt","r",stdin);
    int node,edge;
    scanf("%d",&node);
    scanf("%d",&edge);

    int n1,n2;
    for(int i=0;i<edge;i++)
    {
       scanf("%d %d",&n1,&n2) ;
       adj[n1][n2]=1;
       adj[n2][n1]=1;
    }
    for(int i=0;i<node;i++)
    {
        if(adj[0][i]==1)
        {
            printf("%d",i);
        }
    }
    return 0;
}
