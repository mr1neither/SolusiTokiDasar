#include<cstdio>

int n;
int main (){
    scanf("%d", &n);
    int i=n;
    for (i; i>=1; i--){
        if (n%i==0){
            printf("%d\n",i);
        }
    }
}

