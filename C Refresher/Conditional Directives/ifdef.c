#include <stdio.h>

#define SANDESH 10

#define YOLO 5

#undef YOLO         //undefined YOLO


int main(){

    #ifdef SANDESH    //if macro SANDESH is defined
        printf("SANDESH defined...\n");

    #else   
        printf("SANDESH not defined....\n");
    #endif

    #ifndef YOLO      //if not defined
        printf("YOLO not defined...\n");
    #else   
        printf("YOLO defined...\n");

    #endif




    return 0;
}