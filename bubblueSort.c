#include <stdio.h>
#include <conio.h>

void ordemB(int *n,int t);      //funcao do Selection Sort
void print(int *n,int t);       //funcao para escrevar a vetor no terminal

int main(){
    int num[]={5,4,3,2,1};
    int tamanho = sizeof(num)/sizeof(num[0]);   //determinar o tamanho do vetor
    print(num,tamanho);
    ordemB(num,tamanho);


    return 0;
}

void print(int *n,int t){
    printf("\n\n");
    for(int x=0;x<t;x++){
        printf("%d|",n[x]);
    }
}

void ordemB(int *n,int t){
    int aux;
    for(int x=0;x<t-1;x++){
        for(int y=0;y<t-x;y++){
            if(n[y]>n[y+1]){
                aux=n[y];
                n[y]=n[y+1];
                n[y+1]=aux;
                print(n,t);
            }
        }
    }
}
