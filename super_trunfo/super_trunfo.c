#include <stdio.h>
int main() {

    // Variáveis para a primeira cidade
    char estado1[20];
    char codigo1[5];
    char nome1[100];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;

//Estado1: Bahia, Código1: BA01, Cidade1: Salvador, População1: 11.000.000, Área1: 560.000
// PIB1: 352 bi, Pontos Turísticos1: 92

    // Variáveis para a segunda cidade
    char estado2[20];
    char codigo2[5];
    char nome2[100];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;

// Estado2: Paraná, Código2 PA01, Cidade2: Curitiba, População2 14.000.000, Área2: 200.000
// PIB2: 549 bi, Pontos Turísticos2: 55

    // Cidade 1
    printf("\nCadastro da Cidade 1\n");

    printf("Estado: ");
    fgets(estado1, sizeof(estado1), stdin);

    printf("Código: ");
    fgets(codigo1, sizeof(codigo1), stdin);

    printf("Nome da cidade: ");
    fgets(nome1, sizeof(nome1), stdin);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);

    printf("Pontos turísticos: ");
    scanf("%d", &pontos1);
    getchar(); // limpa o ENTER

    //Cidade 2
    printf("\nCadastro da Cidade 2\n");

    printf("Estado: ");
    fgets(estado2, sizeof(estado2), stdin);

    printf("Código: ");
    fgets(codigo2, sizeof(codigo2), stdin);

    printf("Nome da cidade: ");
    fgets(nome2, sizeof(nome2), stdin);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);

    printf("Pontos turísticos: ");
    scanf("%d", &pontos2);

    //  Exibição dos dados 
    printf("\nCIDADES CADASTRADAS\n");

    printf("\nCidade 1:\n");
    printf("Estado: %s", estado1);
    printf("Código: %s", codigo1);
    printf("Nome: %s", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos1);

    printf("\nCidade 2:\n");
    printf("Estado: %s", estado2);
    printf("Código: %s", codigo2);
    printf("Nome: %s", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos2);

    return 0;
}
