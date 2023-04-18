#include <iostream>
using namespace std;

class Rectangle
{
private:
	double width;
	double height;
public:
	Rectangle()
	{
		width = 1;
		height = 1;
	}
	Rectangle(double w, double h) 
	{
		width = w;
		height = h;
	}
	double getWidth()
	{
		return width;
	}
	double getHeight()
	{
		return height;
	}
	void setWidth(double newWidth)
	{
		width = newWidth;
	}
	void setHeight(double newHeight)
	{
		height = newHeight;
	}
	double getArea()
	{
		return width * height;
	}
	double getPerimeter()
	{
		return (width + height) * 2;
	}
};
void displayRect(Rectangle rect)
{
	cout << "The rectangle with width " << rect.getWidth() << " and  height "
		<< rect.getHeight() << " has an area of "
		<< rect.getArea() << " square units and the perimeter is "
		<< rect.getPerimeter() << " units." << endl;
}
int main()
{

	Rectangle rect1(4, 40);
	Rectangle rect2(3.5, 35.9);

	displayRect(rect1);
	displayRect(rect2);

	return 0;

}