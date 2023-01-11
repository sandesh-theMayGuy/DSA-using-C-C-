#include <stdio.h>


void findSumAvg(int a, int b , int *p1, float *p2){
    *p1 = a+b;
    *p2 = ((a+b)/2.0);
}

int main(){
    int num1=5, num2=4 , sum;
    float avg;
    findSumAvg(num1,num2,&sum,&avg);

    printf("Sum = %d\nAverage=%f",sum,avg);
}