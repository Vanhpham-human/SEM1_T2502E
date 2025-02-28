#include<stdio.h>

void 

int main(){
    int x =0;
    printf("Enter a number: \r\n");
    scanf("%d",&x);
    switch(x){
        case 1:
            printf("One \r\n");
            break;
        case 3:
            printf("Three \r\n");
            break;
        default:
            printf("Invalid \r\n");
            break;
    }
    printf("End");
    return 0;
}