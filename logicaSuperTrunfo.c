#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int main() {
    int opcao;
    int carta1;
    char estado1[20];
    char nomedacidade1[20];
    int população1;
    float area1;
    float pib1;
    int pontosturisticos1;
    float pibpercapita1;
    float densidadepopulacional1;
    float superpoder1;

    int carta2;
    char estado2[20];
    char nomedacidade2[20];
    int população2;
    float area2;
    float pib2;
    int pontosturisticos2;
    float pibpercapita2;
    float densidadepopulacional2;
    float superpoder2;
    
    printf("Carta1\n", carta1);
    
    printf("Digite o estado: ");//desenvolvi separadamente pois estava imprimindo apenas uma das cartas.
    scanf("%s", &estado1);
    printf("O estado é: %s\n", estado1);
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

    printf("Carta2\n", carta2);

    printf("Digite o estado: ");
    scanf("%s", &estado2);
    printf("O estado é: %s\n", estado2);
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

    printf("Carta1\n");

    printf("Estado: %s\n", estado1);
    printf("Cideade: %s\n", nomedacidade1);
    printf("População: %d pessoas\n", população1);
    printf("Area: %.3f Km²\n", area1),
    printf("Pib:R$ %.3f Reais\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosturisticos1);
    printf("Pibpercapita: %.3f R$/Hab\n", pibpercapita1);
    printf("Denaidade Populacional: %.3f Hab/Km²\n", densidadepopulacional1);
       
    printf("Carta2\n");

    printf("Estado: %s\n", estado2);
    printf("Cideade: %s\n", nomedacidade2);
    printf("População: %d pessoas\n", população2);
    printf("Area: %.3f Km²\n", area2),
    printf("Pib:R$ %.3f Reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosturisticos2);
    printf("Pibpercapita: %.3f R$/Hab\n", pibpercapita2);
    printf("Denaidade Populacional: %.3f Hab/Km²\n", densidadepopulacional2);
    
    printf("*** Jogo Super Trunfo ***\n");
    printf("Escolha uma opção\n");
    printf("1. Populaçao\n");
    printf("2. Area\n");
    printf("3. Pib\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Pibpercapita\n");
    printf("6. Dendidade Populacional\n");
    printf("Escolha: ");
    scanf("%d", &opcao);

       switch (opcao){
case 1:
    printf("População\n");
    printf("Carta 1 - %s: %d pessoas\n", nomedacidade1, população1);
    printf("Carta 2 - %s: %d pessoas\n", nomedacidade2, população2);
    break;
case 2:
    printf("Area\n");
    printf("Carta 1 - %s: %.3f km²\n", nomedacidade1, area1);
    printf("Carta 2 - %s: %.3f km²\n", nomedacidade2, area2);
    break;
case 3:
    printf("Pib\n");
    printf("Carta 1 - %s:R$ %.3f reais\n", nomedacidade1, pib1);
    printf("Carta 2 - %s:R$ %.3f reais\n", nomedacidade2, pib2);  
    break;
case 4:
    printf("Pontos Turísticos\n");
    printf("Carta 1 - %s: %d\n", nomedacidade1, pontosturisticos1);
    printf("Carta 2 - %s: %d\n", nomedacidade2, pontosturisticos2);
    break;
case 5:
    printf("Pibpercapita\n");
    printf("Carta 1 - %s: %.3f reais/hab\n", nomedacidade1, pibpercapita1);
    printf("Carta 2 - %s: %.3f reais/hab\n", nomedacidade2, pibpercapita2);
    break;
case 6:
    printf("Densidade Populacional\n");
    printf("Carta 1 - %s: %.3f hab/km²\n", nomedacidade1, densidadepopulacional1);
    printf("Carta 2 - %s: %.3f hab/km²\n", nomedacidade2, densidadepopulacional2);
    break;                
default:
    printf("Opção inválida\n");
    break;
}
if ((população1 == população2) || (area1 == area2) || (pib1 == pib2) || (pontosturisticos1 == pontosturisticos2)
     ||(pibpercapita1 == pibpercapita2) || (densidadepopulacional1 == densidadepopulacional2)){
    printf("Empate entre os atributos\n");
} else if((população1 > população2) || (area1 > area2) || (pib1 > pib2) || (pontosturisticos1 > pontosturisticos2)
     ||(pibpercapita1 > pibpercapita2) || (densidadepopulacional1 < densidadepopulacional2)){
      printf("Carata 1 veceu\n");
     }else{
        printf("Carta 2 venceu\n");
     }



}