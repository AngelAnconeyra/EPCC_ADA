/*
Escriba el procedimiento Insertion-Sort para que muestre el 
resultado en orden descendente
*/
#include<iostream>
#include<vector>
using namespace std;

void InsertionSort(vector<int> &list){
    for (int j = 1; j < list.size(); j++) {
        int key = list[j]; //Guarda el elemento de la izquierda
        int i    = j - 1; //Numero del elemento menos 1
        while (i >= 0 and list[i] > key) {
            list[i + 1] = list[i]; //Intercambiar de posiciones de la derecha entre la posicion izquierda
            i--;
        }
        list[i + 1] = key;
    }
}

int main(){
    vector<int> list{};
    int n{};
    //Para insertar numeros
    /*
    while(cin>>n){//introducir una letra para que no reciba más numeros
        list.push_back(n);
    }
    */
   //Caso de prueba 1
    //list = {31,41,59,26,41,58};

    //Caso de prueba 2
    //list = {5,-8,25,98,3,7,11,33,81,52,1};

    //Caso de prueba 3
    list = {-80,-9,9,13,100,55};
    InsertionSort(list); //Funcion de ordenacion mediante insertionsort
    //Impresion de los numeros en orden descendente
    cout<<endl;
    for(int j = list.size() - 1; j >= 0 ;j--){
        cout<< list[j] <<" ";
    }
    return 0;
}
