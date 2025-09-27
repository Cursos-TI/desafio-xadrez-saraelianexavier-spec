#include <stdio.h>

// Definições de constantes para o número de casas a serem movidas
#define CASAS_TORRE 5
#define CASAS_BISPO 5
#define CASAS_RAINHA 8

/**
 * @brief Programa principal que simula o movimento de três peças de xadrez
 * usando for, while e do-while, cada um para uma peça diferente.
 */
int main() {

    printf("========================================\n");
    printf("SIMULACAO DE MOVIMENTOS DE XADREZ\n");
    printf("========================================\n\n");

    // -----------------------------------------------------------------
    // 1. TORRE (Movimento: 5 casas para a direita) - Usando 'for'
    // -----------------------------------------------------------------
    printf("--- MOVIMENTO DA TORRE (for) ---\n");
    printf("Simulando 5 casas para a Direita:\n");
    
    // O 'for' é ideal para repetições onde o número de iterações é conhecido
    // no início (5 casas).
    int i_torre;
    for (i_torre = 1; i_torre <= CASAS_TORRE; i_torre++) {
        // A torre se move apenas horizontal ou verticalmente.
        // Neste caso, para a direita a cada passo.
        printf("Direita\n");
    }
    printf("Torre terminou o movimento.\n\n");


    // -----------------------------------------------------------------
    // 2. BISPO (Movimento: 5 casas na diagonal para cima e à direita) - Usando 'while'
    // -----------------------------------------------------------------
    printf("--- MOVIMENTO DO BISPO (while) ---\n");
    printf("Simulando 5 casas na diagonal Cima e Direita:\n");
    
    // O 'while' é usado para repetições que continuam enquanto uma
    // condição for verdadeira.
    int casas_percorridas_bispo = 0;
    while (casas_percorridas_bispo < CASAS_BISPO) {
        // O bispo se move na diagonal. Isso é representado pela
        // combinação das direções Cima e Direita em um único passo.
        printf("Cima Direita\n");
        
        // Incrementa o contador para garantir que a condição 'while' seja alterada
        casas_percorridas_bispo++;
    }
    printf("Bispo terminou o movimento.\n\n");


    // -----------------------------------------------------------------
    // 3. RAINHA (Movimento: 8 casas para a esquerda) - Usando 'do-while'
    // -----------------------------------------------------------------
    printf("--- MOVIMENTO DA RAINHA (do-while) ---\n");
    printf("Simulando 8 casas para a Esquerda:\n");
    
    // O 'do-while' é usado para garantir que a repetição seja executada
    // pelo menos uma vez, antes da verificação da condição.
    int casas_percorridas_rainha = 0;
    
    // Verifica se a Rainha deve se mover pelo menos uma vez.
    if (CASAS_RAINHA > 0) {
        do {
            // A rainha simula o movimento da Torre, neste caso, horizontal.
            printf("Esquerda\n");
            
            // Incrementa o contador de casas percorridas
            casas_percorridas_rainha++;
            
        // Continua o loop enquanto o número de casas não for atingido.
        } while (casas_percorridas_rainha < CASAS_RAINHA);
    } else {
        printf("A Rainha nao se moveu (0 casas).\n");
    }
    printf("Rainha terminou o movimento.\n\n");
    
    printf("========================================\n");

    return 0;
}
