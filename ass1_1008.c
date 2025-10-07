#include <stdio.h>
int main ()
{
int a[5],i,sum=0;
printf("\n ");


for ( i=0;i<5;i++)
{
    scanf("\n %d",&a[i]);

    sum=sum+a[i];
}
    

printf(" %d\n",sum);


return 0;
}
