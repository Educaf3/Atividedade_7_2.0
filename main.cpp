#include <iostream>
#define N 5
using namespace std;

void troca(int *a,int *b){
    int aux=0;
    if(*a>*b){
        aux = *a;
        *a = *b;
        *b = aux;
    }
}

void decomposicao(double *a,int *b){
    *b = *a;
    *a -= *b;
}

bool has_zero(int *a){
    int n = N;
    bool b;
    for(int i=0;i<n;i++){
        if(a[i] == 0){
           b = true; 
        }
        else{
            b = false;
        }
    }
    return b;
}

int main(){
    int a[N] = {4,4,4,4,0};
    
    cout << has_zero(&a[0]);
    return 0;
}