#include<cstdio>

int main(){
    int n; 
    int modus=0;
    int maxf=1;
    scanf("%d", &n);
    int arr[n];
    int f[1001]={0};
    for (int i=0; i<n; i++){
	scanf("%d", &arr[i]);
	f[arr[i]]++;
    }
    for (int j=1; j<=1000; j++){
	if (f[j]>=maxf){
		maxf=f[j];
		modus=j;
	}		    
    }

    printf("%d\n", modus);

}



