#include<stdio.h>  
void main()
{
int a[5]={5,1,15,20,25};
int i,j,k;
i=++a[1];
j=a[1]++;
k=a[i++];
printf("%d %d %d",i,j,k);
}
