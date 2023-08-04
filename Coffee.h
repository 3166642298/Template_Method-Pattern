#pragma once
#ifndef COFFEE_H
#define COFFEE_H
#include"CaffeineBeverageWithHook.h"
class Coffee :public CaffineBeverageWithHook {
public:
	void brew() override;
	void addCindiments() override;
};
#endif // !COFFEE_H
