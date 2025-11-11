#include <stdio.h> 

   int main() {

    //Carta 1//

    char Estado1[30];
    char Codigocarta1[4];
    char Nomecidade1[30];
    signed long int Populacao1;
    float Area1;
    float Pib1;
    int Pontosturisticos1;

    //Carta 2//

    char Estado2[30];
    char Codigocarta2[4]; 
    char Nomecidade2[30]; 
    signed long int Populacao2; 
    float Area2; 
    float Pib2; 
    int Pontosturisticos2;


    //Inserção de Dados Carta 1//

    printf("Cadastro da Carta 1 \n");

    printf("Insira o Nome do Estado: ");
    fgets(Estado1, sizeof(Estado1), stdin);

    printf("Insira o Código da carta: ");
    fgets(Codigocarta1, sizeof(Codigocarta1), stdin);

    printf("Insira o Nome da Cidade: ");
    fgets(Nomecidade1, sizeof(Nomecidade1), stdin);

    printf("Insira a População: ");
    scanf("%ld", &Populacao1);

    printf("Insira a Área em km: ");
    scanf("%f", &Area1);

    printf("Insira o PIB: ");
    scanf("%f", &Pib1);

    printf("Insira a quantidade de pontos Turísticos: ");
    scanf("%d", &Pontosturisticos1);

    printf("Densidade Populacional: %.2f hab/km^2 \n", Populacao1 / Area1); // Densidade Populacional = População1 / pela Área1

    printf("PIB Per Capita: R$ %.2f \n", Pib1 / Populacao1); // PIB Per Capita = PIB1 / Por População

    //Inserção de Dados Carta 2//

    printf("Cadastro da Carta 2 \n");

    // Limpa o buffer antes do primeiro fgets
    while (getchar() != '\n');

    printf("Insira o Nome do Estado: ");
    fgets(Estado2, sizeof(Estado2), stdin);

    printf("Insira o Código da carta: ");
    fgets(Codigocarta2, sizeof(Codigocarta2), stdin);

    printf("Insira o Nome da Cidade: ");
    fgets(Nomecidade2, sizeof(Nomecidade2), stdin);

    printf("Insira a População: ");
    scanf("%ld", &Populacao2);

    printf("Insira a Área em km: ");
    scanf("%f", &Area2);

    printf("Insira o PIB: ");
    scanf("%f", &Pib2);

    printf("Insira a quantidade de pontos Turísticos: ");
    scanf("%d", &Pontosturisticos2);

    printf("Densidade Populacional: %2.f hab/km^2\n", Populacao2 / Area2); // Densidade Populacional = População2 / pela Área2


    printf("PIB Per Capita: R$ %2.f \n", Pib2 / Populacao2); // PIB Per Capita = PIB1 / Por População


    //Indicadores calculados

    float Densidade1, Densidade2;
    float PibPercapita1, PibPercapita2;
    float SuperPoder1, SuperPoder2; 

    //Cálculos 

    Densidade1 = Populacao1 / Area1;
    Densidade2 =  Populacao2 / Area2;

    PibPercapita1 = Pib1 / Populacao1;
    PibPercapita2 = Pib2 / Populacao2;

    SuperPoder1 = Populacao1 + Area1 + Pib1 + Pontosturisticos1 + PibPercapita1 + (1.0 / Densidade1);
    SuperPoder2 = Populacao2 + Area2 + Pib2 + Pontosturisticos2 + PibPercapita2 + (1.0 / Densidade2);

    //Comparações

    printf("\nComparacao de Cartas\n");

    printf("População: Carta 1 venceu (%d)\n", Populacao1 > Populacao2);
    printf("Área: Carta 1 venceu (%d)\n", Area1 > Area2);
    printf("PIB: Carta 1 venceu (%d)\n", Pib1 > Pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", Pontosturisticos1 > Pontosturisticos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", Densidade1 < Densidade2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", PibPercapita1 > PibPercapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n",SuperPoder1 > SuperPoder2);


    return 0;

   }