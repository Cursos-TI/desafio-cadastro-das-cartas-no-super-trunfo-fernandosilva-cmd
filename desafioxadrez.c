#include <stdio.h>

int main() {
    // Definindo as constantes para o movimento do cavalo
    const int MOVIMENTO_BAIXO = 2;
    const int MOVIMENTO_ESQUERDA = 1;
    
    // Variáveis de controle para os loops
    int i, j;
    
    // Movimento da Torre (do desafio anterior)
    printf("Movimento da Torre:\n");
    printf("Direita\n");
    printf("Direita\n");
    printf("Baixo\n");
    printf("Baixo\n");
    printf("Baixo\n");
    
    // Movimento do Bispo (do desafio anterior)
    printf("\nMovimento do Bispo:\n");
    printf("Direita-Baixo\n");
    printf("Direita-Baixo\n");
    printf("Direita-Baixo\n");
    
    // Separando com linha em branco como pedido
    printf("\n");
    
    // Movimento do Cavalo
    printf("Movimento do Cavalo:\n");
    
    // Primeira parte do movimento em L: 2 casas para baixo
    // Usando loop for como exigido
    for (i = 0; i < MOVIMENTO_BAIXO; i++) {
        printf("Baixo\n");
    }
    
    // Segunda parte do movimento em L: 1 casa para a esquerda
    // Usando loop while como segundo loop aninhado
    j = 0;
    while (j < MOVIMENTO_ESQUERDA) {
        printf("Esquerda\n");
        j++;
    }
    
    return 0;
}