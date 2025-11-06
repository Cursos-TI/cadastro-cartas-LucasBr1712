#include <stdio.h> 

   int main() {

    //Carta 1//

    char Estado1;
    char Codigocarta1[4];
    char Nomecidade1;
    int Populacao1;
    float Area1;
    float Pib1;
    int Pontosturisticos1;

    //Carta 2//

    char Estado2;
    char Codigocarta2[4]; 
    char Nomecidade2; 
    int Populacao2; 
    float Area2; 
    float Pib2; 
    int Pontosturisticos2;


    //Inserção de Dados Carta 1//

    printf("Cadastro da Carta 1 \n");

    printf("Insira o Nome do Estado: ");
    scanf("%s", &Estado1);

    printf("Insira o Codigo da carta: ");
    scanf("%s", &Codigocarta1);

    printf("Insira o Nome da Cidade: ");
    scanf("%s", &Nomecidade1);

    printf("Insira a Populacao: ");
    scanf("%d", &Populacao1);

    printf("Insira a Area em km: ");
    scanf("%f", &Area1);

    printf("Insira o PIB: ");
    scanf("%f", &Pib1);

    printf("Insira a quantidade de pontos Turisticos: ");
    scanf("%d", &Pontosturisticos1);

    //Inserção de Dados Carta 2//

    printf("Cadastro da Carta 2 \n");

    printf("Insira o Nome do Estado: ");
    scanf("%s", &Estado2);

    printf("Insira o Codigo da carta: ");
    scanf("%s", &Codigocarta2);

    printf("Insira o Nome da Cidade: ");
    scanf("%s", &Nomecidade2);

    printf("Insira a Populacao: ");
    scanf("%d", &Populacao2);

    printf("Insira a Area em km: ");
    scanf("%f", &Area2);

    printf("Insira o PIB: ");
    scanf("%f", &Pib2);

    printf("Insira a quantidade de pontos Turisticos: ");
    scanf("%d", &Pontosturisticos2);



    return 0;

   }