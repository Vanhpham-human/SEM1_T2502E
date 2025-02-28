#include <stdio.h>
int main(){
    int a,b;
    int c;
    printf("Please enter a number : \r\n");
    scanf("%d",&a);
    printf("Please enter a number :\r\n");
    scanf("%d",&b);
    c = a%b;
    // c = a%b;
    printf("a/b = %d ",c);
    return 0;
}