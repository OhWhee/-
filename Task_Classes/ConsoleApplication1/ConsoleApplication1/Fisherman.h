#pragma once
#include "Creature.h"
#include "Fish.h"
using namespace std;

class Fisherman : public Creature {

	public:
		Fisherman(string, int, int);
		void move();
		void speak();
		void catch_fish(Fish**);

};