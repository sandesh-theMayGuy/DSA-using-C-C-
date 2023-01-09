#include <stdio.h>



int main(){

    #ifdef _WIN32
        printf("Windows 32 bit....\n");
    #endif


    #ifdef _WIN64
        printf("Windows 64 bit....\n");
    #endif 

    #ifdef _APPLE__
        printf("Apple machine....\n");
    #endif

    #ifdef __linux__
        printf("Linux machine....\n");
    #endif

    
}