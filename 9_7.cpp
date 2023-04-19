#include <iostream>
#include <ctime>
using namespace std;

class StopWatch
{
private:
	int startTime;
	int endTime;
public:
	StopWatch();
	int getStartTime();
	int getEndTime();
	void start();
	void stop();
	int getElapsedTime();
};
StopWatch::StopWatch()
{
	startTime = time(0);
}
int StopWatch::getStartTime() 
{
	return startTime;
}
int StopWatch::getEndTime()
{
	return endTime;
}
void StopWatch::start()
{
	startTime = time(0);
}
void StopWatch::stop()
{
	endTime = time(0);
}
int StopWatch::getElapsedTime()
{
	return (endTime - startTime) * 1000; //밀리초로 반환
}
void sort(int random[])
{
	//선택 정렬 안배워서 모르겠다 ,,
}