//1.To implement floor and ceiling function
#include <stdio.h>
#include <math.h>
int main()
{
    float num;
    printf("Enter a floating point number: ");
    scanf("%f", &num);
    printf("The floor is: %.0f", floor(num));
    printf("\nThe ceiling is: %.0f", ceil(num));
    return 0;
}
