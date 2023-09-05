#include<cstdio>

int n;
int main() {
    -100000<=n<=100000;
    scanf("%d", &n);
    if (n != 0){
        if(n > 0) {
        printf("positif");
        }
        else{
            printf("negatif");
        }
    }
    else {
        printf("nol");
    }
}