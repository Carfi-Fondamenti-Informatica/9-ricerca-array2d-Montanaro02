
#include "lib.h"

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
