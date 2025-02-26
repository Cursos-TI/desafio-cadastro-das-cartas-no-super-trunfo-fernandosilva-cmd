#include <stdio.h>
#include <stdlib.h>

// Definição da estrutura da carta
typedef struct {
    char codigo[10];
    char pais[30];
    char estado[20];
    char cidade[30];
    float area;
    int populacao;
    float PIB;
    int pontosTuristicos;
} Carta;

// Função para ler os dados da carta
void lerCarta(Carta *c) {
    printf("Digite o código: ");
    scanf("%9s", c->codigo);
    printf("Digite o país: ");
    scanf(" %[^\n]", c->pais);
    printf("Digite o estado: ");
    scanf(" %[^\n]", c->estado);
    printf("Digite a cidade: ");
    scanf(" %[^\n]", c->cidade);
    printf("Digite a área (km²): ");
    scanf("%f", &c->area);
    printf("Digite a população: ");
    scanf("%d", &c->populacao);
    printf("Digite o PIB: ");
    scanf("%f", &c->PIB);
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &c->pontosTuristicos);
}

// Função para exibir os dados da carta
void mostrarCarta(Carta c) {
    printf("\n=== Carta %s ===\n", c.codigo);
    printf("País: %s\n", c.pais);
    printf("Estado: %s\n", c.estado);
    printf("Cidade: %s\n", c.cidade);
    printf("Área: %.2f km²\n", c.area);
    printf("População: %d\n", c.populacao);
    printf("PIB: %.2f\n", c.PIB);
    printf("Pontos Turísticos: %d\n", c.pontosTuristicos);
}

// Função para comparar duas cartas
void compararCartas(Carta c1, Carta c2) {
    printf("\nComparação entre %s e %s:\n", c1.codigo, c2.codigo);
    printf("População: %s VENCEU!\n", (c1.populacao > c2.populacao) ? c1.codigo : c2.codigo);
    printf("Área: %s VENCEU!\n", (c1.area > c2.area) ? c1.codigo : c2.codigo);
    printf("PIB: %s VENCEU!\n", (c1.PIB > c2.PIB) ? c1.codigo : c2.codigo);
    printf("Pontos turísticos: %s VENCEU!\n", (c1.pontosTuristicos > c2.pontosTuristicos) ? c1.codigo : c2.codigo);
}

int main() {
    int opcao;
    Carta carta1, carta2;

    // Menu de opções
    printf("\n======MENU DE OPÇÕES=====\n");
    printf("1 - Jogar\n");
    printf("2 - Regras do jogo\n");
    printf("0 - Sair\n");
    printf("==========================\n");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Iniciando o jogo...\n");
            break;
        case 2:
            printf("Regras do jogo:\n - Cada jogador insere uma carta\n - O jogo compara atributos\n - Quem tiver os melhores valores vence!\n");
            return 0;
        case 0:
            printf("Saindo...\n");
            return 0;
        default:
            printf("Opção inválida\n");
            return 0;
    }

    // Jogadores inserem as cartas
    printf("\nPLAYER 1, cadastre sua carta:\n");
    lerCarta(&carta1);

    printf("\nPLAYER 2, cadastre sua carta:\n");
    lerCarta(&carta2);

    // Exibir cartas
    mostrarCarta(carta1);
    mostrarCarta(carta2);

    // Comparação
    compararCartas(carta1, carta2);

    return 0;
}
    