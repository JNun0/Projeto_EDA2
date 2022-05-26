#include <stdio.h>
#include <stdbool.h>
#include "Dados.h"

Execucao* InserirExecucao(int idOperacao, int idMaquina, int tempo)
{
    Execucao* novaexecucao = (Execucao*)malloc(sizeof(Execucao));
    if (novaexecucao == NULL) {
        return NULL;
    }
    novaexecucao->idOperacao = idOperacao;
    novaexecucao->idMaquina = idMaquina;
    novaexecucao->tempo = tempo;
    novaexecucao->next = NULL;
}

void ListaExecucao(Execucao* execucoes) {

    if (execucoes != NULL)
    {
        printf("Id da Máquina = %d\n", execucoes->idMaquina);
        printf("Id da Operação = %d\n", execucoes->idOperacao);
        printf("Tempo = %d\n", execucoes->tempo);
    }
}

void MostraListaExecucao(Execucao* execucoes) {

    Execucao* tmp = execucoes;
    do {

        ListaExecucao(tmp);

        tmp = tmp->next;

    } while (tmp != NULL);
}