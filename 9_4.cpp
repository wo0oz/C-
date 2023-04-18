#include <iostream>
#include <cmath>
using namespace std;

class MyPoint
{
private:
	double x;
	double y;
public:
	double getX();
	double getY();
	MyPoint(); // �� (0,0) ��Ÿ���� ������
	MyPoint(double x, double y); //���� ��ǥ�� ���� �����ϴ� ������
	double distance(MyPoint endPoint); //MyPoint ������ �� ������ �ٸ� �������� �Ÿ� ��ȯ�Լ�.
};
double MyPoint::getX()
{
	return x;
}
double MyPoint::getY()
{
	return y;
}
MyPoint::MyPoint()
{
	x = 0;
	y = 0;
}
MyPoint::MyPoint(double newX, double newY)
{
	x = newX;
	y = newY;
}
double MyPoint::distance(MyPoint endPoint)
{
	double distance = sqrt(pow(endPoint.getX() - x, 2) + pow(endPoint.getY() - y, 2));

	return distance;
}
int main()
{
	MyPoint p1;
	MyPoint p2(10,30.5);

	cout << "Distance is " << p1.distance(p2) << endl;
	
	return 0;
}