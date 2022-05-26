/*****************************************************************//**
 * \file   Dados.h
 * \brief  
 * 
 * \author João Fernandes
 * \email  a20128@alunos.ipca.pt
 * \date   May 2022
 *********************************************************************/

#include<stdio.h>
#include<stdlib.h>

typedef struct Job{
	int id;
	struct Job* left;
	struct Job* right;
}Job;
extern Job* jobs;

typedef struct Maquina {
	int id;
	_Bool ocupado;
	struct Maquina* next;
}Maquina;
extern Maquina* maquinas;

typedef struct Operacao {
	int id;
	int idJob;
	int posicao;
	struct Operacao* next;
}Operacao;
extern Operacao* operacoes;

typedef struct Execucao {
	int idOperacao;
	int idMaquina;
	int tempo;
	struct Execucao* next;
}Execucao;
extern Execucao* execucoes;

/**
 * Manipulção de Jobs (Árvore)
 */
Job* Esvaziar(Job* jobs);
Job* InserirJob(Job* jobs, int id);
Job* Min(Job* jobs);
Job* Max(Job* jobs);
Job* Procurar(Job* jobs, int id);
int Altura(Job* jobs);
Job* Apagar(Job* jobs, int id);
void ListaJobs(Job* jobs);

/**
 * Manipulção de Máquinas
 */
Maquina* InserirMaquina(int id);
void ListaMaquinas(Maquina* maquinas);
void MostraListaMaquinas(Maquina* maquinas);

/**
 * Manipulção de Operações
 */
Operacao* InserirOperacao(int id, int idJob, int posicao);
void ListaOperacao(Operacao* operacoes);
void MostraListaOperacao(Operacao* operacoes);

/**
 * Manipulção de Execuções
 */
Execucao* InserirExecucao(int idOperacao, int idMaquina, int tempo);
void ListaExecucao(Execucao* execucoes);
void MostraListaExecucao(Execucao* execucoes);
