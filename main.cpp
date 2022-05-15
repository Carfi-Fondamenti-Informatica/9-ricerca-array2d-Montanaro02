
#include <iostream>
#include "lib.h"
using namespace std;

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
