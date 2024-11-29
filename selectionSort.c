#include <stdio.h>

void ordemS(int *n,int t);      //funcao do Selection Sort 
void print(int *n,int t);       //funcao para escrevar a vetor no terminal 

int main(){
    int num[]={5,4,3,2,1};
    int tamanho = sizeof(num)/sizeof(num[0]);   //determinar o tamanho do vetor
    print(num,tamanho);
    ordemS(num,tamanho);

    return 0;
}

void print(int *n,int t){
    printf("\n");
    for(int x=0;x<t;x++){
        printf("%d|",n[x]);
    }
}

void ordemS(int *n,int t){
    int menor,aux; 
    for(int x=0;x<t-1;x++){
        menor=x;                //declarar o valor de comparação da variavel menor
        for(int y=x+1;y<t;y++){
            if(n[y]<n[menor]){  //comparar o valor da posição y para ver que é menor que a posição menor
                menor=y;
            }
        }
        if(x!=menor){           //permitir a troca so que os números forem diferentes
        aux=n[x];
        n[x]=n[menor];
        n[menor]=aux;
        print(n,t);
        }
    }
}