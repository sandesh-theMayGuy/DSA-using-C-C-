#include <stdio.h>


int main(){

    #if __GNUC__ <9
        printf("Program not supported....\n");

    #else   
        printf("Welcome to my program....\n");
    #endif

    return 0;
}