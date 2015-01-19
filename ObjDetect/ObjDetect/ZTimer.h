#pragma once
#include <Windows.h>

class ZTimer
{
public:
	ZTimer(void);
	~ZTimer(void);
	void start();
	double stop();

private:
	bool isStarted;
	LARGE_INTEGER freq;
	LARGE_INTEGER start_t, stop_t;
	double exe_time;
};

