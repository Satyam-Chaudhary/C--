#include<iostream>
using namespace std;

//in pass by value --> a copy of varisble is passed in the function or to say value is passed in the function

void doSomething(int num){
    cout << num << endl;
    num += 5;
    cout << num << endl;
    num += 5;
    cout << num << endl;
}

void doSomething2(string name){
    name[0] = 't';
    cout << name << endl;
}
int main(){
    int num = 10;
    doSomething(num);
    cout << num << endl; 
    //copy of num is passed in the function rather than the original num
    string name = "raj";
    doSomething2(name);
    cout << name << endl;
    //copy of string is passed as pass by value
    return 0;

}