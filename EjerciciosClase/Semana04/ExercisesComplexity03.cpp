/*
- Cuál es el propósito de este código?
    Buscar dos numeros en un arrays que sumen 10,
    si encuentra devuelve true

- Cuál es la complejidad del código?
    O(n^2)
*/

#include<iostream>
#include<vector>
using namespace std;

bool twoSum(vector<int> array){
    for(int i = 0; i< array.size(); i++){
        for(int j = 0; j <array.size(); j++){
            if( i != j && (array[i] + array[j] == 10)){
                return true;
            }
        }
    }
    return false;
}

int main(){
    vector<int> array = {1,2,3,4,5,6,7,8,9};
    cout << twoSum(array);
    return 0;
}
