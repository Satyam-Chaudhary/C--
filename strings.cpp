//string --> array of char datatypes each element is a chahracter
#include<iostream>
#include<string>
using namespace std;

int main(){
    string s = "hover";
    cout << s[0] << endl;
    cout << s[3] << endl;

    s[0] = 'r';
    cout << s[0] << endl;
    cout << s << endl;

    int len = s.size();
    cout << len << endl;
    cout << s[len - 1] << endl; // print the last char in string index
    s[len-1] = 'd';
    cout << s[len -1] << endl;

    //can use length also

    cout<< "Gives string length " << s.length() << endl;

    
    return 0;
}