#include <stdio.h>
#include <stdbool.h>
#include "Dados.h"

Maquina* InserirMaquina(int id)
{
	Maquina* novamaquina = (Maquina*)malloc(sizeof(Maquina));
	if (novamaquina == NULL) {
		return NULL;
	}
	novamaquina->id = id;
	novamaquina->ocupado = false;
	novamaquina->next = NULL;
}

Maquina* InserirListaMaquina(Maquina* maquinas, Maquina* novo){

	Maquina* aux = maquinas;

	if (maquinas == NULL)
	{
		maquinas = novo;
	}
	else
	{
		while (aux->next != NULL) {
			aux = aux->next;
		}
		aux->next = novo;
	}
	return maquinas;
	
}

void ListaMaquinas(Maquina* maquina) {

	if (maquina != NULL)
	{
		printf("Id da máquina = %d\n", maquina->id);
		printf("Ocupação da máquina = %d\n\n", maquina->ocupado);
	}
}

void MostraListaMaquinas(Maquina* maquinas) {

	Maquina* tmp = maquinas;
	do {

		ListaMaquinas(tmp);

		tmp = tmp->next;

	} while (tmp != NULL);
}
