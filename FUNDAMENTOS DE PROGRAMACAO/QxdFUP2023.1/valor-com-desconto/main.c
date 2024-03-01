#include <stdio.h>

int main()
{
    
    
    float v1, v2 , p, d;
    
    scanf("%f %f",&v1,&v2);
    
    p = v2 / 100;
    
    d = v1 - (v1 * p);

    
    printf("O valor do produto eh %.2f reais com desconto de %.2f%% fica por %.2f reais.",v1,v2,d);
    
    

    return 0;
}
