#include <stdio.h>
#include <stdlib.h>
#include "funcionesMatrices.h"
#include "funcionesTime.h"

int main(int argc, char **argv){
	int n;

	n = (int) atof(argv[1]);

	int matrizA[n][n];
	int matrizB[n][n];
	int matrizC[n][n];
	matrizInit(n, matrizA);
	matrizInit(n, matrizB);
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
