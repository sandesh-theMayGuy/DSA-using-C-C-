//Menu driven program to perform insertion(push) , deletion(pop) and search operation on an array using functions

#include<stdio.h>
int arr[100] , size ,i;

void displayArray(){
    printf("The array elements are : \n");

    for(i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}

void inputArray(){

    for(i=0;i<size;i++){
        printf("Enter arr[%d] element : ",i);
        scanf("%d",&arr[i]);
    }

}

void push(int data , int index){
        for(i=size;i>index;i--){
            arr[i] = arr[i-1];
        }

        arr[index] = data;
        size++;
}

void pop(int index){
        for(i=index;i<size-1;i++){
            arr[i] =arr[i+1];
        }
        size--;
}

void search(int data){
        for(i=0;i<size;i++){
            if(arr[i]==data){
                printf("%d found at index %d\n",data,i);
                return;
            }
       }
            printf("%d not found in the array\n",data);
}


int main(){
    int choice , data , index;
    printf("Enter size of array : ");
    scanf("%d",&size);

    inputArray();
    displayArray();



    while(1){
        printf("\nWhat do you want to perform:\n1.Push\n2.Pop\n3.Search\n4.Exit:\n");
        scanf("%d",&choice);

        switch(choice){
            case 1:
                    printf("Enter element to push : ");
                    scanf("%d",&data);
                    printf("Enter index : ");
                    scanf("%d",&index);
                    push(data,index);
                    displayArray();
                    break;
            case 2:
                    printf("Enter index of element do delete : ");
                    scanf("%d",&index);
                    pop(index);
                    displayArray();
                    break;
            case 3:
                    printf("Enter number to search : ");
                    scanf("%d",&data);
                    search(data);
                    break;
            case 4:
                    return 0;
            default:
                    printf("Please Enter valid choice\n");
                    
        
        }
    }
}
