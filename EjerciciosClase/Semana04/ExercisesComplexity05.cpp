/*
- Cuál es el propósito de este código?
    ir partiendo la palabra hasta que solo quede la ultima letra

- Cuál es la complejidad del código?
    O(log n)
*/

#include<iostream>
#include<string>
using namespace std;

char pick_resume(string resumes){
    string eliminate = "top";
    while(resumes.size()>1){
        if(eliminate == "top"){
            resumes = resumes[resumes.size()/2,resumes.size()-1];
            eliminate = "bottom";
        }
        else if(eliminate == "bottom"){
            resumes = resumes[0,resumes.size()/2];
            eliminate = "top";
        }
    }
    return resumes[0];
}

int main(){
    string resumes = "prueba";
    cout << pick_resume(resumes) << endl;
    return 0;
}
