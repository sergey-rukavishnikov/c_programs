#include <stdio.h>
#include <malloc.h>
int** matrix_create(int n) {
int **res = (int**)malloc( n * sizeof(int*) );
if ( res ) {
int i;
res[0] = (int*) malloc( n * n * sizeof(int) );
if ( res[0] ) {
for( i = 1 ; i < n ; i ++) {
res[i] = res[i-1] + n;
}
return res;
} else {
free( res );
}
}
return 0;
}

int proizv( int** s, int n, int size) {
	int p=1;
	for( size_t m=0; m<size; m++) {
		p=p*s[n][m];
	}
	return p;
}
int proizv1( int** s, int n, int size) {
	int p=1;
	for( size_t m=0; m<size; m++) {
		p=p*s[m][n];
	}
	return p;
}
int **mmultiply(int **a, int **b, int size){
	int** c=matrix_create(size);
	for( size_t i=0; i<size; i++){
		for( size_t j=0; j<size; j++){
			c[i][j]=proizv(a, i, size)*proizv1(b, j, size);
	}
	}
	return c;
}
	int main(){
		int N;
		int** a;
		int** b;
		int** c;
		int i, j=0;
		printf("N: ");
		scanf("%d", &N);
		a=matrix_create(N);
		b=matrix_create(N);
		printf("mass a: \n");
		for(i=0; i<N; i++){
			while(j<N){
				scanf("%d", &a[i][j]);
				++j;
			}
			j=0;
		}
		printf("mass b: \n");
		for(i=0; i<N; i++){
			while(j<N){
				scanf("%d", &b[i][j]);
				++j;
			}
			j=0;
		}
	c=mmultiply(a, b, N);
	for(i=0; i<N; i++){
		for(j=0; j<N; j++){
	printf(" %d", c[i][j]);
		}
		printf("\n");
		
	}
	}