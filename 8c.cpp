#include<cstdio>
#include<cmath>

int main(){
    int n,x;
    int k=0;
    scanf("%d", &n);
    for (int i=0; i<n; i++){
        scanf("%d", &x);
        for(int j=2; j<=trunc(sqrt(x)); j++){
            if(x%j==0){
                k+=1;
            }
        }
        if(k<=1){
            k=0;
            printf("YA\n");
        }
        else{
            k=0;
            printf("BUKAN\n");
        }
    }
    
    
}