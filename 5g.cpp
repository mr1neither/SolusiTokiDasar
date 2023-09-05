#include<cstdio>
#include<cmath>
int a1,a2,b1,b2,m;
int main (){
    scanf("%d %d %d %d", &a1,&b1, &a2, &b2);
    if (-100000<=a1 && a1 <=100000 &&
        -100000<=b1 && b1 <=100000 &&
        -100000<=a2 && a2 <=100000 &&
        -100000<=b2 && b2 <=100000){
        m = abs(a1-a2) + abs(b1-b2);
        printf("%d", m);
    }
}