#include <stdio.h>
int main (){
    int a,b=0;
    printf(Please enter a number: \r\n);
    scanf("%d",&a);
    printf(Please enter a number: \r\n);
    scanf("%d",&b);
    int result=a%b;
if (result==0);
{
    printf("divisible");
}
else
{
    printf("not divisible");
}
return 0;
}