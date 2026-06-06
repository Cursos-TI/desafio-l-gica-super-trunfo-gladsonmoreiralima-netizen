#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    
    // Variáveis da 1ª carta
    char codigo1[20];
    char estado1[20];
    char cidade1[20];
    int populacao1;
    float area1; 
    float pib1;
    int pontosturisticos1; 

    // Variáveis da 2ª cara
    char codigo2[20];
    char estado2[20];
    char cidade2[20];
    int populacao2;
    float area2; 
    float pib2;
    int pontosturisticos2; 

    // CADASTRAMENTO DAS CARTAS

    printf("Cadastramento da 1ª carta:\n"); 

    printf("Qual é o código da 1ª carta? ");
    scanf("%s", &codigo1);
    printf("Qual o nome do estado? ");
    scanf ("%s", &estado1); 
    printf("Qual é o nome da cidade? ");
    scanf("%s", &cidade1);
    printf("Qual é a população? ");
    scanf("%d", &populacao1);
    printf("Qual é a área? ");
    scanf("%f", &area1);
    printf("Qual é o Pib? ");
    scanf("%f", &pib1);
    printf("Quantos pontos turísticos existem? ");
    scanf("%d", &pontosturisticos1);

    printf("O código do 1° estado é: %s\n", codigo1);
    printf("O 1° estado é: %s\n", estado1);
    printf("A 2ª cidade é: %s\n", cidade1);
    printf("A população da 1ª cidade é: %d\n", populacao1);
    printf("A área da 1ª cidade é: %.2f\n", area1);
    printf("O pib da 1ª cidade é: %.2f\n", pib1);
    printf("Os pontos turísticos da 1ª cidade são: %d\n", pontosturisticos1);

    printf("Cadastramento da 2ª carta:\n"); 

    printf("Qual é o código da 2ª carta? ");
    scanf("%s", &codigo2);
    printf("Qual o nome do 2° estado? ");
    scanf ("%s", &estado2); 
    printf("Qual é o nome da 2ª cidade? ");
    scanf("%s", &cidade2);
    printf("Qual é a população da 2ª cidade? ");
    scanf("%d", &populacao2);
    printf("Qual é a área da 2ª cidade? ");
    scanf("%f", &area2);
    printf("Qual é o Pib da 2ª cidade? ");
    scanf("%f", &pib2);
    printf("Quantos pontos turísticos existem na 2ª cidade? ");
    scanf("%d", &pontosturisticos2);

    printf("O código do 2° estado é: %s\n", codigo2);
    printf("O 2° estado é: %s\n", estado2);
    printf("A 2ª cidade é: %s\n", cidade2);
    printf("A população da 2ª cidade é: %d\n", populacao2);
    printf("A área da 2ª cidade é: %.2f\n", area2);
    printf("O pib da 2ª cidade é: %.2f\n", pib2);
    printf("Os pontos turísticos da 2ª cidade são: %d\n", pontosturisticos2);

    if (populacao1 > populacao2){
        printf("A população da 1ª cidade é maior que da 2ª cidade.\n");
    }else{
        printf("A população da 2ª cidade é maior que da 1ª cidade.\n ");
        }
    if (area1 > area2){
        printf("A área da 1ª cidade é maior que da 2ª cidade.\n");
     }else{
        printf("A área da 2ª cidade é maior que da 1ª cidade.\n ");
        }
    if (pib1 > pib2){
        printf("O Pib da 1ª cidade é maior que da 2ª cidade.\n");
    }else{
        printf("O Pib da 2ª cidade é maior que da 1ª cidade.\n ");
        }
    if (pontosturisticos1 > pontosturisticos2){
        printf("A 1ª cidade tem mais pontos turísticos do que a 2ª cidade.\n");
    }else{
        printf("A 2ª cidade tem mais pontos turísticos do que a 1ª cidade.\n ");
     }

    

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
