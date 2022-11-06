//Program to input and display user given array elements
#include<stdio.h>

int main(){
    int arr[100] , size;
    printf("Enter size of array : ");
    scanf("%d",&size);

    for(int i=0; i<size; ++i){
        printf("Enter arr[%d] : ",i);
        scanf("%d",&arr[i]);
    }

    printf("The array elements are:\n");

    for(int i=0; i<size; ++i){
        printf("%d\n",arr[i]); 
    }
    
    return 0;
}
