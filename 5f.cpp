#include<cstdio>
#include<cmath>

float n;
int f, c;
int main (){
    scanf("%f", &n);
    if (-100000<= n && n <=100000){
        if (n == trunc(n)){
            f = n; 
            c = n;
            printf("%d %d", f,c);
        }
        else if (n != (trunc(n) == n) && n > 0) {
            f = trunc(n);
            c = trunc(n+1);
            printf("%d %d", f, c);
        }
        else if(n != (trunc(n)==n) && n < 0){
            f = trunc(n-1);
            c = trunc(n);
            printf("%d %d", f,c);
        }
    }

}

