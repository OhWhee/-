#include <iostream>
#include "Creature.h"
#pragma once
using namespace std;

class Fish : public Creature {

	public:
		Fish(string, int, int);
		~Fish() {};
		void move();
		void speak();
};