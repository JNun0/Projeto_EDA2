#include <stdio.h>
#include <stdbool.h>
#include "Dados.h"

Maquina* InserirMaquina(int id)
{
    Maquina* novamaquina = (Maquina*)malloc(sizeof(Maquina));
    if (novamaquina == NULL){
        return NULL;
    }
    novamaquina->id = id;
    novamaquina->ocupado = false;
    novamaquina->next = NULL;
}

void ListaMaquinas(Maquina* maquinas) {

	if (maquinas != NULL)
	{
		printf("Id da m�quina = %d\n", maquinas->id);
		printf("Ocupa��o da m�quina = %d\n\n", maquinas->ocupado);
	}
}

void MostraListaMaquinas(Maquina* maquinas) {

	Maquina* tmp = maquinas;
	do {

		ListaMaquinas(tmp);

		tmp = tmp->next;

	} while (tmp != NULL);
}
