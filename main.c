#include <stdio.h>

int main() {
    int opcao;
    float saldo = 1000.00;
    float valor_deposito;
    float valor_saque;

    do {
        printf("\n=== CAIXA ELETRONICO ===\n");
        printf("1 - Consultar saldo\n");
        printf("2 - Depositar\n");
        printf("3 - Sacar\n");
        printf("4 - Sair\n");
        printf("Escolha uma opcao: ");

        if (scanf("%d", &opcao) != 1) {
            printf("Entrada invalida!\n");
            return 1;
        }

        switch (opcao) {
            case 1:
                printf("Seu saldo: R$ %.2f\n", saldo);
                break;

            case 2:
                printf("Insira o valor do deposito: ");

                if (scanf("%f", &valor_deposito) != 1) {
                    printf("Valor invalido!\n");
                    return 1;
                }

                if (valor_deposito <= 0) {
                    printf("Valor de deposito invalido!\n");
                } else {
                    saldo += valor_deposito;
                    printf("Deposito realizado com sucesso!\n");
                    printf("Novo saldo: R$ %.2f\n", saldo);
                }
                break;

            case 3:
                printf("Digite o valor do saque: ");

                if (scanf("%f", &valor_saque) != 1) {
                    printf("Valor invalido!\n");
                    return 1;
                }

                if (valor_saque <= 0) {
                    printf("Valor de saque invalido!\n");
                } else if (valor_saque > saldo) {
                    printf("Saldo insuficiente!\n");
                } else {
                    saldo -= valor_saque;
                    printf("Saque realizado com sucesso!\n");
                    printf("Saldo restante: R$ %.2f\n", saldo);
                }
                break;

            case 4:
                printf("Obrigado por utilizar nosso sistema!\n");
                break;

            default:
                printf("Opcao invalida!\n");
                break;
        }

    } while (opcao != 4);

    return 0;
}