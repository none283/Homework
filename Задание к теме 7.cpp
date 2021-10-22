#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    cout << "Task 1" << endl;

    double a, b, c, x, y, z, temp, temp2;
    cout << "a = ";
    cin >> a;
    cout << endl;
    a = (a * 1) / 180;
    cout << "a = " << a << "pi radian"<< endl << endl;


    cout << "Task 2" << endl;

    cout << "a = ";
    cin >> a;
    cout << "pi radian";
    cout << endl;
    a = a * 180;
    cout << "a = " << a << " degrees" << endl << endl;

    cout << "Task 3" << endl;

    cout << "X = ";
    cin >> x;
    cout << "A = ";
    cin >> a;
    cout << "Y = ";
    cin >> y;
    cout << endl;
    
    temp = a / x;
    temp2 = y * temp;

    cout << x << " kg cost " << a << " rub. 1kg cost " << temp << " and " << y << " kg cost " << temp2 << " rub." << endl << endl;

    cout << "Task 4" << endl;

    cout << "V1 = ";
    cin >> a;
    cout << "V2 = ";
    cin >> b;
    cout << "S = ";
    cin >> c;
    cout << "T = ";
    cin >> x;
    cout << endl;

    temp = a * x;
    temp2 = b * x;
    y = temp + temp2 + c;

    cout << "V1 = " << a << " km/h, V2 = " << b << " km/h, S = " << c << " km. Distance from 2 object after " << x << " hour(s) = " << y << " km if they go away from each other." << endl << endl;

    cout << "Task 5" << endl;

    cout << "A = ";
    cin >> a;
    cout << "B = ";
    cin >> b;
    cout << endl;

    cout << a << "X + " << b << " = 0" << endl;
    cout << a << "X = " << -b << endl;
    cout << "X = " << -b / a << endl << endl;

    cout << "Task 6" << endl;

    cout << "A1 = ";
    cin >> a;
    cout << "B1 = ";
    cin >> b;
    cout << "C1 = ";
    cin >> c;
    cout << "A2 = ";
    cin >> x;
    cout << "B2 = ";
    cin >> y;
    cout << "C2 = ";
    cin >> z;
    cout << endl;

    cout << a << "X + " << b << "Y = " << c << endl;
    cout << x << "X + " << y << "Y = " << z << endl << endl;

    cout << a << "X = " << c << " - " << b << "Y" << endl;
    cout << x << "X + " << y << "Y = " << z << endl << endl;

    cout << "X = (" << c << " - " << b << "Y) / " << a << endl;
    cout << x << "X + " << y << "Y = " << z << endl << endl;

    cout << x << "((" << c << " - " << b << "Y) / " << a << ") + " << y << "Y = " << z << endl << endl;

    cout << "((" << x * c << " - " << x * b << "Y) / " << a << ") + " << y << "Y = " << z << endl << endl;

    cout << x * c << "/" << a << " - " << x * b << "Y/" << a << " + " << y << "Y = " << z << endl << endl;

    cout << y - ((x * b) / a) << "Y = " << z - ((x * c) / a) << endl << endl;

    cout << "Y = " << (z - ((x * c) / a)) / (y - ((x * b) / a)) << endl;
     
    cout << "X = " << (c - b * ((z - ((x * c) / a)) / (y - ((x * b) / a)))) / a;
}
