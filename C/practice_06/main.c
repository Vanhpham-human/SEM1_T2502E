#include <stdio.h>

void findMax(){
    int x,y,z =0;
    printf("Please enter value: \r\n");
    scanf("%d%d%d",&x,&y,&z);
    if ((x>y&&y>z)||(x>y&&x>z))
    {
        printf("Highest : %d \r\n",x);
    }
    if ((y>x&&x>z)||(y>x&&y>z))
    {
       printf("Highest: %d\r\n",y);
    }
}

int main(){
    findMax();
    findMax();
    return 0;
}