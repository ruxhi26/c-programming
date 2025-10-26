#include <stdio.h> //header file//

int main() // main function returns int value//
{
    float a=8.755999999999;
    long double b=8.9;
    printf("%.9f %Lf\n",a,b);
    printf("%lu\n", sizeof(int));    // sizeof operator returns the size of int in bytes//
    printf("%lu\n", sizeof(char));   // sizeof operator returns the size of char in bytes//
    printf("%lu\n", sizeof(float));  // sizeof operator returns the size of float in bytes//
    printf("%lu\n", sizeof(double)); // sizeof operator returns the size of double in bytes//

    return 0;
}