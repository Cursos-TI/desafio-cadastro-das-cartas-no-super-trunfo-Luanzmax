#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    //Declarando as variáveis
    char estado1, estado2;
    char cod_cidade1[5], cod_cidade2[5];
    char nome_cidade1[50], nome_cidade2[50];
    int populacao1, populacao2;
    float area_km1, area_km2;
    float PIB1, PIB2;
    int ponto_turistico1, ponto_turistico2;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    //Cadastrando a carta 1
    printf("Digite a letra do estado da carta 1:\n");
    scanf(" %c", &estado1);

    printf("Digite o código (A01, A02 etc...):\n");
    scanf(" %s", &cod_cidade1);

    printf("Digite o nome da cidade:\n");
    scanf(" %s", &nome_cidade1);

    printf("Digite o tamanho da população:\n");
    scanf(" %d", &populacao1);

    printf("Digite o tamanho da área desse estado:\n");
    scanf(" %f", &area_km1);

    printf("Digite o PIB desse estado:\n");
    scanf(" %f", &PIB1); 

    printf("Quantos pontos turísticos possui:\n");
    scanf(" %d", &ponto_turistico1);

    //Cadastrando a carta 2
    printf("Digite a letra do estado da carta 2: \n");
    scanf(" %c", &estado2);

    printf("Digite o código (B01, B02 etc...):\n");
    scanf(" %s", &cod_cidade2);

    printf("Digite o nome da cidade:\n");
    scanf(" %s", &nome_cidade2);

    printf("Digite o tamanho da população:\n");
    scanf(" %d", &populacao2);

    printf("Digite o tamanho área desse estado:\n");
    scanf(" %f", &area_km2);

    printf("Digite o PIB desse estado:\n");
    scanf(" %f", &PIB2);

    printf("Quantos pontos turísticos possui:\n");
    scanf(" %d", &ponto_turistico2);
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    //Exibindo os dados das duas cartas.

    //Carta 1
    printf("Carta 1:\n");
    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", cod_cidade1);
    printf("Nomes da cidade: %s \n", nome_cidade1);
    printf("População: %d \n", populacao1);
    printf("Área do Estado: %.2f km² \n", area_km1);
    printf("PIB: %.2f Bilhões de reais \n", PIB1);
    printf("Pontos turísticos: %d \n", ponto_turistico1);
    printf("\n");

    //Carta 2
    printf("Carta2:\n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", cod_cidade2);
    printf("Nomes da cidade: %s \n", nome_cidade2);
    printf("População: %d \n", populacao2);
    printf("Área do Estado: %.2f km² \n", area_km2);
    printf("PIB: %.2f Bilhões de reais \n", PIB2);
    printf("Número de pontos turísticos: %d \n", ponto_turistico2);

    return 0;
}
