#include "clocks.h"
#include "clock_time.h"
#include <iostream>
using namespace std;

void Clock::reset(){ _clockTime.reset(); }
void Clock::tick(){ 
	_clockTime.increment();
	_totalDrift=_clockTime.deltaTime()*_driftPerSecond;
}
	
Clock::Clock(int hour, int minute, int second, double driftPerSecond){
	 ClockTime a(hour, minute, second, 1);
	 _clockTime=a;
	 _driftPerSecond=driftPerSecond;
	 _totalDrift=(_clockTime.hour()*3600+_clockTime.minute()*60+_clockTime.second())*driftPerSecond;}

NaturalClock::NaturalClock(int hour, int minute, int second, double driftPerSecond):Clock(hour, minute, second, driftPerSecond) {}

MechanicalClock::MechanicalClock(int hour, int minute, int second, double driftPerSecond):Clock(hour, minute, second, driftPerSecond) {}

DigitalClock::DigitalClock(int hour, int minute, int second, double driftPerSecond):Clock(hour, minute, second, driftPerSecond) {}

QuantumClock::QuantumClock(int hour, int minute, int second, double driftPerSecond):Clock(hour, minute, second, driftPerSecond) {}

SundialClock::SundialClock(int hour, int minute, int second):NaturalClock(hour, minute, second,0.0) {}
void SundialClock::displayTime(){ 
	cout<<"SundialClock ";
	_clockTime.display ();
	cout<<", total drift: "<<_totalDrift<<endl; }

CuckooClock::CuckooClock(int hour, int minute, int second) : MechanicalClock( hour, minute, second,0.000694444) {}
void CuckooClock::displayTime(){
	cout<<"CuckooClock ";
	_clockTime.display ();
	cout<<", total drift: "<<_totalDrift<<endl; }

GrandFatherClock::GrandFatherClock(int hour, int minute, int second) : MechanicalClock( hour, minute, second,0.000347222) {}
void GrandFatherClock::displayTime(){
	cout<<"GrandFatherClock ";
	_clockTime.display ();
	cout<<", total drift: "<<_totalDrift<<endl; }

WristClock::WristClock(int hour, int minute, int second) : DigitalClock( hour, minute, second,0.000034722) {}
void WristClock::displayTime(){
	cout<<"WristClock ";
	_clockTime.display ();
	cout<<", total drift: "<<_totalDrift<<endl; }

AtomicClock::AtomicClock(int hour, int minute, int second) : QuantumClock( hour, minute, second,0.0) {}
void AtomicClock::displayTime(){
	cout<<"AtomicClock ";
	_clockTime.display ();
	cout<<", total drift: "<<_totalDrift<<endl; }
