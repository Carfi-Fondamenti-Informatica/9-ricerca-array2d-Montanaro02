
#include "lib.h"

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
