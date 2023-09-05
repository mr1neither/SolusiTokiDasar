#include<cstdio>

int main (){
    int x=0;
    int i;
    int j=0;
    while (j<100 && scanf("%d", &i) != EOF){
        x += i;
        j++;
    }
    printf("%d", x);
}