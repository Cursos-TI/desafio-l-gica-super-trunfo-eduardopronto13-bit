#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 //Entrada de dados.
int main() {
    int primeiraOpcao, segundaOpcao;
    int resultado1, resultado2;
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

    //Geração das cartas
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
    
    // imprimindo resultado das cartas
    printf("Carta1\n");

    printf("Estado: %s\n", estado1);// imprimi resultado de cada carta individualmente
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
    
    srand(time(0));
    população1 = 1;
    população2 = 0;
    area1 = 1;
    area2 = 0;
    pib1 = 1;
    pib2 = 0;
    pontosturisticos1 = 1;
    pontosturisticos2 = 0;
    pibpercapita1 = 1;
    pibpercapita2 = 0;
    densidadepopulacional1 = 1;
    densidadepopulacional2 = 0;

    //Gerando menu interativo do jogo
    printf("*** Jogo Super Trunfo ***\n");
    printf("Escolha a primeira opção\n");
    printf("1. Populaçao\n");
    printf("2. Area\n");
    printf("3. Pib\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Pibpercapita\n");
    printf("6. Dendidade Populacional\n");
    printf("Escolha: ");
    scanf("%d", &primeiraOpcao);

switch (primeiraOpcao){
case 1:
    printf("Você escolheu população\n");
    resultado1 = população1 > população2 ? 1 : 0;
case 2:
    printf("Veacê escolheu área\n");
    resultado1 = area1 > area2 ? 1 : 0;
    break;
case 3:
    printf("Você escolheau pib\n");
    resultado1 = pib1 > pib2 ? 1 : 0;
    break;
case 4:
    printf("Você escolheu pontos turísticos\n");
    resultado1 = pontosturisticos1 > pontosturisticos2 ? 1 : 0;
    break;
case 5:
    printf("Você escolheu pibpercapita\n");
    resultado1 = pibpercapita1 > pibpercapita2 ? 1 : 0;
    break;
case 6:
    printf("Você escolheu densidade populacional!\n");
    resultado1 = densidadepopulacional1 < densidadepopulacional2 ? 1 : 0;
    break;                
default:
    printf("Opção inválida\n");
    break;
}

    printf("Escolha a segunda opção\n");
    printf("1. Populaçao\n");
    printf("2. Area\n");
    printf("3. Pib\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Pibpercapita\n");
    printf("6. Dendidade Populacional\n");
    printf("Escolha: ");
    scanf("%d", &segundaOpcao);

    if(primeiraOpcao == segundaOpcao){
        printf("Você escolheu a mesma opção!\n");
    }else {
        switch (segundaOpcao){
case 1:
    printf("Você escolheu população\n");
     resultado2 = população2 > população1 ? 1 : 0;
case 2:
    printf("Você esolheu área\n");
     resultado2 = area2 > area1 ? 1 : 0;
    break;
case 3:
    printf("Você escolheu pib\n");
    resultado2 = pib2 > pib1 ? 1 : 0;
    break;
case 4:
    printf("Vocâe escolheu pontos turísticos\n");
    resultado2 = pontosturisticos2 > pontosturisticos1 ? 1 : 0;
    break;
case 5:
    printf("Você escolheu pibpercapita\n");
    resultado2 = pibpercapita2 > pibpercapita1 ? 1 : 0;
    break;
case 6:
    printf("Você escolheu densidade populacional\n");
    resultado2 = densidadepopulacional2 < densidadepopulacional1 ? 1 : 0;
    break;                
default:
    printf("Opção inválida\n");
    break;
}
}
    if(resultado1 && resultado2){
        printf("Carata 1 veceu!\n");
    } else if(resultado1 != resultado2){
        printf("Empate!\n");
    }else {
        printf("Carta 2 venceu!\n");
    }

}

     



