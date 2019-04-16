#include<stdio.h>
int main()
{
int i,j,n,a[5120],frame[10],no,k,avail,count=0,pagesize[2000],page;
            printf("\n ENTER THE NUMBER OF PAGES:\n");
scanf("%d",&n);
   printf("\n ENTER THE PAGE NUMBER :\n");
            for(i=1;i<=n;i++)
            scanf("%d",&a[i]);
            printf("\n ENTER THE NUMBER OF FRAMES :");
            scanf("%d",&no);
            printf("\n ENTER THE PAGE SIZE :");
            for(i=1;i<=n;i++)
            scanf("%d",&page);         
