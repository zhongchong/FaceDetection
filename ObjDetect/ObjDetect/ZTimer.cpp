#include "ZTimer.h"


ZTimer::ZTimer(void)
{
	isStarted=false;
}

void ZTimer::start()
{
	isStarted = true;
	QueryPerformanceFrequency(&freq);
	QueryPerformanceCounter(&start_t);
}

double ZTimer::stop()
{
	exe_time = 0;
	if(isStarted == false)
		return exe_time;
	QueryPerformanceCounter(&stop_t);
	exe_time = 1e3*(stop_t.QuadPart-start_t.QuadPart)/freq.QuadPart;
	return exe_time;
}

ZTimer::~ZTimer(void)
{
}
