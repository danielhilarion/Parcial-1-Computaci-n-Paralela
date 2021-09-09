#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED

void matrizInit(int n, int matriz[n][n]);
void sumaMatrices(int matrizA[3][3], int matrizB[3][3], int matrizC[3][3]);
void restaMatrices(int matrizA[3][3], int matrizB[3][3], int matrizC[3][3]);
void multiplicacionMatrices(int n, int matrizA[n][n], int matrizB[n][n], int matrizC[n][n]);
void matrizTranspuesta(int matrizA[3][3], int matrizC[3][3]);
void imprimirMatriz(int n, int matrizA[n][n]);

#endif