#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int torre;
    int bispo = 0;
    int rainha = 0;
    int cavalo;
    int escolha;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    printf("Movimentação do Bispo:\n");

    printf("Voce deseja Movimentar o Bispo? Se sim, para qual direção?\n");
    printf("1. Cima, Esquerda\n");
    printf("2. Cima, Direita\n");
    printf("3. Não quero Movimentar o bispo\n");
    printf("Escolha:\n");
    scanf("%d", &escolha);

    switch (escolha)
    {
        case 1:
        while (bispo < 5)
        {
            printf("Cima, Esquerda\n");
            bispo++;
        }
        break;
        case 2:
        while (bispo < 5)
        {
            printf("Cima, Direita\n");
            bispo++;
        }
        break;
        case 3:
        printf("Bispo não foi Movimentado");
        break;
        default:
        printf("Escolha uma Opção");

    }

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("\nMovimentação da Torre:\n");

    printf("Voce deseja Movimentar o Torre? Se sim, para qual direção?\n");
    printf("1. Cima\n");
    printf("2. Direita\n");
    printf("3. Esquerda\n");
    printf("4. Não quero Movimentar a Torre\n");
    printf("Escolha:\n");
    scanf("%d", &escolha);

    switch (escolha)
    {
        case 1:
        for (torre = 0; torre < 5; torre++)
        {
            printf("Cima\n");
        }
        break;
        case 2:
        for (torre = 0; torre < 5; torre++)
        {
            printf("Direita\n");
        }
        break;
        case 3:
        for (torre = 0; torre < 5; torre++)
        {
            printf("Esquerda\n");
        }
        break;
        case 4:
        printf("Torre não foi Movimentado");
        break;
    
    default:
        printf("Escolha uma Opção");
        break;
    }


    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("\nMovimentação da Rainha:\n");

    printf("Voce deseja Movimentar o Torre? Se sim, para qual direção?\n");
    printf("1. Cima\n");
    printf("2. Direita\n");
    printf("3. Esquerda\n");
    printf("4. Não quero Movimentar a Torre\n");
    printf("Escolha:\n");
    scanf("%d", &escolha);

    switch (escolha){
        case 1:
        do
        {
            printf("Cima\n");
            rainha++;
        } while (rainha < 8);
        break;
        case 2:
        do
        {
            printf("Direita\n");
            rainha++;
        } while (rainha < 8);
        break;
        case 3:
        do
        {
            printf("Esquerda\n");
            rainha++;
        } while (rainha < 8);
        break; 
        case 4:
        printf("Rainha não foi Movimentado");
        break;
        default:
        printf("Escolha uma Opção");
    }



    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    printf("\nMovimentação Cavalo\n");
    cavalo = 1;

    printf("Voce deseja Movimentar o Cavalo? Se sim, para qual direção ele fara o L?\n");
    printf("1. Esquerda\n");
    printf("2. Direita\n");
    printf("3. Não quero Movimentar o Cavalo\n");
    printf("Escolha:\n");
    scanf("%d", &escolha);
    
    switch (escolha)
    {
        case 1:
            while (cavalo--)
             {
                for (int i = 0; i < 2; i++)
                {
                    printf("Cima\n");
                }
                printf("Esquerda\n");
             }
        break;
        case 2:
            while (cavalo--)
            {
                for (int i = 1; i < 2; i++)
                {
                    printf("Cima\n");
                }
                printf("Direita\n");
            }
        break;
        case 3:
            printf("Cavalo não foi Movimentado");
        break;
        default:
            printf("Escolha uma Opção");
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
