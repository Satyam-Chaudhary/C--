// used when we need to store similar datatypes multiple times

#include<iostream>
using namespace std;

int main(){
    // int arr[3];

    // cin >> arr[0] >> arr[1];

    // cout << arr[0]<< endl;
    // cout << arr[1]<< endl;
    // cout << arr[2]<< endl;  //give garbage value if not declared

    int arr2[5];

    for(int i = 0 ; i < 5 ; i++){
        cin >> arr2[i];
    }
    for(int i = 0 ; i < 5 ; i++){
        cout <<arr2[i] << " ";
    }
    cout << endl;
    return 0;       


}