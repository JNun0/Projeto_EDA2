/*****************************************************************//**
 * \file   Dados.h
 * \brief  
 * 
 * \author Jo�o Fernandes
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
 * Manipul��o de Jobs (�rvore)
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
 * Manipul��o de M�quinas
 */
Maquina* InserirMaquina(int id);
Maquina* InserirListaMaquina(Maquina* maquinas, Maquina* novo);
void ListaMaquinas(Maquina* maquinas);
void MostraListaMaquinas(Maquina* maquinas);

/**
 * Manipul��o de Opera��es
 */
Operacao* InserirOperacao(int id, int idJob, int idMaq, int tempo);
Operacao* InserirListaOperacao(Operacao* operacoes, Operacao* novo);
void ListaOperacao(Operacao* operacoes);
void MostraListaOperacao(Operacao* operacoes);
Operacao* ProcurarOperacao(Operacao* operacoes, int id);
Operacao* Remover(Operacao* operacoes, int idJob);

