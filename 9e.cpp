#include<cstdio>

int main(){
	int n, m, p;
	scanf ("%d %d %d", &n, &m, &p);
       	int A[n][m];
	int B[m][p];
	int C[n][p];
	for (int i=0; i<n; i++){
		for (int j=0; j<m; j++){
			scanf("%d", &A[i][j]);
			
		}
	}
	for (int j=0; j<m; j++){
		for (int k=0; k<p; k++){
			scanf("%d", &B[j][k]);
		}
	}
	
	printf("\n");
	int x=0;
	int y=0;
	for (int i=0; i<n; i++){
		for (int j=0; j<p; j++){
			for ( int k=0; k<m; k++){
				x=A[i][k]*B[k][j];
				y+=x;
				x=0;
			}
			C[i][j]=y;
			y=0;
		}

	}
	for (int i=0; i<n; i++){
		for (int j=0; j<p; j++){
			printf("%d", C[i][j]);

			if (j<p-1){
				printf(" ");
			}
			else {
				printf("\n");
			}
		}
	}
}
