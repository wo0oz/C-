// 20221383 우지윤
// Procedural:TV프로그램

#include <iostream>
using namespace std;

bool turnOn(bool on)
{
	return on = true;
}
bool turnOff(bool on)
{
	return on = false;
}
int setChannel(int newChannel,int channel,bool on)
{
	
	if (on && newChannel >= 1 && newChannel <= 120)
		int  channel = newChannel;
	else 
		return 0;
}
int setVolume(int newVolumeLevel,int volumeLevel,bool on)
{
	if (on && newVolumeLevel >= 1 && newVolumeLevel <= 7)
		volumeLevel = newVolumeLevel;
	else 
		return 0;
}
int channelUp(int channel,bool on)
{
	if (on && channel < 120)
		channel++;
	else 
		return 0;
}
int channelDown(int channel,bool on)
{
	if (on && channel > 1)
		channel--;
	else 
		return 0;
}
int volumeUp(int volumeLevel, bool on)
{
	if (on && volumeLevel < 7)
		volumeLevel++;
	else 
		return 0;
}
int volumedDown(int volumeLevel,bool on)
{
	if (on && volumeLevel > 1)
		volumeLevel--;
	else 
		return 0;
}

int main()
{
	int tv1Channel = 1;
	int tv2Channel = 1;
	bool tv1On = true;
	bool tv2On = true;

	cout << "tv1'S channel is " << setChannel(30, 1, true) << " and volume level is " << setVolume(3, 1, true) << endl;
	cout << "tv2's channel is " << channelUp(2, true) << " and volume level is " << volumeUp(1, true) << endl;
 
	return 0;
}