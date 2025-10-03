#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct territorio{
    char nome[30];
    char cor[10];
    int tropas;

};
void removerquebralinha(char *str){
    str[strcspn(str, "\n")] = '\0';
}

int main(){
    struct territorio territorios[5];
    int i;

    for(i = 0; i<5; i++){
        printf("\n=== Cadastro de territorios %d ===\n", i + 1);
        printf("Digite o nome: ");
        fgets(territorios[i].nome, sizeof(territorios[i].nome), stdin );
        removerquebralinha(territorios[i].nome);

        printf("Digite a cor do exercito: ");
        fgets(territorios[i].cor, sizeof(territorios[i].cor), stdin);
        removerquebralinha(territorios[i].cor);

        printf("Digite a quantidade de tropas: ");
        scanf("%d", &territorios[i].tropas);

        getchar();

    }
    printf("\n=== Territorios Cadastrados ===\n");
    for(i = 0; i<5; i++){
        printf("\nTerritorio %d:\n", i + 1);
        printf("Nome: %s\n", territorios[i].nome);
        printf("Cor do exercito: %s\n",territorios[i].cor);
        printf("Quantidade de tropas: %d\n", territorios[i].tropas);

    }

    return 0;
}

