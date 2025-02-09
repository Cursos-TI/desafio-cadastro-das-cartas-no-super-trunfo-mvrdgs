#include <stdio.h>

typedef struct {
    char state;
    char cardID[3];
    char city[30];
    int population;
    int touristAttractionNumber;
    float area;
    float pib;
    float populationalDensity;
    float pibPerCapita;
    float superPower;
} Card;

Card createCard(int cardNumber) {
    Card card;

    printf("\nDigite as informações da %dª carta", cardNumber);

    printf("\nDigite a letra do Estado: ");
    scanf("%c", &card.state);

    printf("Digite o Código da Carta: ");
    scanf("%s", &card.cardID);

    printf("Digite o Nome da Cidade: ");
    scanf("%s", &card.city);

    printf("Digite a Área: ");
    scanf("%f", &card.area);

    printf("Digite a População: ");
    scanf("%d", &card.population);

    printf("Digite o PIB: ");
    scanf("%f", &card.pib);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &card.touristAttractionNumber);

    getchar();

    card.populationalDensity = card.population / card.area;
    card.pibPerCapita = card.pib / card.population;
    card.superPower = card.area + card.population + card.pib + card.touristAttractionNumber;

    return card;
};

void printCard(Card card) {
    printf("\nEstado: %c\n", card.state);
    printf("Código da Carta: %s\n", card.cardID);
    printf("Nome da Cidade: %s\n", card.city);
    printf("População: %d\n", card.population);
    printf("Área: %.2f km²\n", card.area);
    printf("PIB: %.2f bilhões de reais\n", card.pib);
    printf("Número de Pontos Turísticos: %d\n", card.touristAttractionNumber);
    printf("Densidade populacional: %f\n", card.populationalDensity);
    printf("PIB per Capita: %f\n", card.pibPerCapita);
    printf("Super Poder: %f\n", card.superPower);
}

void compareCards(Card card1, Card card2) {
    Card winner;

    winner = (card1.population > card2.population) ? card1 : card2;
    printf("\nA população da cidade %s é maior: %d", winner.city, winner.population);

    
    winner = (card1.area > card2.area) ? card1 : card2;
    printf("\nA área da cidade %s é maior: %d", winner.city, winner.area);

    
    winner = (card1.pib > card2.pib) ? card1 : card2;
    printf("\nO PIB da cidade %s é maior: %d", winner.city, winner.pib);

    
    winner = (card1.touristAttractionNumber > card2.touristAttractionNumber) ? card1 : card2;
    printf("\nO número de atrações turísticas da cidade %s é maior: %d", winner.city, winner.touristAttractionNumber);

    
    winner = (card1.populationalDensity < card2.populationalDensity) ? card1 : card2;
    printf("\nA densidade populacional da cidade %s é menor: %d", winner.populationalDensity, winner.populationalDensity);

    
    winner = (card1.pibPerCapita > card2.pibPerCapita) ? card1 : card2;
    printf("\nO PIB per capita da cidade %s é maior: %d", winner.city, winner.population);

    
    winner = (card1.superPower > card2.superPower) ? card1 : card2;
    printf("\nO Super Poder da cidade %s é maior: %d\n", winner.city, winner.superPower);
}

int main() {
    Card card1 = createCard(1);
    printCard(card1);

    Card card2 = createCard(2);
    printCard(card2);

    compareCards(card1, card2);
    
    return 0;
}
