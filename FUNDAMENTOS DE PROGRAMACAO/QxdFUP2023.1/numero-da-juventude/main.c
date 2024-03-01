#include <stdio.h>

int main()
{
   
   float peso, altura, idade, anonasc, dianasc;
   float numj;
   
   scanf("%f", &peso);
   scanf("%f", &altura);
   scanf("%f", &idade);
   scanf("%f", &anonasc);
   scanf("%f", &dianasc);
   
   numj = ((peso + altura)/idade + anonasc)*dianasc;
   
   printf("%f",numj);
   
  

    return 0;
}
