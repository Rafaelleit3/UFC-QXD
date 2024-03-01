#include <stdio.h>

int main()
{
    float c, f , tc, tf;
    
    
    scanf("%f %f",&c,&f);
    
    tc = ((f - 32)/9)*5;
    tf = (c/5)*9 + 32;
    
    printf("%f C = %f F",c,tf);
    printf("%f F = %f C",f,tc);
    
    
    
    

    return 0;
}
