#include <stdio.h>

int main()
{
    //Inicio do desafio nivel novato

    // Declaração das variáveis para controlar os laços de repetição.
    int torre;      // Variável de controle para o movimento da Torre.
    int rainha = 0; // Variável de controle para o movimento da Rainha.
    int bispo = 0;  // Variável de controle para o movimento do Bispo.
    int cavalow = 0; // Move-se duas casas para baixo e uma casa para esquerda
    int cavalowh = 0; // Move-se duas casas para baixo e uma casa para esquerda


    // --- Movimento da Torre ---
    // Simula o movimento da Torre por 5 casas para a direita usando um loop 'for'.
    printf("Torre\n");
    for (torre = 0; torre < 5; torre++)
    {
        printf("Direita\n");
    }

    // --- Movimento da Rainha ---
    // Simula o movimento da Rainha por 8 casas para a esquerda usando um loop 'do-while'.
    printf("\nRainha\n"); // Adicionei um \n para separar visualmente a saída
    do
    {
        printf("Esquerda\n");
        rainha++;
    } while (rainha < 8);

    // --- Movimento do Bispo ---
    // Simula o movimento do Bispo por 5 casas na diagonal (cima, direita) usando um loop 'while'.
    printf("\nBispo\n"); // Adicionei um \n para separar visualmente a saída
    while (bispo < 5)
    {
        printf("Cima, direita\n");
        bispo++;
    }
 //Fim do desafio nivel novato

     //Desafio aventureiro
    //---- For aninhado inicio ----
    /*
    printf("Cavalo FOR \n");
    for (int i = 0; i < 1; i++)
    {
        for (int passo_vertical = 0; passo_vertical < 2; passo_vertical++)
        {
            printf("Baixo\n");
        }
        printf("Esquerda\n");
    }
*/ 
    //---- For aninhado fim ----

    //---- While aninhado inicio ----
   /*     printf("Cavalo WHILE\n");

        while (cavalow < 1)
        {   
            while (cavalowh < 2)
        {
            printf("Baixo\n");
            cavalowh++;
        }
        printf("Esquerda\n");
        cavalow++;
        } 
        
     */   
    //---- While aninhado fim ----

    //--- While por fora e for por dentro inicio ---
        printf("Cavalo While for\n");
        while (cavalow < 1)
        {
        for (cavalowh = 0; cavalowh < 2; cavalowh++)
        {
            printf("Baixo\n");
        }
        printf("Esquerda\n");
        cavalow++;
        } 

 //--- While por fora e for por dentro fim ---

    return 0;
}