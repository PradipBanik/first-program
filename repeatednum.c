#include<stdio.h>
int main()
{
int a[100];
int size,i,j,p=0;
scanf("%d",&size);
for(i=0;i<size;i++)
{
 scanf("%d",&a[i]);
}
for(i=0;i<size;i++)
{
 for(j=0;j<size;j++)
{
 if(i==j)
 {
 continue;
 }
 else
 {
  if(a[i]==a[j])
  {
   printf("%d",a[i]);
   p++;
   break;
  }
 }
}
}
if(p==0)
{
printf("unique");
}
return 0;
}
