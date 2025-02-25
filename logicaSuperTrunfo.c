#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
        char Estado ='A', Estado ='B';
        char Nome_da_CidadeA[20]="Sao Paulo",Nome_da_CidadeB[20]="Rio de janeiro";
        char codigodacidadeA[20],codigodacidadeB[20];
        int PopulacaoA , PopulacaoB ;
        float AreaemKmA , AreaemKmB ;
        float PibA , PibB ;
        int Pontos_TuristicoA , Pontos_TuristicoB;
    
     
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio
    printf("Digite os dados da Cidade :\n");
    scanf("%s",&codigodacidadeA,&codigodacidadeB);
    scanf("%i",&PopulacaoA,&PopulacaoB);
    scanf("%f",&AreaemKmA,&AreaemKmB);
    scanf("%f",&PibA,&PibB);
    scanf("%i",&Pontos_TuristicoA,Pontos_TuristicoB);
    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
