#include <stdio.h>
#include <math.h>

int main(){
    
    int q;
    
    scanf("%d", &q);
    int vetor[q];
    
    for(int k = 0; k < q; k++){
        
        scanf("%d",&vetor[k]); //adicionando valores ao vetor
        
    }
    
    int soma = 0;
    for(int i = 0, j = q - 1; i < q; i++, j--){
        
        soma += vetor[i] * pow(10, j);
        
    }
    
    printf("%d", soma);
    
    return 0;
}
