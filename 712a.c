#include <stdio.h>
int matrix[5][5];
int main() {
int i, j;
for ( i =0; i < 5; i++ ) {
for( j = 0; j < 5; j++ ) {
matrix[i][j] = (i * j) % 5;
}
}
for ( i = 0; i < 5; i++) {
for( j = 0; j < 5; j++ ) {
printf("%5d ", matrix[i][j]);
}
printf("\n");
}
return 0;
}