#include <iostream>
#include <ctime>
using namespace std;

class Time
{
private:
	int hour;
	int minute;
	int second;
public:
	Time(); //���� �ð�
	Time(int secondSince); //1970.1/1�� �������� ���ݱ����� ��� �ð��� �ʷ� ��Ÿ�� ������
	Time(int h, int m, int s); //������ �� �� �� ���� ������
	int getHour();
	int getMinute();
	int getSecond();
	void setTime(int elapsTime); //����� �ð��� ����ϴ� ��ü�� ���� ���ο� �ð��� �����ϴ� �Լ�
};
Time::Time()
{
	int totalSeconds = time(0);
	int totalHours = totalSeconds / 3600;
	hour = totalHours % 24;
	totalSeconds %= 3600;
	minute = totalSeconds / 60;
	second = totalSeconds % 60;
}

Time::Time(int secondSince) 
{
	hour = secondSince / 3600;
	minute = (secondSince % 3600) / 60;
	second = secondSince % 60;
}
Time::Time(int h, int m, int s)
{
	hour = h;
	minute = m;
	second = s;
}
int Time::getHour()
{
	return hour;
}
int Time::getMinute()
{
	return minute;
}
int Time::getSecond()
{
	return second;
}
void Time::setTime(int elapseTime)
{
	 hour = elapseTime / 3600; // �ʸ� �ð����� ���� ��
	 minute = (elapseTime % 3600) / 60; // �ʸ� ������ ���� �������� ������ ���� ��
	second = elapseTime % 60;
}
void displayTime(Time t)
{
	cout << t.getHour() << " : " << t.getMinute() << " : " << t.getSecond() << endl;

}
int main()
{
	Time t;
	Time t2(555550);
	displayTime(t);
	displayTime(t2);

	return 0;
}






