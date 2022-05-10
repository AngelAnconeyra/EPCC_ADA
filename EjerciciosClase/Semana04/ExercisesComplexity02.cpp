/*
- Cuál es el propósito de este código?
    recorre un array, si el indice es un numero par lo vuelve a recorrer
    auemntando otro numero

- Cuál es la complejidad del código?
    O(n^2)
*/

#include<iostream>
#include<vector>
using namespace std;

void every_other(vector<int> array){
    for(int i = 1; i <= array.size(); i++){
        if( i % 2 == 0){
            for( int j = 0; j < array.size(); j++){
                cout << array[i] + array[j]<< " ";
            }
            cout<<endl;
        }
    }
}

int main(){
    vector<int> array = {8,9,50,32,1,4,5,100,2};;
    every_other(array);

    return 0;
}
