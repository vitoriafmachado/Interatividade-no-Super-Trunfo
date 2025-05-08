#include <stdio.h>
#include <string.h>

// Estrutura para representar uma carta de país
typedef struct {
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_demografica;
} CartaPais;

// Função para comparar cartas baseado na escolha do usuário
void compararCartas(CartaPais c1, CartaPais c2, int escolha) {
    printf("\nComparando: %s vs %s\n", c1.nome, c2.nome);

    switch (escolha) {
        case 1:
            printf("Atributo: População\n");
            printf("%s: %d habitantes\n", c1.nome, c1.populacao);
            printf("%s: %d habitantes\n", c2.nome, c2.populacao);
            if (c1.populacao > c2.populacao)
                printf("Vencedor: %s\n", c1.nome);
            else if (c2.populacao > c1.populacao)
                printf("Vencedor: %s\n", c2.nome);
            else
                printf("Empate!\n");
            break;
        case 2:
            printf("Atributo: Área\n");
            printf("%s: %.2f km²\n", c1.nome, c1.area);
            printf("%s: %.2f km²\n", c2.nome, c2.area);
            if (c1.area > c2.area)
                printf("Vencedor: %s\n", c1.nome);
            else if (c2.area > c1.area)
                printf("Vencedor: %s\n", c2.nome);
            else
                printf("Empate!\n");
            break;
        case 3:
            printf("Atributo: PIB\n");
            printf("%s: %.2f trilhões\n", c1.nome, c1.pib);
            printf("%s: %.2f trilhões\n", c2.nome, c2.pib);
            if (c1.pib > c2.pib)
                printf("Vencedor: %s\n", c1.nome);
            else if (c2.pib > c1.pib)
                printf("Vencedor: %s\n", c2.nome);
            else
                printf("Empate!\n");
            break;
        case 4:
            printf("Atributo: Pontos Turísticos\n");
            printf("%s: %d pontos\n", c1.nome, c1.pontos_turisticos);
            printf("%s: %d pontos\n", c2.nome, c2.pontos_turisticos);
            if (c1.pontos_turisticos > c2.pontos_turisticos)
                printf("Vencedor: %s\n", c1.nome);
            else if (c2.pontos_turisticos > c1.pontos_turisticos)
                printf("Vencedor: %s\n", c2.nome);
            else
                printf("Empate!\n");
            break;
        case 5:
            printf("Atributo: Densidade Demográfica\n");
            printf("%s: %.2f hab/km²\n", c1.nome, c1.densidade_demografica);
            printf("%s: %.2f hab/km²\n", c2.nome, c2.densidade_demografica);
            if (c1.densidade_demografica < c2.densidade_demografica)
                printf("Vencedor: %s\n", c1.nome);
            else if (c2.densidade_demografica < c1.densidade_demografica)
                printf("Vencedor: %s\n", c2.nome);
            else
                printf("Empate!\n");
            break;
        default:
            printf("Opção inválida!\n");
    }
}

int main() {
    // Cartas fixas (pode trocar pelos seus dados depois!)
    CartaPais brasil = {"Brasil", 213000000, 8515767.0, 1.44, 10, 25.0};
    CartaPais japao = {"Japão", 126000000, 377975.0, 5.08, 20, 333.5};

    int opcao;
    printf("=== SUPER TRUNFO: PAÍSES ===\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Digite sua escolha: ");
    scanf("%d", &opcao);

    compararCartas(brasil, japao, opcao);

    return 0;
}
