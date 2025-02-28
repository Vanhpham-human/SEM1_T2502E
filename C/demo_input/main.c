#include <stdio.h>
int main(){
    float x, y;
    printf("Please enter a number for x: \r\n");
    scanf("%f",&x);
    printf("Please enter a number for y \r\n");
    scanf("%f",&y);
    float total = x + y;
    printf("Total %.1f \r\n",total);
    return 0;
}