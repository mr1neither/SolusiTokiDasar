#include<cstdio>

int n;
int main() {
    -100000<=n<=100000;
    scanf("%d", &n);
    if (n > 0 && n % 2 == 0){
        printf("%d", n);
    }
}