#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    //Solicitando dados da carta 1:
    printf("Informe o Estado da Carta 1: ");
    char estado;
    scanf("%c", &estado);
    
    printf("Informe o Código do seu Estado: ");
    char codigo[10];
    scanf("%s", codigo);

    printf("Informe o nome da Cidade: ");
    char cidade[20];
    scanf("%s", cidade);

    printf("Informe número de habitantes: ");
    int habitantes;
    scanf("%d", &habitantes);

    printf("Informe a Área: ");
    float area;
    scanf("%f", &area);

    printf("Informe o PIB: ");
    float pib;
    scanf("%f", &pib);

    printf("Informe o número de ponto turísticos: ");
    int pontoTuristicos;
    scanf("%d", &pontoTuristicos);

    //Solicitando dados da carta2
    printf("Informe o Estado da Carta 2: ");
    char estado1;
    scanf(" %c", &estado1);
    
    printf("Informe o Código do seu Estado: ");
    char codigo1[10];
    scanf("%s", codigo1);

    printf("Informe o nome da Cidade: ");
    char cidade1[20];
    scanf("%s", cidade1);

    printf("Informe número de habitantes: ");
    int habitantes1;
    scanf("%d", &habitantes1);

    printf("Informe a Área: ");
    float area1;
    scanf("%f", &area1);

    printf("Informe o PIB: ");
    float pib1;
    scanf("%f", &pib1);

    printf("Informe o número de ponto turísticos: ");
    int pontoTuristicos1;
    scanf("%d", &pontoTuristicos1);

    //Exibindo informções da Carta 1
    printf("\n-----------EXIBINDO INFORMAÇÕES DA CARTA 1---------------\n");

    printf("Estado: %c\n", estado);
    printf("Código: %c%s\n", estado, codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", habitantes);
    printf("Área: %.2f Km²\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Ponto Turísticos: %d\n", pontoTuristicos);

    //Exibindo informações da Carta 2
    printf("\n-----------EXIBINDO INFORMAÇÕES DA CARTA 2---------------\n");

    printf("Estado: %c\n", estado1);
    printf("Código: %c%s\n", estado1, codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", habitantes1);
    printf("Área: %.2f Km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Ponto Turísticos: %d\n", pontoTuristicos1);

    return 0;
}
