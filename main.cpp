
#include <iostream>
#include "lib.h"
using namespace std;

void init(char mat[4][5]){
    for(int i=0;i<4;i++){
        for(int j=0;j<5;j++){
            mat[i][j] = ' ';
        }
    }
}

void init(char ar[5]){
    for(int i=0; i<5;i++){
        ar[i] = ' ';
    }
}

void init (char [4][5]);
void init (char [5]);
int ricerca (char [4][5], char [5]);

int ricerca(char nomi[4][5], char seleziona[5]){
    for(int i=0; i<4; i++){
        int a=0;
        for(int j=0;j<5; j++){
            if(nomi[i][j]==seleziona[j]){
                a++;
            }
            else {
                break;
            }
        }
        if(a==5){
            return i;
        }
    }
    return -1;
}


int main(){
    char lista[4][5];
    char cerca[5];
    init (lista);
    init (cerca);
    for (int i=0; i<4; i++){
        cin >> lista [i];
    }
    for (int i=0; i<4; i++){
        cout <<lista[i];
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
