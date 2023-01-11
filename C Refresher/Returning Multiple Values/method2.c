#include<stdio.h>

typedef struct{
    int sum;
    float avg;
}data;


data findSumAvg(int a, int b){
    data D;
    D.sum = a+b;
    D.avg = (a+b)/2.0;
    return D;
}

int main(){
    int a=5, b=4;
    data res = findSumAvg(a,b);
    printf("Sum = %d\nAverage=%f",res.sum,res.avg);

}