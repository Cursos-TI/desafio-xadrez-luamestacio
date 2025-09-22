#include <stdio.h>

int main()
{
    //Inicio do desafio nivel novato

    // Declaração das variáveis para controlar os laços de repetição.
    int torre;      // Variável de controle para o movimento da Torre.
    int rainha = 0; // Variável de controle para o movimento da Rainha.
    int bispo = 0;  // Variável de controle para o movimento do Bispo.

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
    return 0;
}