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
	Time(); //현재 시간
	Time(int secondSince); //1970.1/1일 자정부터 지금까지의 경과 시간을 초로 나타낸 생성자
	Time(int h, int m, int s); //지정된 시 분 초 갖는 생성자
	int getHour();
	int getMinute();
	int getSecond();
	void setTime(int elapsTime); //경과된 시간을 사용하느 객체에 대해 새로운 시간을 설정하는 함수
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
	 hour = elapseTime / 3600; // 초를 시간으로 나눈 값
	 minute = (elapseTime % 3600) / 60; // 초를 분으로 나눈 나머지를 분으로 나눈 값
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






