#include <stdio.h>
#include <stdbool.h>
#include "Dados.h"

Operacao* InserirOperacao(int id, int idJob, int posicao)
{
    Operacao* novaoperacao = (Operacao*)malloc(sizeof(Operacao));
    if (novaoperacao == NULL) {
        return NULL;
    }
    novaoperacao->id = id;
    novaoperacao->idJob = idJob;
    novaoperacao->posicao = posicao;
    novaoperacao->next = NULL;
}

void ListaOperacao(Operacao* operacoes) {

    if (operacoes != NULL)
    {
        printf("Id da opera��o = %d\n", operacoes->id);
        printf("Id do Job da opera��o = %d\n", operacoes->idJob);
        printf("Posi��o da opera��o = %d\n", operacoes->posicao);
    }
}

void MostraListaOperacao(Operacao* operacoes) {

    Operacao* tmp = operacoes;
    do {

        ListaOperacao(tmp);

        tmp = tmp->next;

    } while (tmp != NULL);
}