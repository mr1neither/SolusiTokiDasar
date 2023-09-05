#include<cstdio>
#include<cmath>

int main(){
    int n,x,y;
    scanf("%d", &n);
    for (int i=0; i<n;i++){
        scanf("%d", &x);
        for (int j=2; j<=trunc(sqrt(x)); j++){
            if (x%j==0){
                y=1;
            }
        }
        if (y||x==1){
            y=0;
            printf("BUKAN\n");
        }
        else {
            printf("YA\n");
        }
    }
}