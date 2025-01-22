#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char state;
    char cardID[3], city[30];
    int population, touristAttractionNumber;
    float area, pib;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Digite a letra do Estado: ");
    scanf("%c", &state);

    printf("Digite o Código da Carta: ");
    scanf("%s", &cardID);

    printf("Digite o Nome da Cidade: ");
    fgets(city, sizeof(city), stdin);
    city[strcspn(city, "\n")] = '\0'; 

    printf("Digite a Área: ");
    scanf("%f", &area);

    printf("Digite a População: ");
    scanf("%d", &population);

    printf("Digite o PIB: ");
    scanf("%f", &pib);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &touristAttractionNumber);
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("\nEstado: %c\n", state);
    printf("Código da Carta: %s\n", cardID);
    printf("Nome da Cidade: %s\n", city);
    printf("População: %d\n", population);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", touristAttractionNumber);

    return 0;
}
