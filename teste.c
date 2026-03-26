#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    float notas[10], soma = 0, media;
    int i;
    char entrada[20];

    for (i = 0; i < 10; i++){
        printf("Digite a nota %d: ", i + 1);
        scanf("%s", entrada);

        for (int j = 0; entrada[j] != '\0'; j++){
            if (entrada[j] == ',') entrada[j] = '.';
        }

        notas[i] = atof(entrada);
        soma += notas[i];
    }

    media = soma / 10;

    printf("\nSoma das notas: %.2f\n", soma);
    printf("Media das notas: %.2f\n", media);
    printf("\nNotas acima da media:\n");

    for (i = 0; i < 10; i++){
        if (notas[i] > media){
            printf("Nota %d: %.2f\n", i + 1, notas[i]);
        }
    }

    return 0;

}