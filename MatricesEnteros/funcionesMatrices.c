#include "funcionesMatrices.h"
#include <stdio.h>

void matrizInit(int n,int matriz[n][n]){
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			matriz[i][j] = 2 * (j-i);
		}		
	}
}
void sumaMatrices(int matrizA[3][3], int matrizB[3][3], int matrizC[3][3]){
	int n = 3;
	int i, j;
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
		}	
	}
}

void restaMatrices(int matrizA[3][3], int matrizB[3][3], int matrizC[3][3]){
	int n = 3;
	int i, j;
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			matrizC[i][j] = matrizA[i][j] - matrizB[i][j];
		}	
	}
}

void multiplicacionMatrices(int n, int matrizA[n][n], int matrizB[n][n], int matrizC[n][n]){
	int i, j, k;
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			matrizC[i][j] = 0;
			for(k=0; k<n; k++){
			matrizC[i][j] += matrizA[i][k] * matrizB[k][j];
			
			}
		}	
	}
}

void matrizTranspuesta(int matrizA[3][3], int matrizC[3][3]){
	int n = 3;
	int i, j;
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			matrizC[i][j] = matrizA[j][i];
		}	
	}
}

void imprimirMatriz(int n, int matrizA[n][n]){
	int i, j;
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			printf("%d	", matrizA[i][j]);
		}
		printf("\n");	
	}
}