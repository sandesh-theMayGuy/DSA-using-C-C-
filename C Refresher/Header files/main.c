#include <stdio.h>
#include "complex_numbers.h"
// ..
// ..
// ......
// ..........
// ............

#include "complex_numbers.h" 

int main(){
    COMPLEX C1 = {5,2};
    COMPLEX C2 = {4,3};

    COMPLEX C3;
    // C3.real = C1.real + C2.real;
    // C3.img = C1.img + C2.img;

    C3 = add(C1,C2);

    printf("(%d + %di) + (%d + %di) = (%d + %di)",C1.real,C1.img,C2.real,C2.img,C3.real,C3.img);
}