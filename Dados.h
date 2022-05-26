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
	int idMaq;
	int tempo;
	struct Operacao* next;
}Operacao;
extern Operacao* operacoes;

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
Maquina* InserirListaMaquina(Maquina* maquinas, Maquina* novo);
void ListaMaquinas(Maquina* maquinas);
void MostraListaMaquinas(Maquina* maquinas);

/**
 * Manipulção de Operações
 */
Operacao* InserirOperacao(int id, int idJob, int idMaq, int tempo);
Operacao* InserirListaOperacao(Operacao* operacoes, Operacao* novo);
void ListaOperacao(Operacao* operacoes);
void MostraListaOperacao(Operacao* operacoes);
Operacao* ProcurarOperacao(Operacao* operacoes, int id);
Operacao* Remover(Operacao* operacoes, int idJob);

