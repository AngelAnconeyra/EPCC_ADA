/*
- Cuál es el propósito de este código?
    Comprueba de que sea una palabra de minusculas

- Cuál es la complejidad del código?
    O(log n)
*/

#include<iostream>
#include<string.h>
using namespace std;

bool find_needle(string needle, string haystack){
    int needle_index = 0;
    int haystack_index = 0;
    while (haystack_index < haystack.size()){
        if(needle[needle_index] == haystack[haystack_index]){
            bool found_needle = true;
            while (needle_index < needle.size()){
                if( needle[needle_index] != haystack[haystack_index + needle_index]){
                    found_needle = false;
                    break;
                }
                needle_index++;
            }
            return true;
            if(found_needle){
                needle_index = 0; 
            }
        }
        haystack_index++;
    }
    return false;
}

int main(){
    string needle = " fgh";
    string haystack = "abcdefghi";
    cout << find_needle(needle, haystack);
    return 0;
}
