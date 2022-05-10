/*
- Cuál es el propósito de este código?
    Con cada vuelta puede ser verdadero o falso, y si es verdadero, retorna
    el número mayor del array

- Cuál es la complejidad del código?
    O(n^2)
*/

// Código de compljidad lineal

#include<iostream>
#include<vector>
using namespace std;

int greatestNumber(vector<int> array){
    int num_mayor = 0;
    for(int i = 0 ; i < array.size(); i++){
        if(num_mayor < array[i]){
            num_mayor = array[i];
        }
    }
    return num_mayor;
}

int main(){
    vector<int> array = {8,9,50,32,1,4,5,100,2};
    cout<< greatestNumber(array) << endl;

    return 0;
}
