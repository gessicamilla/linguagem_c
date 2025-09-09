#include <stdio.h>

int main() {
    float valorCompra, valorFinal;
    int tipoCliente;

    printf("Digite o valor total da compra: R$ ");
    scanf("%f", &valorCompra);

    printf("Digite o código do cliente (1 - Comum, 2 - Funcionario, 3 - VIP): ");
    scanf("%d", &tipoCliente);

    switch (tipoCliente) {
        case 1:
            valorFinal = valorCompra; 
            break;
        case 2:
            valorFinal = valorCompra * 0.90; 
            break;
        case 3:
            valorFinal = valorCompra * 0.95; 
            break;
        default:
            printf("Código de cliente inválido.\n");
            return 1; 
    }


    printf("O valor total a ser pago é: R$ %.2f\n", valorFinal);

    return 0;
}

