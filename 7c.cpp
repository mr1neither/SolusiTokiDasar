#include <cstdio>
int main () {
    int n, x=0;
    scanf("%d", &n);
    for (int i=1; i<=n; i++){
        for (int j=1; j<=i; j++){
            printf("%d", x);
            x+=1;
            if (x==10){
                x=0;
            }
            
        }
        printf("\n");
    }
}