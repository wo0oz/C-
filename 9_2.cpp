#include <iostream>
using namespace std;

class Fan
{
private:
	int speed;
	bool on;
	double radius;
public:
	Fan();
	int getSpeed();
	bool getOperate();
	double getRadius();
	void setSpeed(int newSpeed);
	void setOperate(bool operate);
	void setRadius(int newRadius);
	
};
Fan::Fan()
{
	speed = 1;
	on = false;
	radius = 5;
}
int Fan::getSpeed()
{
	return speed;
}
bool Fan::getOperate()
{
	return on;
}
double Fan::getRadius()
{
	return radius;
}
void Fan::setSpeed(int newSpeed)
{
	speed = newSpeed;
}
void Fan::setOperate(bool operate)
{
	on = operate;
}
void Fan::setRadius(int newRadius)
{
	radius = newRadius;
}
void getFan(Fan fan)
{
	cout << "speed: " << fan.getSpeed() << endl;
	cout << "radius: " << fan.getRadius() << endl;
	cout << "operate: " << (fan.getOperate()? "ON" : "OFF") << endl;
}
int main()
{
	Fan fan1;
	Fan fan2;

	fan1.setSpeed(3);
	fan1.setRadius(10);
	fan1.setOperate(true);
	getFan(fan1);

	fan2.setSpeed(2);
	fan2.setRadius(5);
	fan2.setOperate(false);
	getFan(fan2);
	
}