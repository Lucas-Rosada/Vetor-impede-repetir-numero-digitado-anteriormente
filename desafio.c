#include <stdio.h>
int vetorA[10];
int i, k;

int main()
{
    printf("\nDigite 10 elementos para o Conjunto A:\n");
    for(i=0;i<10;i++){//Carregando o vetor
        printf("Digite o valor %d: ", i+1);
        scanf("%d", &vetorA[i]);//Coleta os valores para o vetor

        for(k=0;k<=i-1;k++){//Verificando se o valor ja digitado antes
            if(vetorA[i]==vetorA[k]){
                printf("Valor %d ja exite no vetor\n", vetorA[i]);//Informa que o valor ja existe
                i-=1;//Retira o numero repetido
            }
        }
    }
    printf("Numeros sem repeticao= { ");//Imprimindo o conjunto

    for(i=0;i<10;i++){
        printf("%d, ", vetorA[i]);//Mostra os numeros sem repetição
    }
        printf("}\n");
}
