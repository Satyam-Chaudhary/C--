#include<iostream>
using namespace std;

/*
a. Below 25 -- F
b. 25 - 44 -- E
c. 45 - 49 -- D
d. 50 - 59 -- C
e. 60 - 79 -- B
f. 80 - 100 --A
*/

int main(){
    int m;
    cout<<"Enter Marks: "<<endl;
    cin >> m;

    if(m < 25){
        cout<<"F"<<endl;
    }else if(m >25 && m <=44){
        cout<<"E"<<endl;
    }else if(m >44 && m <=49){
        cout<<"D"<<endl;
    }else if(m >49 && m <=59){
        cout<<"C"<<endl;
    }else if(m >59 && m <=79){
        cout<<"B"<<endl;
    }else if(m >79 && m <=100){
        cout<<"A"<<endl;
    }else{
        cout << "wrong input" << endl;
    }

    return 0 ;
}