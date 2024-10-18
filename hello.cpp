#include<stdio.h>

int main()
{
    float r;
    
    printf("Enter the value of r = ");
    scanf("%f", &r);
    
    float p = 2*3.1416*r;
    
    printf("perimeter = %.2f", p);
    
    return 0;
}
