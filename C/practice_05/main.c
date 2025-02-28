#include <stdio.h>
int main(){
    float mark = 0;
    printf("Please enter a mark: \r\n");
    scanf("%f",&mark);
    if (mark>100)
    {
       printf("Mark can not accept over 100 points.\r\n");
    }
    if (mark>=75&&mark<=100)
    {
        printf("Mark A\r\n");
    }
    if (mark>=60 && mark<75)
    {
        printf("Mark B\r\n");
    }
    if (mark>=45&&mark<60)
    {
        printf("Mark C\r\n");
    }
    if (mark>=35 && mark<45)
    {
        printf("Mark D\r\n");
    }
    if (mark>=0 && mark<35)
    {
        printf("Mark F\r\n");
    }
    else if(mark<0)
    {
        printf("Invalid \r\n");
    }
    
    
    
    
    
    
    
    return 0;
}