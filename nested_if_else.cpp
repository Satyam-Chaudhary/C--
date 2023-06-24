#include <iostream>
using namespace std;

/*
1. age < 18
    print-> not eligible for job
2. age >= 18 and age <= 54
    print --> eligible for job
3. age >= 55 and age <= 57
    print --> eligible for job but retirement soon
4. age > 57
    print --> retirement time
*/

int main()
{
    int age;
    cout << "Enter age: ";
    cin >> age;

    // if (age > 0 && age < 18)
    // {
    //     cout << "not eligible for job" << endl;
    // }
    // else if (age >= 18 && age <= 57)
    // {
    //     cout << "eligible for job" << endl;
    //     if (age >= 55 && age <= 57)
    //     {
    //         cout << "retirement soon" << endl;
    //     }
    // }
    // else if (age > 57)
    // {
    //     cout << "retirement line" << endl;
    // }
    // else
    // {
    //     cout << "Wrong input" << endl;
    // }

    if (age < 18)
    {
        cout << "not eligibe for job" << endl;
    }
    else if (age <= 57)
    {
        if (age <= 54)
        {
            cout << "eligible for job" << endl;
        }
        else if (age <= 57)
        {
            cout << "eligible for job but retirement soon" << endl;
        }
    }
    else
    {
        cout << "retirement line" << endl;
    }
    return 0;
}
