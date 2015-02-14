//
//
// driver_gj.c
#include <stdio.h>

void print_matrix2(int n, double a[3][3]);
void gauss_jordan(int n, double a[3][3], double b[]);

int main(){
	int n = 3;
	double a[3][3], b[3];
	
	a[0][0] = 2.0;	a[0][1] = -2.0;	a[0][2] = 1.0;
	a[1][0] = 3.0;	a[1][1] = -3.0;	a[1][2] = 1.0;
	a[2][0] = 1.0;	a[2][1] = 1.0;	a[2][2] = -1.0;
	
	b[0] = 3;
	b[1] = 6;
	b[2] = 2;
	
	print_matrix2(n, a);
	
	gauss_jordan(n, a, b);
	
	print_matrix2(n, a);
	
	return 0;
	
}

void print_matrix2(int n, double a[3][3]){
	int i, j;
	
	for(j = 0; j < n; j++){ 
		for(i = 0; i < n; i++){
			printf("%10.4f", a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}


