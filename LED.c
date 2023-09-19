#include <stdio.h>
#include "LED.h"

void inicializaLed(LED *ptrLed, int pin) {
	ptrLed->pino = pin;
	desligaLed(ptrLed);
}

void exibeEstado(LED led) {
	if (led.estado == 0) 
		printf("Led do pino %d: Desligado!\n", led.pino);
	else
		printf("Led do pino %d: Ligado!\n", led.pino);
}

void ligaLed(LED *ptrLed) {
	ptrLed->estado = 1;
}

void desligaLed(LED *ptrLed) {
	ptrLed->estado = 0;
}

void inverteEstado(LED *ptrLed) {
	ptrLed->estado = !ptrLed->estado;
}
