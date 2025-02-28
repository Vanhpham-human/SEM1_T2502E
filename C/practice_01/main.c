#include <stdio.h>
int main(){
    int a =0;
    printf("Please enter a number: \r\n");
    scanf("%d",&a);
    if (a%2==0)
    {
       printf("Even number");
    }
    else
    {
        printf("Odd number");
    }
    
    
    return 0;
}