#include <stdio.h>
#define a 0


int main(){
    #if a>0
        printf("Positive...\n");

    #elif a==0
        printf("Zero...\n");
    #else
        printf("Negative...\n");

    #endif


}