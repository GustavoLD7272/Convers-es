#include <stdio.h>

int main() {
    int opcao,grand;
    float resistencia, corrente, potencia, tensao;

    printf("Escolha a grandeza que deseja calcular:\n");
    printf("1 - Resistencia eletrica\n");
    printf("2 - Corrente eletrica\n");
    printf("3 - Potencia eletrica\n");
    printf("4 - Tensao eletrica\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Digite o valor da corrente eletrica (em amperes): ");
            scanf("%f", &corrente);
            printf("Digite o valor da tensao eletrica (em volts): ");
            scanf("%f", &tensao);
            resistencia = tensao / corrente;
            printf("O valor da resistencia eletrica é: %.2f ohms\n", resistencia);
            break;
            
        case 2:
        	printf("Digite o valor da tensao eletrica (em volts): ");
            scanf("%f", &tensao);
			printf("Digite o numero correspondente a grandeza que você tem o valor:\n");
        	printf("1 - Resistencia eletrica\n");
        	printf("2 - Potencia eletrica\n");
        	scanf("%d", &grand);
        		if (grand == '1') {
        			printf("Digite o valor da resistencia eletrica (em ohms): ");
        			scanf("%f", &resistencia);
        			corrente = tensao / resistencia;
				}
				else {
					printf("Digite o valor da potencia eletrica (em watts): ");
        			scanf("%f", &potencia);
        			corrente = potencia / tensao;
				}
			printf("O valor da corrente eletrica é: %.2f amperes\n", corrente);
            break;
            
        case 3:
            printf("Digite o valor da tensao eletrica (em volts): ");
            scanf("%f", &tensao);

            printf("Digite o valor da corrente eletrica (em amperes): ");
            scanf("%f", &corrente);

            potencia = tensao * corrente;

            printf("O valor da potencia eletrica é: %.2f watts\n", potencia);
            break;

        case 4:
            printf("Digite o valor da resistencia eletrica (em ohms): ");
            scanf("%f", &resistencia);

            printf("Digite o valor da corrente eletrica (em amperes): ");
            scanf("%f", &corrente);

            tensao = resistencia * corrente;

            printf("O valor da tensao eletrica é: %.2f volts\n", tensao);
            break;

        default:
            printf("Escolha invalida.\n");
            break;
    }

    return 0;
}
           
