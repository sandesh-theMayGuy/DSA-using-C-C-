#include "complex_numbers.h"

COMPLEX add(COMPLEX C1 ,COMPLEX C2){
    COMPLEX C3;
    C3.real = C1.real + C2.real;
    C3.img = C1.img + C2.img;
    return C3;
}



