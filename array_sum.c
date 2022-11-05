//Program to input,display and find sum of array elements using function

#include<stdio.h>

void get_array(int arr[] , int size){
    int i;
    for(i=0;i<size;++i){
        printf("Enter arr[%d] : ",i);
        scanf("%d",&arr[i]);
    }
}

void put_array(int arr[] , int size){
    int i;
    printf("The array elements are :\n");
    for(i=0;i<size;++i){
        printf("%d\n",arr[i]);
    }
}

int find_sum(int arr[] , int size){
    int sum=0, i;
    
    for(i=0;i<size;i++){
        sum = sum + arr[i];
    }

    return sum;
}

int main(){
    int arr[100], size, sum;
    printf("Enter size of array : ");
    scanf("%d",&size);

    get_array(arr , size);
    put_array(arr,size);

    sum = find_sum(arr,size);

    printf("Sum = %d\n",sum);
}

