#include <stdio.h>
// Perimeter of Square
int main() {
    float l;
    printf("Enter the Length of the Square: ");
    scanf("%f", &l);
    if(l<0 ) {
        printf("Invalid input as the length of a square must be a non-negative values");
    }
    else {
    printf("The Perimeter of the Square is %f", 4*l);
    }
    return 0;
}
