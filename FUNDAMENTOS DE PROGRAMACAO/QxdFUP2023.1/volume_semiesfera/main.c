#include <stdio.h>

int main()
{
    float h,r,pi,volume;
    
    
    scanf("%f %f %f",&h,&r,&pi);
    
    volume = (((pi * h*h)*(3*r - h))/3);
    
    printf("%f",volume);
    

    return 0;
}
