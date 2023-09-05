#include<cstdio>
#include<string>


int n;
int main(){
    scanf("%d", &n);
    if(1<=n && n<100000){
        if (n/10>=0 && n/10<1){
            printf("satuan");
        }
        else if (n/10>=1 && n/10<10){
            printf("puluhan");
        }
        else if (n/10>=10 && n/10<100){
            printf("ratusan");
        }
            else if (n/10>=100 && n/10<1000){
            printf("ribuan");
        }
            else if (n/10>=1000 && n/10<10000){
            printf("puluhribuan");
        }
    }

    return 0;
     
}