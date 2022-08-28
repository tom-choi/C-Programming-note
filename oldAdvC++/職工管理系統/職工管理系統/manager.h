#pragma once
#include <iostream>
using namespace std;
#include "worker.h"

class Manager : public Worker
{
public:
	Manager(int id, string name, int diD);
	virtual void showinfo();
	virtual string getDeptName();
};