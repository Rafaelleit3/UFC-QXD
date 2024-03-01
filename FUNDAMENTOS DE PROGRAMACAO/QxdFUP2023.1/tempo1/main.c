#include <stdio.h>

int main()
{
  
  int segundos, minutos, horas, resto_min;
  
  scanf("%d", &segundos);
  
  horas = segundos / 3600;
  resto_min = segundos % 3600;
  minutos = resto_min / 60;
  resto_min = resto_min % 60;
  

  printf("%d:%d:%d", horas,minutos,resto_min);


    return 0;
}
