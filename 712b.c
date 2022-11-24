#include <stdio.h>
#include <malloc.h>
int *matrix;
int main() {
int i;
matrix = (int *) malloc(5*5*sizeof(int));
for ( i = 0; i < 5 * 5; i++ ) {
	matrix[i] = (i / 5) * (i % 5) % 5;
}
for ( i = 0; i < 5*5; i++ ) {
printf("%5d ", matrix[i]);
if (i % 5 == 0 ) printf("\n");
}
free(matrix);
return 0;
}
