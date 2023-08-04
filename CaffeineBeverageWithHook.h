#pragma once
#ifndef CAFFEINEBEVERAGEWITHHOOK
#define CAFFEINEBEVERAGEWITHHOOK
#include<iostream>
using namespace std;
class CaffineBeverageWithHook {
public:
	virtual void prepareRecipe() final;
	virtual void brew() =0;
	virtual void addCindiments()=0;
	void boilWater();
	void pourInCup();
	bool Hook();//¹³×Ó
};
#endif // !CAFFEINEBEVERAGEWITHHOOK
