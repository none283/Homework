#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main()
{
    cout << "Task 1" << endl;

    int a, b, c, x, y, z, temp, temp2;
    cout << "a = ";
    cin >> a;
    cout << "Size of file in kilobytes: " << a / 1024 << endl << endl;

    {
        int a, b;
        cout << "Task 2" << endl;

        cout << "a = ";
        cin >> a;
        cout << "b = ";
        cin >> b;
        cout << endl;

        cout << "B in A = " << a / b << endl << endl;
    }    

    {
        int a, b;
        cout << "Task 3" << endl;

        cout << "a = ";
        cin >> a;
        cout << "b = ";
        cin >> b;
        cout << endl;

        cout << "Remaining distance in A = " << a % b << endl << endl;
    }    

    {
        int a, b;
        cout << "Task 4" << endl;

        cout << "a = ";
        cin >> a;

        string number = to_string(a);
        string zero = to_string(0);

        if (to_string(number[1]) == to_string(zero[0]))
        {
            number = number[0];
        }
        else
        {            
            swap(number[0], number[1]);
        }

        cout << "Before: " << a << "\nAfter: " << number << endl << endl;
    }    

    cout << "Task 5" << endl;

    cout << "a = ";
    cin >> a;

    string number = to_string(a);
    string zero = to_string(0);
    
    swap(number[0], number[2]);
    swap(number[0], number[1]);

    if (to_string(number[0]) == to_string(zero[0]))
    {
        if (to_string(number[1]) == to_string(zero[0]))
        {
            number = number[2];
            cout << "Before: " << a << "\nAfter: " << number << endl;
        }
        else
        {
            cout << "Before: " << a << "\nAfter: " << number[1] << number[2] << endl;
        }
    }
    else
    {
        cout << "Before: " << a << "\nAfter: " << number << endl;
    }    
}
