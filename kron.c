#include <stdlib.h>
#include <stdio.h>

int** aloca_matriz (int lin, int col) {
    int i;
    int **matriz;

    matriz = (int**) malloc(lin*sizeof(int*));
    for (i = 0; i < lin; i++){
        matriz[i] = (int*) malloc(col*sizeof(int));
    }

    return matriz;
}


int** ler_matriz (int lin, int col, FILE * ENTRADA) {

    int i,j;
    int **matriz;

    matriz = aloca_matriz(lin, col);

    for(i = 0; i < lin; i++){
        for(j = 0; j < col; j++){
          fscanf(ENTRADA, "%d", &matriz[i][j]);
       }
    }
    return matriz;
}


void prod_kron(int **matriz_a, int lin_a, int col_a, int **matriz_b, int lin_b, int col_b, int **matriz_result){

     int i, j, k, l;
     for (i = 0; i < lin_a; ++i) {
			for (j = 0; j < col_a; ++j) {
				for (k = 0; k < lin_b; ++k) {
					for (l = 0; l < col_b; ++l) {
						matriz_result[i * lin_b + k][j * col_b + l] = matriz_a[i][j] * matriz_b[k][l];
					}
				}
			}
    }

}
void escreve_matriz(int ** matriz, int lin_matriz, int col_matriz, FILE * SAIDA){
    int i,j;
    fprintf(SAIDA,"%d %d\n",lin_matriz, col_matriz);
    for (i = 0; i < lin_matriz; i++){
        for(j = 0; j < col_matriz; j++){
            fprintf(SAIDA, "%d ",matriz[i][j]);
        }
        fprintf(SAIDA,"\n");
    }

}


void libera_memoria(int **matriz, int lin_matriz){
    int i;
    for (i = 0; i < lin_matriz; i++){
        free(matriz[i]);
    }
    free (matriz);
}

