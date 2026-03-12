#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    int carta1;
    char estado1[3];
    char codigodacarta1[3];
    char nomedacidade1[20];
    int população1;
    float area1;
    float pib1;
    int pontosturisticos1;
    float pibpercapita1;
    float densidadepopulacional1;
    float superpoder1;

    int carta2;
    char estado2[3];
    char codigodacarta2[3];
    char nomedacidade2[20];
    int população2;
    float area2;
    float pib2;
    int pontosturisticos2;
    float pibpercapita2;
    float densidadepopulacional2;
    float superpoder2;
    
   //desenvolvi separadamente pois estava imprimindo apenas uma das cartas.

    printf("Carta1\n");
    
    printf("Digite o estado: ");
    scanf("%s", &estado1);
    printf("O estado é: %s\n", estado1);
    printf("Digite o código da carta: ");
    scanf("%s", codigodacarta1);
    printf("O código da carta é: %s\n", codigodacarta1);
    printf("Digite o nome da cidade: ");
    scanf("%s", &nomedacidade1);
    printf("Cidade: %s\n", nomedacidade1);
    printf("Digite a populacao: ");
    scanf("%d", &população1);
    printf("A população é: %d\n", população1);
    printf("Digite a area: ");
    scanf("%f", &area1);
    printf("A área é: %f\n", area1);
    printf("Digite o pib: ");
    scanf("%f", &pib1);
    printf("O PIB é: %f\n", pib1);
    printf("Digite os pntos turisticos: ");
    scanf("%d", &pontosturisticos1);
    printf("Pontos Turísticos: %d\n", pontosturisticos1);
    pibpercapita1 = (float) pib1 / população1;
    densidadepopulacional1 = (float) população1 / area1;
    printf("Pibpercapita: %f\n", pibpercapita1);
    printf("Densidade Populacional: %f\n", densidadepopulacional1);
    superpoder1 = (float) população1 + area1 + pib1 + pontosturisticos1 + (pibpercapita1 / 1);

    printf("Carta2\n");

    printf("Digite o estado: ");
    scanf("%s", &estado2);
    printf("O estado é: %s\n", estado2);
    printf("Digite o código da carta: ");
    scanf("%s", codigodacarta2);
    printf("O código da carta é: %s\n", codigodacarta2);
    printf("Digite o nome da cidade: ");
    scanf("%s", &nomedacidade2);
    printf("Cidade: %s\n", nomedacidade2);
    printf("Digite a populacao: ");
    scanf("%d", &população2);
    printf("A população é: %d\n", população2);
    printf("Digite a area: ");
    scanf("%f", &area2);
    printf("A área é: %f\n", area2);
    printf("Digite o pib: ");
    scanf("%f", &pib2);
    printf("O PIB é: %f\n", pib2);
    printf("Digite os pntos turisticos: ");
    scanf("%d", &pontosturisticos2);
    printf("Pontos Turísticos: %d\n", pontosturisticos2);
    pibpercapita2 = (float) pib2 / população2;
    densidadepopulacional2 = (float) população2 / area2;
    printf("Pibpercapita: %f\n", pibpercapita2);
    printf("Densidade Populacional: %f\n", densidadepopulacional2);
    superpoder2 = (float) população2 + area2 + pib2 + pontosturisticos2 + (pibpercapita2 / 1);

    printf("Carta1\n", carta1);

    printf("Estado: %s\n", estado1);
    printf("Código da Carta: %s\n", codigodacarta1);
    printf("Cideade: %s\n", nomedacidade1);
    printf("População: %d pessoas\n", população1);
    printf("Area: %.3f Km²\n", area1),
    printf("Pib:R$ %.3f Reais\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosturisticos1);
    printf("Pibpercapita: %.3f R$/Hab\n", pibpercapita1);
    printf("Denaidade Populacional: %.3f Hab/Km²\n", densidadepopulacional1);
    //printf("Superpoder: %.3f\n", superpoder1);
    
    printf("Carta2\n", carta2);

    printf("Estado: %s\n", estado2);
    printf("Código da Carta: %s\n", codigodacarta2);
    printf("Cideade: %s\n", nomedacidade2);
    printf("População: %d pessoas\n", população2);
    printf("Area: %.3f Km²\n", area2),
    printf("Pib:R$ %.3f Reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosturisticos2);
    printf("Pibpercapita: %.3f R$/Hab\n", pibpercapita2);
    printf("Denaidade Populacional: %.3f Hab/Km²\n", densidadepopulacional2);
    //printf("Superpoder: %.3f\n", superpoder2);

    //separei individualmente pois estava imprimindo a mesma carta dublicada.

    if(população1 > população2){ // compação individual de cada tópico inserido
        printf("Carta 1 tem a maior população.\n");
        printf("Carta 1 venceu!\n"); // resultado parcial da comparação
    } else{
        printf("Carta 2 tem a maior população.\n");
        printf("Carta 2 Venceu!\n");
    }
    if(area1 > area2){
        printf("Carta 1 tem maior área.\n");
        printf("Carta 1 venceu!\n");
    }else {
        printf("Carta 2 tem maior área\n");
        printf("Carta 2 Venceu!\n");
    }
    if(pib1 > pib2){
        printf("Carata 1 tem maior pib\n");
        printf("Carta 1 venceu!\n");
    }else {
        printf("Carta 2 tem maior pib\n");
        printf("Carta 2 Venceu!\n");    
    }
    if(pibpercapita1 > pibpercapita2){
        printf("Carta 1 tem maior pibpercapita.\n");
        printf("Carta 1 venceu!\n");
    }else{
        printf("Carata 2 tem maior pibpercapita.\n");
        printf("Carta 2 Venceu!\n");
    }
    if(densidadepopulacional1 > densidadepopulacional2){
        printf("Carta 1 tem maior densidade populacional.\n");
        printf("Carta 2 Venceu!\n");
    }else{
        printf("Carta 2 tem maior densiddade populacional.\n");
        printf("Carta 1 venceu!\n");
    }
    printf("Comparação de Caratas\n");// comparação individual de cada característica das cartas
        
        printf("Carta 1 - %s: %d\n", nomedacidade1, população1);//utilizei as informações ja inseridas pra comparação
        printf("Carta 2 - %s: %d\n", nomedacidade2, população2);
        if(população1 > população2){
            printf("Resultado: Carta 1 (%s) venceu!\n", nomedacidade1);
        }else {
            printf("Resultado: Carta 2 (%s) venceu!\n", nomedacidade2);
        }
        printf("Carta 1 - %s: %.3f km²\n", nomedacidade1, area1);
        printf("Carta 2 - %s: %.3f km²\n", nomedacidade2, area2);
        if(area1 > area2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", nomedacidade1);
        }else {
            printf("Resultado: Carta 2 (%s) venceu!\n", nomedacidade2);
        }
        printf("Carta 1 - %s:R$ %.3f reais\n", nomedacidade1, pib1);
        printf("Carta 2 - %s:R$ %.3f reais\n", nomedacidade2, pib2);
        if(pib1 > pib2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", nomedacidade1);
        }else {
            printf("Resultado: Carta 2 (%s) venceu!\n", nomedacidade2);
    }
        printf("Carta 1 - %s: %d\n", nomedacidade1, pontosturisticos1);
        printf("Carta 2 - %s: %d\n", nomedacidade2, pontosturisticos2);
        if(pontosturisticos1 > pontosturisticos2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", nomedacidade1);
        }else {
            printf("Resultado: Carta 2 (%s) venceu!\n", nomedacidade2);
    }
        printf("Carta 1 - %s: %.3f reais/hab\n", nomedacidade1, pibpercapita1);
        printf("Carta 2 - %s: %.3f reais/hab\n", nomedacidade2, pibpercapita2);
        if(pibpercapita1 > pibpercapita2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", nomedacidade1);
        }else {
            printf("Resultado: Carta 2 (%s) venceu!\n", nomedacidade2);
        }
        printf("Carta 1 - %s: %.3f hab/km²\n", nomedacidade1, densidadepopulacional1);
        printf("Carta 2 - %s: %.3f hab/km²\n", nomedacidade2, densidadepopulacional2);
        if(densidadepopulacional1 < densidadepopulacional2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", nomedacidade1);
        }else {
            printf("Resultado: Carta 2 (%s) venceu!\n", nomedacidade2);
    }
    printf("Comparação de Caratas\n");
        
        printf("Carta 1 - %s: %d\n", nomedacidade1, população1);
        printf("Carta 2 - %s: %d\n", nomedacidade2, população2);
        if(população1 > população2){
            printf("Resultado: Carta 1 (%s) venceu!\n", nomedacidade1);
        }else {
            printf("Resultado: Carta 2 (%s) venceu!\n", nomedacidade2);
        }
        printf("Carta 1 - %s: %.3f km²\n", nomedacidade1, area1);
        printf("Carta 2 - %s: %.3f km²\n", nomedacidade2, area2);
        if(area1 > area2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", nomedacidade1);
        }else {
            printf("Resultado: Carta 2 (%s) venceu!\n", nomedacidade2);
        }
        printf("Carta 1 - %s:R$ %.3f reais\n", nomedacidade1, pib1);
        printf("Carta 2 - %s:R$ %.3f reais\n", nomedacidade2, pib2);
        if(pib1 > pib2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", nomedacidade1);
        }else {
            printf("Resultado: Carta 2 (%s) venceu!\n", nomedacidade2);
    }
        printf("Carta 1 - %s: %d\n", nomedacidade1, pontosturisticos1);
        printf("Carta 2 - %s: %d\n", nomedacidade2, pontosturisticos2);
        if(pontosturisticos1 > pontosturisticos2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", nomedacidade1);
        }else {
            printf("Resultado: Carta 2 (%s) venceu!\n", nomedacidade2);
    }
        printf("Carta 1 - %s: %.3f reais/hab\n", nomedacidade1, pibpercapita1);
        printf("Carta 2 - %s: %.3f reais/hab\n", nomedacidade2, pibpercapita2);
        if(pibpercapita1 > pibpercapita2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", nomedacidade1);
        }else {
            printf("Resultado: Carta 2 (%s) venceu!\n", nomedacidade2);
        }
        printf("Carta 1 - %s: %.3f hab/km²\n", nomedacidade1, densidadepopulacional1);
        printf("Carta 2 - %s: %.3f hab/km²\n", nomedacidade2, densidadepopulacional2);
        if(densidadepopulacional1 < densidadepopulacional2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", nomedacidade1);
        }else {
            printf("Resultado: Carta 2 (%s) venceu!\n", nomedacidade2);
    }
    

    

    return 0;
}
