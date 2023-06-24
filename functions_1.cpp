#include<iostream>
using namespace std;

//void
//return
//parametrised
//non paramaterised

// void printName(){
//     cout << "hello world" <<endl;
// }
// void welcome(string name){
    
//     cin >> name;
//     cout <<"welcome "<< name << endl;
// }

// int main(){
//     printName();

//     string name;
//     welcome(name);
//     return 0;
// }

// take 2 numbers and print it's sum
//retuen datatype need to have a return value otherwise keep it void

int sum(int num1 , int num2){
    int num3 = num1 + num2;
    return num3;
}

int max(int num1 , int num2){
    int max;
    if(num1 >= num2){
        max = num1;
    }else{
        max = num2;
    }
    return max;
}

int main(){
    int num1 , num2;
    cin >> num1 >> num2;
    cout << "sum is : "<< sum(num1 , num2)<< endl;
    cout << "max is: " << max(num1 , num2) << endl;
    return 0;
}