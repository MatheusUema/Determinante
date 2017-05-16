#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define DIM 3

/* Calcula determinante de matriz 3x3 */

/* Use um lacos para calcular o determinante e
imprima o resultado.*/

/* Se as linhas da matriz correspondem as coordenadas
de 3 vetores, eles formam uma base ? */


int main (){

    int m[DIM][DIM];
    int i, j;

    /* Dois lacos for aninhados para ler elementos.*/
    for (i=0; i<DIM; i++){
        for (j=0; j<DIM; j++){
            printf ("Digite m[%d][%d]: ", i, j);
            scanf ("%d", &m[i][j]);
        }
    }

    /* Mostra a matriz "bonitinha".*/
    printf ("\n");
    for (i=0; i<DIM; i++){
        printf ("  |");
        for (j=0; j<DIM; j++){
            printf ("%d ",m[i][j]);
        }
        printf ("|\n");
    }
    printf("\n");

    int determinante;
    int m00 =  m[0][0];
    int m01 =  m[0][1];
    int m02 =  m[0][2];
    int m10 =  m[1][0];
    int m11 =  m[1][1];
    int m12 =  m[1][2];
    int m20 =  m[2][0];
    int m21 =  m[2][1];
    int m22 =  m[2][2];

    determinante = ((m00)*((m11)*(m22)-(m12)*(m21))) - ((m01)*((m10)*(m22)-(m12)*(m20))) + ((m02)*((m10)*(m21)-(m11)*(m20)));


    if (determinante == 0){
        printf("Ola! Os vetores (%d , %d , %d), (%d , %d , %d), (%d , %d , %d) sao linearmente dependentes e portanto nao formam uma base" , m00 , m01 , m02 , m10 , m11 , m12 , m20 , m21 , m22 );
    }

    if (determinante != 0){
        printf("Ola! Os vetores (%d , %d , %d), (%d , %d , %d), (%d , %d , %d) sao linearmente independentes e portanto formam uma base" , m00 , m01 , m02 , m10 , m11 , m12 , m20 , m21 , m22 );

    }
    return 0;
}
