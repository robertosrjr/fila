/*
 ============================================================================
 Name        : Fila.c
 Author      : Roberto S. Ramos Jr
 Version     : 1.0
 Copyright   : robertosrjr@gmail.com
 Description : Estrutura de Dados in C - Fila, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define tamanho 3

struct tipo_fila {

	int dados[tamanho];
	int ini;
	int fim;
};

struct tipo_fila fila;

void entrar_fila() {

	int elemento;
	if (fila.fim == tamanho) {

		printf("\nFila Cheia.\n");
		system("pause");
	} else {

		printf("\nDigite o elemento para inserir na fila:");
		fflush(stdout);
		scanf("%d3", &elemento);
		fila.dados[fila.fim] = elemento;
		fila.fim++;
	}
}

int sair_fila() {

	int elemento;
	if (fila.fim == 0) {

		printf("\nFila vazia.\n");
		system("pause");
	} else {

		elemento =  fila.dados[fila.ini];
		int i;
		for (i = 0; i < tamanho; i++) {

			fila.dados[i] = fila.dados[i+1];
		}

		fila.dados[fila.fim] = 0;
		fila.fim--;
	}

	return elemento;
}

void mostrar_menu() {

	printf("\n Escolha Opção:");
	printf("\n 1 - Incluir na Fila;");
	printf("\n 2 - Remover da Fila;");
	printf("\n 3 - Sair \n\n");
}

void mostrar_fila() {

	int i;
	printf("[ ");
	for (i = 0; i < tamanho; i++) {

		printf("%d, ", fila.dados[i]);

	}
	printf(" ]\n\n");
}

int main(void) {

	int op = 1;
	fila.ini = 0;
	fila.fim = 0;
	while (op !=0) {

		system("cls");
		mostrar_fila();
		mostrar_menu();
		fflush(stdout);
		scanf("%d1", &op);

		switch (op) {
			case 1:

				entrar_fila();
				break;
			case 2:

				sair_fila();
				break;
		}
	}

	return EXIT_SUCCESS;
}
