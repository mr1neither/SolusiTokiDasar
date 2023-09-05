#include<stdio.h>

int main(){
    int n,max,min,i;
    int x[1000];
    scanf("%d", &n);
    for (i=0; i<n; i++){
        scanf("%d", &x[i]);
    }
    max = x[0];
    min = x[0];

    for (i=0; i<n; i++){
        if (x[i]>=max){
            max=x[i];
        }
        else if (x[i]<=min){
            min=x[i];
        }
    }
    printf("%d %d\n", max,min);

}