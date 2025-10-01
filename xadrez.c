#include <stdio.h>

void moveTorre(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        moveTorre(casas - 1);
    }
}


void moveRainha(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        moveRainha(casas - 1);
    }
}


void moveBispo(int casas) {

    if (casas > 0) {
        
        for (int v_move = 0; v_move < 1; v_move++) {
            printf("Cima\n");

            for (int h_move = 0; h_move < 1; h_move++) {
                printf("Direita\n");
            }
        }

        moveBispo(casas - 1);
    }
}


void moveCavalo() {

    for (int i = 0; i < 1; i++) {

        for (int passo_vertical = 0; passo_vertical < 2; passo_vertical++) {
            printf("Cima\n");
        }

        printf("Direita\n");
    }
}


int main()
{
 // --- Função Principal ---
// O programa começa a ser executado aqui.

    // --- Movimento da Torre (com Recursividade) ---
    printf("--- Torre ---\n");
    moveTorre(5); 

    // --- Movimento da Rainha (com Recursividade) ---
    printf("\n--- Rainha ---\n"); 
    moveRainha(8); 

    // --- Movimento do Bispo (com Recursividade) ---
    printf("\n--- Bispo ---\n");
    moveBispo(5); 

    // --- Movimento do Cavalo (com Loops Aninhados) ---
    printf("\n--- Cavalo ---\n");
    moveCavalo(); 

     
    return 0;
}