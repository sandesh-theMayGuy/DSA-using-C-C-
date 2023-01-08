#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *LChild;
    struct node *RChild;
};

typedef struct node NODE;

//Inorder traversal

void inorder(NODE *root){
    if(root==NULL) return;

    inorder(root->LChild);
    printf("%d->",root->data);
    inorder(root->RChild);
}


//Preorder traversal

void preorder(NODE *root){
    if(root==NULL) return;

    printf("%d->",root->data);
    preorder(root->LChild);
    preorder(root->RChild);


}


void postorder(NODE *root){
    if(root==NULL) return;

    postorder(root->LChild);
    postorder(root->RChild);
    printf("%d->",root->data);
}


//create a new node

NODE* createNewNode(int value){

    NODE* newNode= malloc(sizeof(NODE));
    newNode->data = value;
    newNode->LChild = NULL;
    newNode->RChild = NULL;


    return newNode;
}


int main(){

    NODE *root = NULL;

    root=createNewNode(1);
    root->LChild = createNewNode(2);
    root->RChild = createNewNode(3);

    root->LChild->LChild = createNewNode(4);
    root->LChild->RChild = createNewNode(5);


    root->RChild->LChild= createNewNode(6);
    root->RChild->RChild = createNewNode(7);

    root->LChild->RChild->LChild = createNewNode(8);

    root->RChild->LChild->RChild = createNewNode(9);

    root->RChild->RChild->RChild = createNewNode(10);


    printf("\nInorder traversal : \n");
    inorder(root);

    printf("\nPreorder traversal : \n");
    preorder(root);

    printf("\nPostorder traversal : \n");
    postorder(root);

    return 0;
}