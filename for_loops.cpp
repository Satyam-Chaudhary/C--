#include<iostream>
using namespace std;

int main(){

    for(int i = 0 ; i < 10 ; i++){ //scope of i is local
        cout<< "Hey" << endl;
    }
    return 0;
}