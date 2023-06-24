#include<iostream>
using namespace std;

int main(){

    // int i = 0;
    // while(i<10){
    //     cout << "Hello" << endl;
    //     i++;
    // }

    //do-while loop --> runs atleast once before checking the condition

    int i = 0;
    do{
        cout << "hey" << endl;
        i++;
    }while(i<0);
    cout<< i <<endl;
    
    //runs atleast once even though condiyion doesn't satisfy

    return 0;
}