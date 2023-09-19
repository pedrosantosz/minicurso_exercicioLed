#include <stdio.h>
#include "LED.h"
#include "LED.c"

void imprimeTracos(void);

int main() {
	int opcao;
	
	LED led;
	
	inicializaLed(&led, 1);
	exibeEstado(led);
	
	printf("LED inicializado\n\n");
	imprimeTracos();
	printf("1.Liga LED\n");
	printf("2.Desliga LED\n");
	printf("3.Inverte estado\n");
	printf("4.Fim\n");
	imprimeTracos();
	
	do {
		printf("\nEscolha: ");
		scanf("%d", &opcao);
		
		switch (opcao) {
			case 1:
				ligaLed(&led);
				exibeEstado(led);
				break;
			case 2:
				desligaLed(&led);
				exibeEstado(led);
				break;
			case 3:
				inverteEstado(&led);
				exibeEstado(led);
				break;
		}
	} while (opcao != 4);
	
	return 0;
}

void imprimeTracos(void) {
	int i;
	for (i = 1; i <= 15; i++)
		printf("-");
	printf("\n");
}
