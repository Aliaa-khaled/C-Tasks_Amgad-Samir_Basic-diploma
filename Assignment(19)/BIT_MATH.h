#ifndef BIT_MATH_H
#define BIT_MATH_H

// Set a specific bit in VAR
#define SET_BIT(VAR, BIT_NUM) ((VAR) |= (1 << (BIT_NUM)))

// Clear a specific bit in VAR
#define CLR_BIT(VAR, BIT_NUM) ((VAR) &= ~(1 << (BIT_NUM)))

// Toggle a specific bit in VAR
#define TOG_BIT(VAR, BIT_NUM) ((VAR) ^= (1 << (BIT_NUM)))

// Get the value of a specific bit in VAR
#define GET_BIT(VAR, BIT_NUM) (((VAR) >> (BIT_NUM)) & 1)

#endif /* BIT_MATH_H */
