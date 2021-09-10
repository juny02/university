#include <iostream>
#include "minimal_fighter.h"
int MinimalFighter::hp(){ return mHp;}
int MinimalFighter::power() { return mPower;}
FighterStatus MinimalFighter::status() { return mStatus;}
void MinimalFighter::setHp(int _hp) { mHp=_hp;}
void MinimalFighter::hit(MinimalFighter *_enemy) {
	mHp-=_enemy->power();
	int a=_enemy->hp();
	a-=mPower; 
	_enemy->setHp(a);
	*this=MinimalFighter(mHp,mPower);
	*_enemy=MinimalFighter(_enemy->hp(), _enemy->power());
	}
void MinimalFighter::attack(MinimalFighter *_enemy){
	int a=_enemy->hp();
	a-= mPower;
	_enemy->setHp(a);
	mPower=0;
	*this=MinimalFighter(mHp,mPower);
        *_enemy=MinimalFighter(_enemy->hp(), _enemy->power());}
void MinimalFighter::fight(MinimalFighter *_enemy){
	while (mHp!=0 && _enemy->hp()!=0){
		 mHp-=_enemy->power();
		 int a= _enemy->hp();
		 a-=mPower;
		 _enemy->setHp(a);
	}
		*this=MinimalFighter(mHp,mPower);
	        *_enemy=MinimalFighter(_enemy->hp(), _enemy->power());}

