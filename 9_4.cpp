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
	MyPoint(); // 점 (0,0) 나타내는 생성자
	MyPoint(double x, double y); //지정 좌표의 점을 생성하는 생성자
	double distance(MyPoint endPoint); //MyPoint 유형의 한 점에서 다른 점까지의 거리 반환함수.
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