

2. given Array[6]={7,6,3,34,10,710}
2.1 write a program display on the screen by following format:
  #include<stdio.h>

    void example_1(){
    int Array[6] = {7, 6, 3, 34, 10, 710};
    int i;
    for (i = 0; i < 6; i++){
        printf("The element %d of the array is %d \r\n", i + 1, Array[i]);
    }
    }

    void example_2(){
        int Array[6] = {7, 6, 3, 34, 10, 710};
        int i;
        i = 0;
    while (i < 6){
        printf("The element %d of the array is %d \r\n", i + 1, Array[i]);
        i++;
    }
    }

    void example_3(){
        int Array[6] = {7, 6, 3, 4, 34, 10, 710};
        int i;
        i = 0;
    do {
        printf("The element %d of the array is %d \r\n", i + 1, Array[i]);
        i++;
    } while (i < 6);
    }

    int main(){
        example_1();
        example_2();
        example_3();
        return 0;
    }

    //bai tap 1 
   

    
       
        


  

 

