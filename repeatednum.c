#include<stdio.h>
int main()
{
int a[100],b[100],c[100];
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
      if(j<i)
      {
          break;
      }
   b[p]=a[i];
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
else{
    for(i=0;i<p;i++)
    {
        int count=0;
        for(j=0;j<p;j++)
        {
            if(b[i]>b[j])
            {
                count++;
            }
        }
        c[count]=b[i];
    }
    for(i=0;i<p;i++)
    {
        printf("%d",c[i]);
    }
}
return 0;
}

