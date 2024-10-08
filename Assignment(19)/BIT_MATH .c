#include "BIT_MATH.h"

int main() {
    unsigned char var = 0x0A; // Example variable

    SET_BIT(var, 3); 
    CLR_BIT(var, 1); 
    TOG_BIT(var, 2); 
    int bit_value = GET_BIT(var, 0); 

    return 0;
}
