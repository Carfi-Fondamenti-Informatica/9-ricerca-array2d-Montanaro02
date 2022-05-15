
#include <iostream>
#include "lib.h"
using namespace std;

void init(char mat[10][20]){
    for(int i=0;i<10;i++){
        for(int j=0;j<20;j++){
            mat[i][j] = ' ';
        }
    }
}

void init(char ar[20]){
    for(int i=0; i<20;i++){
        ar[i] = ' ';
    }
}

void init (char [10][20]);
void init (char [20]);
int ricerca (char [10][20], char [20]);

int ricerca(char nomi[10][20], char seleziona[20]){
    for(int i=0; i<10; i++){
        int a=0;
        for(int j=0;j<20; j++){
            if(nomi[i][j]==seleziona[j]){
                a++;
            }
            else {
                break;
            }
        }
        if(a==20){
            return i;
        }
    }
    return -1;
}


int main(){
    char lista[10][20];
    char cerca[20];
    init (lista);
    init (cerca);
    for (int i=0; i<10; i++){
        cin >> lista [i];
    }
    cin>>cerca;
    int posizione= ricerca(lista, cerca);
    if(posizione!=-1){
        cout << posizione;
    }else{
        cout<<"non presente";
    }
    return 0;
}
