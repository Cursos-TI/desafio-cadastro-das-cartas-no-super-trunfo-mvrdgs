#include <stdio.h>

typedef struct {
    char state;
    char cardID[3];
    char city[30];
    int population;
    int touristAttractionNumber;
    float area;
    float pib;
} Card;

Card createCard() {
    Card card;

printf("Digite a letra do Estado: ");
    scanf("%c", &card.state);

    printf("Digite o Código da Carta: ");
    scanf("%s", &card.cardID);

    getchar();

    printf("Digite o Nome da Cidade: ");
    fgets(card.city, sizeof(card.city), stdin);
    card.city[strcspn(card.city, "\n")] = '\0'; 

    printf("Digite a Área: ");
    scanf("%f", &card.area);

    printf("Digite a População: ");
    scanf("%d", &card.population);

    printf("Digite o PIB: ");
    scanf("%f", &card.pib);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &card.touristAttractionNumber);

    return card;
};

int main() {
    Card card = createCard();

    printf("\nEstado: %c\n", card.state);
    printf("Código da Carta: %s\n", card.cardID);
    printf("Nome da Cidade: %s\n", card.city);
    printf("População: %d\n", card.population);
    printf("Área: %.2f km²\n", card.area);
    printf("PIB: %.2f bilhões de reais\n", card.pib);
    printf("Número de Pontos Turísticos: %d\n", card.touristAttractionNumber);

    return 0;
}
