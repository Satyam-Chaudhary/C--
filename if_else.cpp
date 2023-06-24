#include<iostream>
using namespace std;

//Write a program that takes an input of age
//and prints if you are adult or not

int main(){
    int age;
    cout << "enter you age : ";
    cin >> age;
    
    if(age >= 18){
        cout << "Adult" << endl;
    }
    else if(age < 18 && age > 0){
        cout << "Not Adult" << endl;
    } else{
        cout << "Wrong input" << endl;
    }
    

    return 0;
}