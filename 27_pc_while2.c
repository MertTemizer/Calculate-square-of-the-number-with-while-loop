#include <stdio.h>

int main()
{
    float number, square;
    
    printf("Type in a number or zero to stop: ");
    scanf("%f", &number);
    
    while(number != 0)
    {
        square = number * number;
        printf("The square of the number is: %f\n", square);
        
        printf("Type in a number or zero to stop: ");
        scanf("%f", &number);
    }
    
    return 0;
}
