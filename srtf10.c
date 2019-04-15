#include <stdio.h>
#include<conio.h>
int main() 
{
 int a[10],b[10],x[10],i,j,n,smallest,count=0,time;
 double AVGWT=0,AVGTAT=0,end;
  printf("please enter the number of processe:\n");
  scanf("%d",&n); 
printf("enter arrival time\n");
for(i=0;i<n;i++)
{
 scanf("%d",&a[i]);
}
 printf("enter burst time\n");
 for(i=0;i<n;i++)
{
 scanf("%d",&b[i]);
}
 for(i=0;i<n;i++)
{
 x[i]=b[i];
 b[9]=9999;
}
 for(time=0;count!=n;time++)
 {
    smallest=9;
    for(i=0;i<n;i++)
       {
         if(a[i]<=time && b[i]<b[smallest] && b[i]>0 )
          smallest=i;
       }
        b[smallest]--;
    if(b[smallest]==0)
       { 
         count++;
         end=time+1;
         AVGWT=AVGWT+end-a[smallest]-x[smallest];
         AVGTAT= AVGTAT+end-a[smallest];
       }
 }
    printf("\n\nAverage waiting time = %lf\n",AVGWT/n);
    printf("Average Turnaround time = %lf",AVGTAT/n);
}
