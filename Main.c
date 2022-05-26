#include <stdio.h>
#include <locale.h>	
#include "Dados.h"

int main() {
	setlocale(LC_ALL, "Portuguese");

	Job* jobs = NULL;
	Maquina* maquinas = NULL;
	Operacao* operacoes = NULL;

	for (int i = 1; i < 9; i++) {
		jobs = InserirJob(jobs, i);
	}

	Maquina* M1 = InserirMaquina(1);
	Maquina* M2 = InserirMaquina(2);
	Maquina* M3 = InserirMaquina(3);
	Maquina* M4 = InserirMaquina(4);
	Maquina* M5 = InserirMaquina(5);
	Maquina* M6 = InserirMaquina(6);
	Maquina* M7 = InserirMaquina(7);
	Maquina* M8 = InserirMaquina(8);

	maquinas = InserirListaMaquina(maquinas, M1);
	maquinas = InserirListaMaquina(maquinas, M2);
	maquinas = InserirListaMaquina(maquinas, M3);
	maquinas = InserirListaMaquina(maquinas, M4);
	maquinas = InserirListaMaquina(maquinas, M5);
	maquinas = InserirListaMaquina(maquinas, M6);
	maquinas = InserirListaMaquina(maquinas, M7);
	maquinas = InserirListaMaquina(maquinas, M8);

	Operacao* J1 = InserirOperacao(1, 1, 1, 4);
	Operacao* J1_2 = InserirOperacao(2, 1, 3, 5);
	Operacao* J1_3 = InserirOperacao(3, 1, 2, 4);
	Operacao* J1_4 = InserirOperacao(4, 1, 4, 5);
	Operacao* J1_5 = InserirOperacao(5, 1, 3, 5);
	Operacao* J1_6 = InserirOperacao(6, 1, 5, 6);
	Operacao* J1_7 = InserirOperacao(7, 1, 4, 5);
	Operacao* J1_8 = InserirOperacao(8, 1, 5, 5);
	Operacao* J1_9 = InserirOperacao(9, 1, 6, 4);
	Operacao* J1_10 = InserirOperacao(10, 1, 7, 5);
	Operacao* J1_11 = InserirOperacao(11,1,8,9);

	operacoes = InserirListaOperacao(operacoes, J1);
	operacoes = InserirListaOperacao(operacoes, J1_2);
	operacoes = InserirListaOperacao(operacoes, J1_3);
	operacoes = InserirListaOperacao(operacoes, J1_4);
	operacoes = InserirListaOperacao(operacoes, J1_5);
	operacoes = InserirListaOperacao(operacoes, J1_6);
	operacoes = InserirListaOperacao(operacoes, J1_7);
	operacoes = InserirListaOperacao(operacoes, J1_8);
	operacoes = InserirListaOperacao(operacoes, J1_9);
	operacoes = InserirListaOperacao(operacoes, J1_10);
	operacoes = InserirListaOperacao(operacoes, J1_11);

	Operacao* J2 = InserirOperacao(12, 2, 1, 1);
	Operacao* J2_2 = InserirOperacao(13, 2, 3, 5);
	Operacao* J2_3 = InserirOperacao(14, 2, 5, 7);
	Operacao* J2_4 = InserirOperacao(15, 2, 4, 5);
	Operacao* J2_5 = InserirOperacao(16, 2, 8, 4);
	Operacao* J2_6 = InserirOperacao(17, 2, 4, 1);
	Operacao* J2_7 = InserirOperacao(18, 2, 6, 6);
	Operacao* J2_8 = InserirOperacao(19, 2, 4, 4);
	Operacao* J2_9 = InserirOperacao(20, 2, 7, 4);
	Operacao* J2_10 = InserirOperacao(21, 2, 8, 7);
	Operacao* J2_11 = InserirOperacao(22, 2, 4, 1);
	Operacao* J2_12 = InserirOperacao(23, 2, 6, 2);
	Operacao* J2_13 = InserirOperacao(24, 2, 1, 5);
	Operacao* J2_14 = InserirOperacao(25, 2, 6, 6);
	Operacao* J2_15 = InserirOperacao(26, 2, 8, 4);

	operacoes = InserirListaOperacao(operacoes, J2);
	operacoes = InserirListaOperacao(operacoes, J2_2);
	operacoes = InserirListaOperacao(operacoes, J2_3);
	operacoes = InserirListaOperacao(operacoes, J2_4);
	operacoes = InserirListaOperacao(operacoes, J2_5);
	operacoes = InserirListaOperacao(operacoes, J2_6);
	operacoes = InserirListaOperacao(operacoes, J2_7);
	operacoes = InserirListaOperacao(operacoes, J2_8);
	operacoes = InserirListaOperacao(operacoes, J2_9);
	operacoes = InserirListaOperacao(operacoes, J2_10);
	operacoes = InserirListaOperacao(operacoes, J2_11);
	operacoes = InserirListaOperacao(operacoes, J2_12);
	operacoes = InserirListaOperacao(operacoes, J2_13);
	operacoes = InserirListaOperacao(operacoes, J2_14);
	operacoes = InserirListaOperacao(operacoes, J2_15);

	Operacao* J3 = InserirOperacao(27, 3, 2, 7);
	Operacao* J3_2 = InserirOperacao(28, 3, 3, 6);
	Operacao* J3_3 = InserirOperacao(29, 3, 8, 8);
	Operacao* J3_4 = InserirOperacao(30, 3, 4, 7);
	Operacao* J3_5 = InserirOperacao(31, 3, 8, 7);
	Operacao* J3_6 = InserirOperacao(32, 3, 3, 7);
	Operacao* J3_7 = InserirOperacao(33, 3, 5, 8);
	Operacao* J3_8 = InserirOperacao(34, 3, 7, 7);
	Operacao* J3_9 = InserirOperacao(35, 3, 4, 7);
	Operacao* J3_10 = InserirOperacao(36, 3,6, 8);
	Operacao* J3_11 = InserirOperacao(37, 3, 1, 1);
	Operacao* J3_12 = InserirOperacao(38, 3, 2, 4);

	operacoes = InserirListaOperacao(operacoes, J3);
	operacoes = InserirListaOperacao(operacoes, J3_2);
	operacoes = InserirListaOperacao(operacoes, J3_3);
	operacoes = InserirListaOperacao(operacoes, J3_4);
	operacoes = InserirListaOperacao(operacoes, J3_5);
	operacoes = InserirListaOperacao(operacoes, J3_6);
	operacoes = InserirListaOperacao(operacoes, J3_7);
	operacoes = InserirListaOperacao(operacoes, J3_8);
	operacoes = InserirListaOperacao(operacoes, J3_9);
	operacoes = InserirListaOperacao(operacoes, J3_10);
	operacoes = InserirListaOperacao(operacoes, J3_11);
	operacoes = InserirListaOperacao(operacoes, J3_12);

	Operacao* J4 = InserirOperacao(39, 4, 1, 4);
	Operacao* J4_2 = InserirOperacao(40, 4, 3, 3);
	Operacao* J4_3 = InserirOperacao(41, 4, 5, 7);
	Operacao* J4_4 = InserirOperacao(42, 4, 2, 4);
	Operacao* J4_5 = InserirOperacao(43, 4, 8, 4);
	Operacao* J4_6 = InserirOperacao(44, 4, 3, 4);
	Operacao* J4_7 = InserirOperacao(45, 4, 4, 5);
	Operacao* J4_8 = InserirOperacao(46, 4, 6, 6);
	Operacao* J4_9 = InserirOperacao(47, 4, 7, 7);
	Operacao* J4_10 = InserirOperacao(48, 4, 5, 3);
	Operacao* J4_11 = InserirOperacao(49, 4, 6, 5);
	Operacao* J4_12 = InserirOperacao(50, 4, 8, 5);

	operacoes = InserirListaOperacao(operacoes, J4);
	operacoes = InserirListaOperacao(operacoes, J4_2);
	operacoes = InserirListaOperacao(operacoes, J4_3);
	operacoes = InserirListaOperacao(operacoes, J4_4);
	operacoes = InserirListaOperacao(operacoes, J4_5);
	operacoes = InserirListaOperacao(operacoes, J4_6);
	operacoes = InserirListaOperacao(operacoes, J4_7);
	operacoes = InserirListaOperacao(operacoes, J4_8);
	operacoes = InserirListaOperacao(operacoes, J4_9);
	operacoes = InserirListaOperacao(operacoes, J4_10);
	operacoes = InserirListaOperacao(operacoes, J4_11);
	operacoes = InserirListaOperacao(operacoes, J4_12);

	Operacao* J5 = InserirOperacao(51, 5, 1, 3);
	Operacao* J5_2 = InserirOperacao(52, 5, 2, 4);
	Operacao* J5_3 = InserirOperacao(53, 5, 4, 5);
	Operacao* J5_4 = InserirOperacao(54, 5, 3, 4);
	Operacao* J5_5 = InserirOperacao(55, 5, 8, 4);
	Operacao* J5_6 = InserirOperacao(56, 5, 5, 3);
	Operacao* J5_7 = InserirOperacao(57, 5, 6, 3);
	Operacao* J5_8 = InserirOperacao(58, 5, 8, 3);
	Operacao* J5_9 = InserirOperacao(59, 5, 4, 5);
	Operacao* J5_10 = InserirOperacao(60, 5, 6, 4);

	operacoes = InserirListaOperacao(operacoes, J5);
	operacoes = InserirListaOperacao(operacoes, J5_2);
	operacoes = InserirListaOperacao(operacoes, J5_3);
	operacoes = InserirListaOperacao(operacoes, J5_4);
	operacoes = InserirListaOperacao(operacoes, J5_5);
	operacoes = InserirListaOperacao(operacoes, J5_6);
	operacoes = InserirListaOperacao(operacoes, J5_7);
	operacoes = InserirListaOperacao(operacoes, J5_8);
	operacoes = InserirListaOperacao(operacoes, J5_9);
	operacoes = InserirListaOperacao(operacoes, J5_10);

	Operacao* J6 = InserirOperacao(61, 6, 1, 3);
	Operacao* J6_2 = InserirOperacao(62, 6, 2, 5);
	Operacao* J6_3 = InserirOperacao(63, 6, 3, 6);
	Operacao* J6_4 = InserirOperacao(64, 6, 4, 7);
	Operacao* J6_5 = InserirOperacao(65, 6, 5, 8);
	Operacao* J6_6 = InserirOperacao(66, 6, 3, 9);
	Operacao* J6_7 = InserirOperacao(67, 6, 6, 8);

	operacoes = InserirListaOperacao(operacoes, J6);
	operacoes = InserirListaOperacao(operacoes, J6_2);
	operacoes = InserirListaOperacao(operacoes, J6_3);
	operacoes = InserirListaOperacao(operacoes, J6_4);
	operacoes = InserirListaOperacao(operacoes, J6_5);
	operacoes = InserirListaOperacao(operacoes, J6_6);
	operacoes = InserirListaOperacao(operacoes, J6_7);

	Operacao* J7 = InserirOperacao(68, 7, 3, 4);
	Operacao* J7_2 = InserirOperacao(69, 7, 5, 5);
	Operacao* J7_3 = InserirOperacao(70, 7, 6, 4);
	Operacao* J7_4 = InserirOperacao(71, 7, 4, 4);
	Operacao* J7_5 = InserirOperacao(72, 7, 7, 6);
	Operacao* J7_6 = InserirOperacao(73, 7, 8, 4);
	Operacao* J7_7 = InserirOperacao(74, 7, 1, 3);
	Operacao* J7_8 = InserirOperacao(75, 7, 3, 3);
	Operacao* J7_9 = InserirOperacao(76, 7, 4, 4);
	Operacao* J7_10 = InserirOperacao(78, 7, 5, 5);
	Operacao* J7_11 = InserirOperacao(79, 7, 4, 4);
	Operacao* J7_12 = InserirOperacao(80, 7, 6, 6);
	Operacao* J7_13 = InserirOperacao(81, 7, 8, 5);
	Operacao* J7_14 = InserirOperacao(82, 7, 1, 3);
	Operacao* J7_15 = InserirOperacao(83, 7, 3, 3);

	operacoes = InserirListaOperacao(operacoes, J7);
	operacoes = InserirListaOperacao(operacoes, J7_2);
	operacoes = InserirListaOperacao(operacoes, J7_3);
	operacoes = InserirListaOperacao(operacoes, J7_4);
	operacoes = InserirListaOperacao(operacoes, J7_5);
	operacoes = InserirListaOperacao(operacoes, J7_6);
	operacoes = InserirListaOperacao(operacoes, J7_7);
	operacoes = InserirListaOperacao(operacoes, J7_8);
	operacoes = InserirListaOperacao(operacoes, J7_9);
	operacoes = InserirListaOperacao(operacoes, J7_10);
	operacoes = InserirListaOperacao(operacoes, J7_11);
	operacoes = InserirListaOperacao(operacoes, J7_12);
	operacoes = InserirListaOperacao(operacoes, J7_13);
	operacoes = InserirListaOperacao(operacoes, J7_14);
	operacoes = InserirListaOperacao(operacoes, J7_15);

	Operacao* J8 = InserirOperacao(84, 8, 1, 3);
	Operacao* J8_2 = InserirOperacao(85, 8, 2, 4);
	Operacao* J8_3 = InserirOperacao(86, 8, 6, 4);
	Operacao* J8_4 = InserirOperacao(87, 8, 4, 6);
	Operacao* J8_5 = InserirOperacao(88, 8, 5, 5);
	Operacao* J8_6 = InserirOperacao(89, 8, 8, 4);
	Operacao* J8_7 = InserirOperacao(90, 8, 3, 4);
	Operacao* J8_8 = InserirOperacao(91, 8, 7, 5);
	Operacao* J8_9 = InserirOperacao(92, 8, 4, 4);
	Operacao* J8_10 = InserirOperacao(93, 8, 6, 6);
	Operacao* J8_11 = InserirOperacao(94, 8, 7, 1);
	Operacao* J8_12 = InserirOperacao(95, 8, 8, 2);

	operacoes = InserirListaOperacao(operacoes, J8);
	operacoes = InserirListaOperacao(operacoes, J8_2);
	operacoes = InserirListaOperacao(operacoes, J8_3);
	operacoes = InserirListaOperacao(operacoes, J8_4);
	operacoes = InserirListaOperacao(operacoes, J8_5);
	operacoes = InserirListaOperacao(operacoes, J8_6);
	operacoes = InserirListaOperacao(operacoes, J8_7);
	operacoes = InserirListaOperacao(operacoes, J8_8);
	operacoes = InserirListaOperacao(operacoes, J8_9);
	operacoes = InserirListaOperacao(operacoes, J8_10);
	operacoes = InserirListaOperacao(operacoes, J8_11);
	operacoes = InserirListaOperacao(operacoes, J8_12);

	printf("Altura: %d\n", Altura(jobs));

	ListaJobs(jobs); printf("\n"); printf("\n");

	MostraListaMaquinas(maquinas); 

	MostraListaOperacao(operacoes);

	Remover(operacoes,4);

	Apagar(jobs, 4);

	ListaJobs(jobs);
	MostraListaOperacao(operacoes);
}
