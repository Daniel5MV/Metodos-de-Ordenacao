#include <stdio.h>
#include <conio.h>

void ordemI(int *n,int t);
void print(int *n,int t);       //funcao para escrevar a vetor no terminal 


int main(){
    int num[]={5,4,3,2,1};
    int tamanho = sizeof(num)/sizeof(num[0]);
    print(num,tamanho);
    ordemI(num,tamanho);

    return 0;
}

void print(int *n,int t){
    printf("\n\n");
    for(int x=0;x<t;x++){
        printf("%d|",n[x]);
    }
    getchar();
}

void ordemI(int *n,int t){
    int y,aux;
    for(int x=1;x<t;x++){
        y=x;
        while(n[y]<n[y-1]){
            aux=n[y];
            n[y]=n[y-1];
            n[y-1]=aux;
            print(n,t);
            if(y-1>=1){
                y-=1;
            }
        }
    }
}