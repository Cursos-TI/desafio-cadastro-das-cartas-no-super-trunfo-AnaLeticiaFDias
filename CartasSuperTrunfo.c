#include <stdio.h>


int main() {

    //Declaração de Variáveis 
    char cidade[20], cod[3];
    int habitantes, pontos_turisticos;
    float produto_interno_bruto, dimensao_area;


    // Recebendo os dados do codigo da carta
    printf("Digite o código: Ex: A01\n");
    scanf("%s", &cod);

    // Recebendo o nome da cidade
    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade);

    //Recebendo a quantidade da população
    printf("Digite a população:\n");
    scanf("%d", &habitantes);

    // Recebendo a quantidade de pontos turisticos 
    printf("Digite a quantidade de pontos turísticos:\n");
    scanf("%d", &pontos_turisticos);


    // Recenendo PIB 
    printf("Digite o PIB:\n");
    scanf("%f", &produto_interno_bruto);

    // Recebendo Area 
    printf("Digite a Área:\n");
    scanf("%f", &dimensao_area);


    // Mostrando os dados das cartas digitados.
    printf("DADOS DA CARTA:\n");
    printf("\n");
    printf("CODIGO DA CARTA: %s\n", cod);
    printf("\n");
    printf("CIDADE: %s\n", cidade);
    printf("\n");
    printf("POPULAÇÃO: %d HABITANTES\n", habitantes);
    printf("\n");
    printf("N° DE PONTOS TURISTICO: %d\n", pontos_turisticos);
    printf("\n");
    printf("PIB: R$ %.2f\n", produto_interno_bruto);
    printf("\n");
    printf("ÁREA: %.2f metros quadrado", dimensao_area);

    return 0;
}