#include <stdio.h>

// ==========================================================
// CONSTANTES GLOBAIS
// (Requisito: Uso de constantes para valores fixos de casas)
// ==========================================================
#define CASAS_BISPO_NOVATO 5
#define CASAS_TORRE_NOVATO 5
#define CASAS_RAINHA_NOVATO 8
#define CASAS_CAVALO_L 2 // Para o movimento "2 casas em uma direção, 1 casa na outra"

// ==========================================================
// NÍVEL MESTRE: Funções Recursivas
// (Requisito: Substituir loops simples por recursão)
// ==========================================================

/**
 * @brief Função recursiva para simular o movimento do Bispo (Diagonal Cima Direita).
 * @param passos_restantes O número de casas restantes para mover.
 */
void mover_bispo_recursivo(int passos_restantes) {
    if (passos_restantes > 0) {
        // Bispo: Movimento na diagonal (Cima e Direita em um passo)
        printf("Cima Direita\n");
        // Chama a si mesma para o próximo passo
        mover_bispo_recursivo(passos_restantes - 1);
    }
}

/**
 * @brief Função recursiva para simular o movimento da Torre (Direita).
 * @param passos_restantes O número de casas restantes para mover.
 */
void mover_torre_recursivo(int passos_restantes) {
    if (passos_restantes > 0) {
        // Torre: Movimento horizontal ou vertical (apenas Direita)
        printf("Direita\n");
        // Chama a si mesma para o próximo passo
        mover_torre_recursivo(passos_restantes - 1);
    }
}

/**
 * @brief Função recursiva para simular o movimento da Rainha (Esquerda).
 * @param passos_restantes O número de casas restantes para mover.
 */
void mover_rainha_recursiva(int passos_restantes) {
    if (passos_restantes > 0) {
        // Rainha: Movimento em todas as direções (apenas Esquerda)
        printf("Esquerda\n");
        // Chama a si mesma para o próximo passo
        mover_rainha_recursiva(passos_restantes - 1);
    }
}

// ==========================================================
// FUNÇÃO PRINCIPAL
// ==========================================================

int main() {
    printf("==================================================\n");
    printf("SIMULACAO DE MOVIMENTOS DE XADREZ (NIVEIS DE DESAFIO)\n");
    printf("==================================================\n\n");

    // ==========================================================
    // 🏅 NÍVEL NOVATO: Estruturas de Repetição Simples
    // (Requisito: Usar for, while e do-while, um para cada peça)
    // ==========================================================
    printf("--------------------------------------------------\n");
    printf("              🏅 NÍVEL NOVATO\n");
    printf("--------------------------------------------------\n");
    
    // --- 1. BISPO (5 casas na diagonal superior direita) - Usando 'while' ---
    printf("1. MOVIMENTO DO BISPO (while - %d casas):\n", CASAS_BISPO_NOVATO);
    int contador_bispo = 0;
    while (contador_bispo < CASAS_BISPO_NOVATO) {
        // Movimento na diagonal é a combinação de duas instruções básicas
        printf("Cima Direita\n");
        contador_bispo++;
    }
    printf("Bispo terminou o movimento.\n\n");

    // --- 2. TORRE (5 casas para a direita) - Usando 'for' ---
    printf("2. MOVIMENTO DA TORRE (for - %d casas):\n", CASAS_TORRE_NOVATO);
    int i;
    for (i = 0; i < CASAS_TORRE_NOVATO; i++) {
        printf("Direita\n");
    }
    printf("Torre terminou o movimento.\n\n");

    // --- 3. RAINHA (8 casas para a esquerda) - Usando 'do-while' ---
    printf("3. MOVIMENTO DA RAINHA (do-while - %d casas):\n", CASAS_RAINHA_NOVATO);
    int contador_rainha = 0;
    if (CASAS_RAINHA_NOVATO > 0) {
        do {
            printf("Esquerda\n");
            contador_rainha++;
        } while (contador_rainha < CASAS_RAINHA_NOVATO);
    }
    printf("Rainha terminou o movimento.\n\n");


    // ==========================================================
    // 🏅 NÍVEL AVENTUREIRO: Movimento do Cavalo (Loops Aninhados)
    // (Requisito: Cavalo em 'L' (Baixo e Esquerda) usando loops aninhados)
    // ==========================================================
    printf("--------------------------------------------------\n");
    printf("             🏅 NÍVEL AVENTUREIRO\n");
    printf("--------------------------------------------------\n");
    
    // Movimento em 'L' (2 casas para Baixo, 1 casa para Esquerda)
    printf("MOVIMENTO DO CAVALO (L: Baixo-Baixo-Esquerda):\n");

    // Loop externo (for): simula o movimento de 2 casas em uma direção (Baixo)
    for (int j = 0; j < CASAS_CAVALO_L; j++) {
        printf("Baixo\n");
    }

    // Loop interno (while): simula o movimento de 1 casa na outra direção (Esquerda)
    int k = 0;
    while (k < 1) {
        printf("Esquerda\n");
        k++;
    }
    printf("Cavalo terminou o movimento em L.\n\n");

    // Nota: O Cavalo realiza o movimento em L em um único turno.
    // A simulação acima usa loops aninhados para descrever as "sub-etapas" do L.


    // ==========================================================
    // 🥇 NÍVEL MESTRE: Recursividade e Loops Complexos
    // ==========================================================
    printf("--------------------------------------------------\n");
    printf("               🥇 NÍVEL MESTRE\n");
    printf("--------------------------------------------------\n");
    
    // --- 1. Bispo, Torre, Rainha (Usando Funções Recursivas) ---
    printf("1. SIMULACAO RECURSIVA:\n");

    printf("  - Bispo (5 casas):\n");
    mover_bispo_recursivo(5);

    printf("  - Torre (5 casas):\n");
    mover_torre_recursivo(5);

    printf("  - Rainha (8 casas):\n");
    mover_rainha_recursiva(8);
    printf("Movimentos simples completados com recursividade.\n\n");


    // --- 2. Movimentação do Cavalo (Loops com Múltiplas Condições) ---
    // (Requisito: 1 vez em L para Cima e Direita, usando loops aninhados/múltiplos)
    
    printf("2. MOVIMENTO DO CAVALO COMPLEXO (L: Cima-Cima-Direita com continue/break):\n");

    int direcao1 = 0; // Contagem para Cima
    int direcao2 = 0; // Contagem para Direita
    
    // Loop de controle para o Cavalo. Usaremos 'for' com múltiplas variáveis
    // e condições para simular o movimento '2 casas em uma direção, 1 na outra'.
    for (direcao1 = 0, direcao2 = 0; direcao1 < CASAS_CAVALO_L || direcao2 < 1; direcao1++) {
        
        // Verifica se a primeira direção (Cima) está completa
        if (direcao1 < CASAS_CAVALO_L) {
            printf("Cima\n");
            // Usamos 'continue' para saltar o restante do loop (a parte 'Direita')
            // enquanto estamos na fase 'Cima'.
            continue; 
        }

        // Se o 'continue' não foi executado, significa que 'direcao1' >= CASAS_CAVALO_L.
        // É hora de mover na segunda direção (Direita).
        if (direcao2 < 1) {
            printf("Direita\n");
            direcao2++; // Incrementa a segunda direção manualmente
        }
        
        // Usamos 'break' para sair do loop assim que a segunda direção for concluída.
        if (direcao2 >= 1) {
            break;
        }
    }
    printf("Cavalo terminou o movimento complexo em L.\n\n");


    // --- 3. BISPO (Loops Aninhados) ---
    // (Requisito: Bispo usando loops aninhados)
    printf("3. BISPO COM LOOPS ANINHADOS (5 casas):\n");
    
    // O Bispo se move na diagonal. O loop externo controla o número de casas (5).
    // O loop interno simula o componente 'Cima' e 'Direita' em cada casa.
    for (int casa = 0; casa < 5; casa++) {
        printf("--- Casa %d ---\n", casa + 1);
        
        // Loop aninhado 1: Simula o componente vertical do movimento
        for (int vertical = 0; vertical < 1; vertical++) {
            printf("Cima ");
        }
        
        // Loop aninhado 2: Simula o componente horizontal do movimento
        for (int horizontal = 0; horizontal < 1; horizontal++) {
            printf("Direita\n");
        }
    }
    printf("Bispo terminou o movimento com loops aninhados.\n");
    
    printf("\n==================================================\n");

    return 0;
}
