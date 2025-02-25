#include <stdio.h>

int main(){
    unsigned long int populacao1, populacao2;
    float area1, area2, PIB1, PIB2;
    int pontos_turisticos1, pontos_turisticos2;
    float densidade1, densidade2, PIB_percap1, PIB_percap2, super_poder1, super_poder2;
    char estado1[20], nome_cidade1[20], codigo_carta1[20], estado2[20], nome_cidade2[20], codigo_carta2[20];

    // Dados da primeira carta
    printf("\nCadastro da Carta 1\n");
    printf("Estado: ");
    scanf(" %s", &estado1);
    printf("Nome da cidade: ");
    scanf(" %s", &nome_cidade1);
    printf("Codigo da carta: ");
    scanf(" %s", &codigo_carta1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (KM²): ");
    scanf("%f", &area1);
    printf("PIB (bi): ");
    scanf("%f", &PIB1);
    printf("Pontos Turisticos: ");
    scanf("%i", &pontos_turisticos1);
    PIB1 = PIB1 * 1e9;  // transforma o valor de PIB em bilhão
    densidade1 = populacao1 / area1;
    PIB_percap1 = PIB1 / populacao1;
    super_poder1 = populacao1 + area1 + PIB1 + pontos_turisticos1 + PIB_percap1 + (1 / densidade1);

    printf("-----Dados da CARTA1 cadastrados com sucesso!! Os dados foram:-----\n");
    printf(">Estado: %s\n", estado1);
    printf("Cidade: %s\n", nome_cidade1);
    printf("Codigo da carta: %s", codigo_carta1);
    printf(">População: %li\n", populacao1);
    printf(">Área (KM²): %f\n", area1);
    printf(">PIB (bi): %f\n", PIB1);
    printf(">Pontos Turisticos: %i\n", pontos_turisticos1);
    printf(">Densidade Populacional: %f\n", densidade1);
    printf(">PIB per Capita: %f\n", PIB_percap1);
    printf(">SUPER PODER %f\n", super_poder1);
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");


    // Dados da segunda carta
    printf("\nCadastro da Carta 2:\n");
    printf("Estado: ");
    scanf(" %s", &estado2);
    printf("Nome da cidade: ");
    scanf(" %s", &nome_cidade2);
    printf("Codigo da carta: ");
    scanf(" %s", &codigo_carta2);
    printf("Populacão: ");
    scanf("%lu", &populacao2);
    printf("Area (km2): ");
    scanf("%f", &area2);
    printf("PIB (bi): ");
    scanf("%f", &PIB2);
    printf("Numero de Pontos Turisticos: ");
    scanf("%i", &pontos_turisticos2);
    PIB2 = PIB2 * 1e9;  // transforma o valor de PIB em bilhão
    densidade2 = populacao2 / area2;
    PIB_percap2 = PIB2 / populacao2;
    super_poder2 = populacao2 + area2 + PIB2 + pontos_turisticos2 + PIB_percap2 + (1 / densidade2);

    printf("-----Dados da CARTA2 cadastrados com sucesso!! Os dados foram:-----\n");
    printf(">Estado: %s\n", estado2);
    printf("Cidade: %s\n", nome_cidade2);
    printf("Codigo da carta: %s\n", codigo_carta2);
    printf(">População: %li\n", populacao2);
    printf(">Área (KM²): %f\n", area2);
    printf(">PIB (bi): %f\n", PIB2);
    printf(">Pontos Turisticos: %i\n", pontos_turisticos2);
    printf(">Densidade Populacional: %f\n", densidade2);
    printf(">PIB per Capita: %f\n", PIB_percap2);
    printf(">SUPER PODER %f\n", super_poder2);
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");

    // Comparação das cartas

    int pontos_carta1 = 0, pontos_carta2 = 0;

    printf("\n<><><><><><><>Comparação de cartas<><><><><><><>\n");
    printf("Carta 1: - %s (%s)\n", nome_cidade1, estado1);
    printf("Carta 2: - %s (%s)\n", nome_cidade2, estado2);
    printf("\n<><><><><><><><><><><><><><><><><><><><><><><><>\n");

    printf("\n<!>Atributo: População <!>\n");
    printf("Carta 1: %li\n", populacao1);
    printf("Carta 2: %li\n", populacao2);
    printf("VVVVVVVVVVVVVVVVVV\n");
    if (populacao1 > populacao2) {
        printf(">>A carta 1 venceu na população.\n");
        pontos_carta1 += 1;
     } else{
        printf(">>A carta 2 venceu na população.\n");
        pontos_carta2 += 1;
     }

    printf("\n<!>Atributo: Área <!>\n");
    printf("Carta 1: %f\n", area1);
    printf("Carta 2: %f\n", area2);
    printf("VVVVVVVVVVVVVVVVVV\n");
    if (area1 > area2) {
        printf(">>A carta 1 venceu na Área.\n");
        pontos_carta1 += 1;
    }  else{
        printf(">>A carta 2 venceu na Área.\n");
        pontos_carta2 += 1;
    }

    printf("\n<!>Atributo: PIB <!>\n");
    printf("Carta 1: %f\n", PIB1);
    printf("Carta 2: %f\n", PIB2);
    printf("VVVVVVVVVVVVVVVVVV\n");
    if (PIB1 > PIB2){
        printf(">> A carta 1 venceu no PIB.\n");
        pontos_carta1 += 1;
    } else{
        printf("A carta 2 venceu no PIB\n");
        pontos_carta2 += 1;
    }
    
    printf("\n<!>Atributo: Pontos Turísticos <!>\n");
    printf("Carta 1: %i\n", pontos_turisticos1);
    printf("Carta 2: %i\n", pontos_turisticos2);
    printf("VVVVVVVVVVVVVVVVVV\n");
    if (pontos_turisticos1 > pontos_turisticos2){
        printf(">> A carta 1 venceu no Pontos Turísticos.\n");
        pontos_carta1 += 1;
    } else{
        printf(">> A carta 2 venceu no Pontos Turísticos.\n");
        pontos_carta2 += 1;
    }

    printf("\n<!>Atributo: Densidade Populacional <!>\n");
    printf("Carta 1: %f\n", densidade1);
    printf("Carta 2: %f\n", densidade2);
    printf("VVVVVVVVVVVVVVVVVV\n");
    if (densidade1 > densidade2){
        printf(">> A carta 2 venceu no Densidade Populacional.\n");
        pontos_carta2 += 1;
    } else{
        printf(">> A carta 1 venceu no Densidade Populacional.\n");
        pontos_carta1 += 1;
    }

    printf("\n<!>Atributo: PIB per Capita <!>\n");
    printf("Carta 1: %f\n", PIB_percap1);
    printf("Carta 2: %f\n", PIB_percap2);
    printf("VVVVVVVVVVVVVVVVVV\n");
    if (PIB_percap1 > PIB_percap2){
        printf(">> A carta 1 venceu no PIB per Capita.\n");
        pontos_carta1 += 1;
    } else{
        printf(">> A carta 2 venceu no PIB per Capita.\n");
        pontos_carta2 += 1;
    }

    printf("\n<!>Atributo: SUPER PODER <!>\n");
    printf("Carta 1: %f\n", super_poder1);
    printf("Carta 2: %f\n", super_poder2);
    printf("VVVVVVVVVVVVVVVVVV\n");
    if (super_poder1 > super_poder2){
        printf(">> A carta 1 venceu no SUPER PODER.\n");
        pontos_carta1 += 1;
    } else{
        printf(">> A carta 2 venceu no SUPER PODER.\n");
        pontos_carta2 += 1;
    }

    printf("\n>>> A pontuação total das duas cartas foram: Carta1: %i -- Carta2: %i\n", pontos_carta1, pontos_carta2);

    if (pontos_carta1 > pontos_carta2){
        printf(">>A carta 1 é a vencedora !!\n");
    } else{
        if (pontos_carta2 > pontos_carta1){
            printf(">>A carta 2 é a vencedora !!\n");
        }else{
            printf("HOUVE UM EMPATE !!");
        }
    
    }

    return 0;
}