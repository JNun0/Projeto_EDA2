#include <stdio.h>
#include <stdbool.h>
#include "Dados.h"

Operacao* InserirOperacao(int id, int idJob, int idMaq, int tempo)
{
    Operacao* novaoperacao = (Operacao*)malloc(sizeof(Operacao));
    if (novaoperacao == NULL) {
        return NULL;
    }
    novaoperacao->id = id;
    novaoperacao->idJob = idJob;
    novaoperacao->idMaq = idMaq;
    novaoperacao->tempo = tempo;
    novaoperacao->next = NULL;
}

Operacao* InserirListaOperacao(Operacao* operacoes, Operacao* novo) {
    Operacao* aux = operacoes;

    if (operacoes == NULL)
    {
        operacoes = novo;
    }
    else
    {
        while (aux->next != NULL) {
            aux = aux->next;
        }
        aux->next = novo;
    }
    return operacoes;

}

void ListaOperacao(Operacao* operacoes) {

    if (operacoes != NULL)
    {
        printf("Id da operação = %d\n", operacoes->id);
        printf("Id do Job da operação = %d\n", operacoes->idJob);
        printf("Id da Máquina = %d\n", operacoes->idMaq);
        printf("Tempo = %d\n\n", operacoes->tempo);
    }
}

void MostraListaOperacao(Operacao* operacoes) {

    Operacao* tmp = operacoes;
    do {

        ListaOperacao(tmp);

        tmp = tmp->next;

    } while (tmp != NULL);
}

Operacao* ProcurarOperacao(Operacao* operacoes, int id) {
    Operacao* aux = operacoes;

    if (operacoes == NULL) {
        return NULL;
    }        
    else
    {
        while (aux != NULL) {
            if (operacoes->id == id) {
                return (aux);        // se encontrar
            }
            aux = aux->next;
        }
        return NULL;
    }
}

Operacao* Remover(Operacao* operacoes, int idJob) {
    Operacao* tmp = operacoes, * aux = operacoes, * tmp2 = operacoes;

    if (operacoes == NULL) return NULL;			//Lista vazia

    while (tmp != NULL)
    {
        if (tmp->idJob==idJob)
        {

            if (tmp == operacoes)
            {
                operacoes=operacoes->next;
                free(tmp);
                tmp = operacoes;

            }
            else
            {
                aux->next = tmp->next;
                free(tmp);
                tmp = aux->next;
            }
        }
        else
        {
            aux = tmp;
            tmp = tmp->next;

        }
    }
    return operacoes;

}
