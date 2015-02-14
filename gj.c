//150214
//
//
#include <stdio.h>

//void gauss_jordan(int n, double a[3][3], double b[]);

void gauss_jordan(int n, double a[3][3], double b[]){
	int ipv, i, j;
	double inv_pivot, temp;
	
	printf("GJ\n");
	
	for(ipv = 0; ipv <= n-1; ipv++){
		//
		inv_pivot = 1.0 / a[ipv][ipv];
		for(j = 0; j <= n-1; j++){
			a[ipv][j] *= inv_pivot;
		}
		b[ipv] *= inv_pivot;
		
		//
		for(i = 0; i <= n-1; i++){
			if(i != ipv){
				temp = a[i][ipv];
				for(j = 0; j <= n-1; j++){
					a[i][j] -= temp*a[ipv][j];
					printf("j = %d, ipv = %d, a[i][j]=%10.4f\n", j, ipv, a[i][j]);
				}
					b[i] -= temp*b[ipv];
			}
		}
		
	}
}


	
	