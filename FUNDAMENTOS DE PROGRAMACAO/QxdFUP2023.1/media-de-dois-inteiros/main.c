//media de dois inteiros

#include <stdio.h>

int main()
{
    
    float v1, v2;
    float media;
    
    printf ("Primeiro valor: ");
    scanf ("%f", &v1);
    
    printf("Segundo valor: ");
    scanf("%f", &v2);
    
    media = (v1 + v2)/2 ;
    printf("A média de %.1f e %.1f = %.1f", v1,v2,media);

    
    return 0;
}
