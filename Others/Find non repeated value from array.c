#include<stdio.h>
int main()
{
int arr[]={1,2,3,4,5,6,1,2,3,5,6};
int res=0;
for(int i=0;i<11;i++)
{
   res = res ^ arr[i];
}
printf("%d",res);
return 0;
}
