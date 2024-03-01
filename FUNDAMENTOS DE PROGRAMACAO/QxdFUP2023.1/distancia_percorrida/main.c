#include <stdio.h>

int main()
{
    
    float t, vm, d, ql;
    
    
    scanf  ("%f %f",&t,&vm);
    
    d = t * vm;
    
    ql = d / 12;
    
    printf("A distância percorrida foi de %.2fKM/h com o consumo de %.2fL.",d,ql);
    

    return 0;
}
