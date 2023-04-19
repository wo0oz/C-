#include <iostream>
#include <cmath>
using namespace std;

class QuadraticEquation
{
private:
	double a, b, c;
public:
	QuadraticEquation(double A,double B,double C);
	double getA();
	double getB();
	double getC();
	double getDiscriminant();
	double getRoot1();
	double getRoot2();
};
QuadraticEquation::QuadraticEquation(double A, double B, double C)
{
	a = A;
	b = B;
	c = C;
}
double QuadraticEquation::getA()
{
	return a;
}
double QuadraticEquation::getB()
{
	return b;
}
double QuadraticEquation::getC()
{
	return c;
}
double QuadraticEquation::getDiscriminant()
{
	
	return (pow(b, 2) - 4 * a * c);

}
double QuadraticEquation::getRoot1()
{
	if (getDiscriminant() < 0)
	{
		return 0;
	}
	else
		return ((sqrt((pow(b, 2) - 4 * a * c)) - b) / (2 * a));
}
double QuadraticEquation::getRoot2()
{
	if (getDiscriminant() < 0)
	{
		return 0;
	}
	else
		return (-b - (sqrt((pow(b, 2) - 4 * a * c)))/ (2 * a));
}
int main()
{
	double a, b, c;
	cin >> a >> b >> c;

	QuadraticEquation e(a,b,c);

	cout << "The discriminant is " << e.getDiscriminant() << endl;
	if (e.getDiscriminant() > 0)
	{
		cout << e.getRoot1() << " and " << e.getRoot2() << endl;
	}
	else if (e.getDiscriminant() == 0)
	{
		cout << e.getRoot1() << endl;
	}
	else
		cout << "The equation has no real roots" << endl;
}