#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
        char estado1 ='A', estado2 ='B';
        char Nome_da_CidadeA[20]="Sao Paulo",Nome_da_CidadeB[20]="Rio de janeiro";
        char codigodacidadeA[20],codigodacidadeB[20];
        int PopulacaoA , PopulacaoB ;
        float AreaemKmA , AreaemKmB ;
        float PibA , PibB ;
        int Pontos_TuristicoA , Pontos_TuristicoB;
    
     
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio
    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)
    printf("Digite os dados da Cidade :\n");
    scanf("%s",&codigodacidadeA );
    scanf("%s",&codigodacidadeB );
    printf("Digite a população :\n");
    scanf("%i",&PopulacaoA );
    scanf("%i",&PopulacaoB );
    printf("Digite a Area porKm² :\n");
    scanf("%f",&AreaemKmA );
    scanf("%f",&AreaemKmB);
    printf("Digite o Pib :\n");
    scanf("%f",&PibA );
    scanf("%f",&PibB );
    printf("Digite os Pontos turistico :\n");
    scanf("%d",&Pontos_TuristicoA );
    scanf("%d",&Pontos_TuristicoB );
    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }
    if (PopulacaoA > PopulacaoB)
{
    printf("Cidade A tem maior população.\n");
}else
{
    printf("Cidade B tem maior população.\n");
}
if (AreaemKmA > AreaemKmB)
{
    printf("Cidade A tem maior Area por km².\n");
}else
{
    printf("Cidade B tem maior Area por km².\n");

}
if (PibA > PibB)
{
    printf("Cidade A tem maior Pib.\n");
}else
{
    printf("Cidade B tem maior Pib.\n");

}
if (Pontos_TuristicoA > Pontos_TuristicoB)
{
    printf("Cidade A tem mais Pontos turisticos.\n");
}else
{
    printf("Cidade B mais Pontos turisticos.\n");

}

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);
    return 0;
}
