#include<iostream>
using namespace std;

//pass by reference

void doSomething(int &num){ //attach & to the parameter so that address is passed instead of value or copy
    cout << num << endl;
    num += 5;
    cout << num << endl;
    num += 5;
    cout << num << endl;
}

void doSomething2(string &name){
    name[0] = 't';
    cout << name << endl;
}

//arrays --> always goes by pass by reference

void doArray(int arr[] , int n){
    arr[0] += 100;
    cout << arr[0] << endl;
}

int main(){
    // int num = 10;
    // doSomething(num);
    // cout << num << endl; 

    // string name = "raj";
    // doSomething2(name);
    // cout << name << endl;

    int n = 5;
    int arr[n];

    for(int i = 0 ; i < n ; i++){
        cin >> arr[n];
    } 

    doArray(arr , n);
    cout << arr[0] << endl;

    //even without & written array undergone pass by refernce
    //array is a pointer that's why!


    return 0;

}