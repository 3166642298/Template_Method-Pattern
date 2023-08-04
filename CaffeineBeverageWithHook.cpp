#include "CaffeineBeverageWithHook.h"

void CaffineBeverageWithHook::prepareRecipe() 
{
	this->boilWater();
	this->brew();
	if (this->Hook())
	{
		this->addCindiments();
	}
}

void CaffineBeverageWithHook::boilWater()
{
	cout << "boil water" << endl;
}

void CaffineBeverageWithHook::pourInCup()
{
	cout << "Pouring into cup" << endl;
}

bool CaffineBeverageWithHook::Hook()
{
	return true;
}
