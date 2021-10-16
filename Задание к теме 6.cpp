#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    cout << "Task 1" << endl;
    
    double a, b, c, x, y, temp, temp2;
    cout << "a = ";
    cin >> a;
    cout << "b = "; 
    cin >> b;
    cout << endl;
    temp = a; a = b; b = temp;
    cout << "a = " << a << endl << "b = " << b << endl << endl;
    
    
    cout << "Task 2" << endl;
    
    cout << "a = ";
    cin >> a;
    cout << "b = "; 
    cin >> b;
    cout << "c = ";
    cin >> c;
    cout << endl;
    temp = a; a = b; b = c; c = temp;
    cout << "a = " << a << endl << "b = " << b << endl << "c = " << c << endl << endl;
    
    cout << "Task 3" << endl;
    
    cout << "a = ";
    cin >> a;
    cout << "b = "; 
    cin >> b;
    cout << "c = ";
    cin >> c;
    cout << endl;
    temp = a; a = c; c = b; b = temp;
    cout << "a = " << a << endl << "b = " << b << endl << "c = " << c << endl << endl;
    
    cout << "Task 4" << endl;
    
    cout << "x = ";
    cin >> x;
    cout << "y = 3x^6 - 6x^2 - 7 = " << 3 * pow(x, 6) - 6 * pow(x, 2) - 7 << endl << endl;
    
    cout << "Task 5" << endl;
    
    cout << "x = ";
    cin >> x;
    cout << "y = 4(x - 3)^6 - 7(x - 3)^3 + 2 = " << 4 * pow(x - 3, 6) - 7 * pow(x - 3, 3) + 2 << endl << endl;
    
    cout << "Task 6" << endl;
    
    cout << "A = ";
    cin >> x;
    temp = x * x; //x^2
    x = temp * temp; //x^2 * x^2 = x^4
    temp = x * x; // x^4 * x^4 = x^8
    cout << "A^8 = " << temp << endl << endl;
    
    cout << "Task 7" << endl;
    
    cout << "A = ";
    cin >> x;
    temp = x * x; // x^2
    temp2 = x * temp; // x * x^2 = x^3
    temp = temp2 * temp; // x^3 * x^2 = x^5
    temp2 = temp * temp; // x^5 * x^5 = x^10
    temp = temp2 * temp; // x^10 * x^5 = x^15
    
    cout << "A^15 = " << temp << endl << endl;
}
