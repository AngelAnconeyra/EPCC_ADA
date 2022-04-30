/*Producto máximo de dos números en una secuencia, dada una secuencia de n
numeros no negaticos y mayores que cer. El objetivo es encontrar
el mayor número que se pueda obtener mulplicando dos números de 
esta secuencia. Usando un bucle for
*/

#include<iostream>
#include<vector>
using namespace std;

int MaxProduct(vector<int>& numbers){
    int nummayor=0, total;
    int posi,posj;
    //Multpicacion de todos los elementos
    for(int i = 0; i <= numbers.size(); i++){
        for(int j = i+1; j < numbers.size(); j++){
            total = numbers[i] * numbers[j];
            if(total > nummayor){//Si el nuevo numero es mayor que el anterior se guardara el nuevo numero como mayor
                nummayor = total; // guarda el resultado mayor
                posi = numbers[i]; //guarda uno de los numeros de la multiplicacion
                posj = numbers[j]; //guarda el otro numero de la multiplicacion
            }
        }
    }
    cout<< posi << " x " << posj << " = ";
    return nummayor;
}

int main(){
    //Lectura de datos
    vector<int> numbers{};
    int n{};
    while(cin>>n){//introducir una letra para que no reciba más numeros
        //Solo acpeta numeros mayores a 0
        if(n>0){
           numbers.push_back(n);
        }
    }
    //Salida de datos
    cout<< MaxProduct(numbers);
    return 0;
}
