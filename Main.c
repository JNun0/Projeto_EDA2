#include <stdio.h>
#include <locale.h>	
#include "Dados.h"

int main() {
	setlocale(LC_ALL, "Portuguese");

	Job* jobs = NULL;
	Maquina* maquinas = NULL;

	for (int i = 1; i < 9; i++) {
		jobs = InserirJob(jobs, i);
	}

	printf("Altura: %d\n", Altura(jobs));


	for (int i = 1; i < 9; i++) {
		maquinas = InserirJob(maquinas, i);
	}

	ListaJobs(jobs); printf("\n"); printf("\n");

	MostraListaMaquinas(maquinas); printf("\n");

}
