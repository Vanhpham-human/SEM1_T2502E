#include <stdio.h>
int main(){
    int a =0;
    printf("Please enter a number \r\n");
    scanf("%d",&a);
    if(a%5==0){
        printf("Phep chia het cho 5");
    }
    else
    {
        printf("Phep chia KHONG het cho 5");
    }
    
}