#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	double x1, y1, x2, y2, x3, y3, x4, y4;
	cout << "1." << endl;
	cout << "x1 = ";
	cin >> x1;
	cout << "y1 = ";
	cin >> y1;
	cout << "x2 = ";
	cin >> x2;
	cout << "y2 = ";
	cin >> y2;
	cout << "расстояние между двумя точками с заданными координатами (x1, y1) и (x2, y2) = " << sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2)) << endl;
	cout << endl << endl;



	double AC, BC;
	cout << "2." << endl;
	cout << "A.x1 = ";
	cin >> x1;
	cout << "A.y1 = ";
	cin >> y1;
	cout << "B.x2 = ";
	cin >> x2;
	cout << "B.y2 = ";
	cin >> y2;
	cout << "C.x3 = ";
	cin >> x3;
	cout << "C.y3 = ";
	cin >> y3;
	AC = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));
	BC = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
	cout << "длины отрезков AC = " << AC << endl;
	cout << "длины отрезков BC = " << BC << endl;
	cout << "сумма AC + BC = " << AC + BC;
	cout << endl << endl;



	cout << "3." << endl;
	cout << "A.x1 = ";
	cin >> x1;
	cout << "A.y1 = ";
	cin >> y1;
	cout << "B.x2 = ";
	cin >> x2;
	cout << "B.y2 = ";
	cin >> y2;
	cout << "C.x3 = ";
	cin >> x3;
	cout << "C.y3 = ";
	cin >> y3;
	AC = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));
	BC = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
	cout << "произведение длин отрезков AC и BC = " << AC * BC << endl << endl;
	


	cout << "4." << endl;
	cout << "x1 = ";
	cin >> x1;
	cout << "y1 = ";
	cin >> y1;
	cout << "x3 = ";
	cin >> x3;
	cout << "y3 = ";
	cin >> y3;

	x2 = x1, y2 = x3;
	x4 = y3, y4 = y1;

	double AD = sqrt(pow(x1 - x4, 2) + pow(y1 - y4, 2));
	double AB = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));

	cout << "периметр данного прямоугольника = " << 2 * (AD + AB) << endl;
	cout << "площадь данного прямоугольника = " << AD * AB << endl;
	cout << endl << endl;



	cout << "5." << endl;
	cout << "x1 = ";
	cin >> x1;
	cout << "y1 = ";
	cin >> y1;
	cout << "x2 = ";
	cin >> x2;
	cout << "y2 = ";
	cin >> y2;
	cout << "x3 = ";
	cin >> x3;
	cout << "y3 = ";
	cin >> y3;	
	
	AB = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
	BC = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
	double CA = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));

	cout << "периметр = " << AB + BC + CA << endl;
	double p = (AB + BC + CA) / 2;
	cout << "площадь по формуле Heron = " << sqrt(p * (p - AB) * (p - BC) * (p - CA));
}