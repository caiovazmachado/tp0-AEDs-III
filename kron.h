/* Aloca memória dinâmicamente para uma matriz, a partir do numero de linhas e colunas
 passadas como parâmetro.
 */
int** aloca_matriz (int lin, int col);

// Lê uma matriz do arquivo, passado como parâmetro.
// As dimensãoes da matriz devem ser passadas como parâmetro.
// A função ler_matriz encapsula a função aloca_matriz, para alocação dinâmica de memória.
int** ler_matriz (int lin, int col, FILE * ENTRADA);



// Executa o produto de Kronecker, também conhecido como produto tensorial das matrizes 'A' e 'B':
/* Seja uma matriz 'A n x m'  e uma matriz 'B p x q' o Produto de Kronecker é:

    | A{00} * B ... A{0n} * B |
 *  |   .    .            .   |
 *  |   .       .         .   |
 *  |   .          .      .   |
 *  | A{m0} *B  ... A{mn}*B   |
*/
// O resultado é armazenado na matriz_result.
void prod_kron (int **matriz_a, int lin_a, int col_a, int **matriz_b, int lin_b, int col_b, int**matriz_result);


// Escreve a matriz passada como paramentro no arquivo de saída.
void escreve_matriz(int ** matriz, int lin_matriz, int col_matriz, FILE * SAIDA);

// Libera a memoria dinâmicamente alocada de uma matriz.
void libera_memoria(int **matriz, int lin_matriz);


#endif // TP0_H_INCLUDED
