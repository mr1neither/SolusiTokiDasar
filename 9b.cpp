#include<cstdio>


int main (){
    int arr[100];
    int i=0;
    while (scanf("%d", &arr[i]) != EOF) {
        i++;
        continue;
    }
    for (int j = i-1; j >=0; j--){
        printf("%d\n", arr[j]);
    }
}