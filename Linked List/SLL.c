#include <stdio.h>
#include <stdlib.h>


struct node{
    int data;
    struct node *next;
};

typedef struct node NODE;

NODE *START;

void createEmptyList(NODE *START){
    START = (NODE*)(malloc(sizeof(NODE)));
}


void insertAtBeggining(int item){
    NODE *newNode = (NODE*)malloc(sizeof(NODE));
    newNode->data = item;

    if(START==(NODE*)(NULL)){
        START = newNode;
        newNode->next = NULL;
        return;
    }
    newNode->next = START;
    START = newNode;
}



void traverse(NODE *START){

    if(START==(NODE*)(NULL)){
        printf("List is empty...");
        return;
    }

    NODE *temp;
    temp = START;
   while(temp!=(NODE*)NULL){
    printf("%d\n",temp->data);
    temp = temp->next;
   }

}
int main(){

    int choice , data;

    createEmptyList(START);

    while(1){

    printf("What do you want to perform?\n1.Insetion at beggining\n2.Traverse\nEnter your choice:\n");
    scanf("%d",&choice);

    switch(choice){
        case 1: printf("Enter data to insert:");
                scanf("%d",&data);
                insertAtBeggining(data);
                break;

        case 2: traverse(START);
                break;
        default: printf("Please Enter valid choice:\n");
    }


}

}