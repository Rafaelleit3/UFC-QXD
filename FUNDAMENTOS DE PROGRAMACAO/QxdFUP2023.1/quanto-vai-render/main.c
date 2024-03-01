#include <stdio.h>
#include <math.h>

int main()
{
    float c, i, t, p, j, m;
    
    scanf("%f %f %f", &c,&i,&t);
    
    p = i/100;
    m = c*pow((1 + p),t);
    j = m - c;
    
    
    
    printf("A aplicacao rendeu %.2f reais que equivale a um rendimento percentual de %.2f%%.",m,j);
    
    
    

    return 0;
}
