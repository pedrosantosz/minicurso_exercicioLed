#ifndef LED_H
#define LED_H

typedef struct {
	int pino;
	int estado;
} LED;

void inicializaLed(LED *pa, int pin);
void exibeEstado(LED a);
void ligaLed(LED *ptrLed);
void desligaLed(LED *ptrLed);
void inverteEstado(LED *ptrLed);

#endif
