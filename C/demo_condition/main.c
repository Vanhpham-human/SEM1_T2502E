#include <stdio.h>
int main(){
    int a = 0;
    int b = 0;
    printf("Please enter a number: \r\n");
    scanf("%d",&a);
    printf("Please enter a number: \r\n");
    scanf("%d",&b);
    if (a == b)
    {
        printf("True expression");
    }
    else{
        printf("False expression");
    }
    
    return 0;
}