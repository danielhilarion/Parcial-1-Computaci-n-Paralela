#include <stdio.h>
#include <stdlib.h>
#include "funcionesMatrices.h"
#include "funcionesTime.h"
#define SIZE_DATA (1024*1024*64*3)

static double MEM_CHUNK[SIZE_DATA];

int main(int argc, char **argv){
	int n;

	n = (int) atof(argv[1]);

	double *matrizA;
	double *matrizB;
	double *matrizC;

	matrizA = MEM_CHUNK;
	matrizB = matrizA + n*n;
	matrizC = matrizB + n*n;
	matrizInit(n, matrizA, matrizB, matrizC);
	/*printf("Matriz A\n");
	imprimirMatriz(n, matrizA);
	printf("Matriz B\n");
	imprimirMatriz(n, matrizB);*/

	sampleStart();

	//printf("La multiplicacion de la matriz A y matriz B\n");
	multiplicacionMatrices(n, matrizA,matrizB,matrizC);
	//imprimirMatriz(n, matrizC);

	sampleStop();
	printTime();	
	return 0;
}
