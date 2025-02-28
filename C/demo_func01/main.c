#include <stdio.h>
// Định nghĩa hàm
int total(int a, int b)
{
    int result;
    result = a +b;
    return result;
}
float total_exp(float a, float b){
    float result;
    result = (float)((a+b)/2+b);
    return result;
}
int main(){
    // Gọi hàm
    float x,y =0;
    printf("Please enter a number \r\n");
    scanf("%f",&x);
    printf("Please enter a number \r\n");
    scanf("%f",&y);
    float summary1;
    summary1 = total_exp(x,y) ;
    printf("Summary 1: %f \r\n",summary1);
    // int summarySalary;
    // summarySalary = total(x,y);
    // printf("Summary Salary %d\r\n",summarySalary);
    // int asm_mark,p_mark;
    // printf("Total Mark \r\n");
    // printf("Please enter ASM mark \r\n");
    // scanf("%d",&asm_mark);
    // printf("Please enter Practice mark \r\n");
    // scanf("%d",&p_mark);
    // int mark = total(asm_mark,p_mark);
    // printf("Mark %d\r\n",mark);
    return 0;
}