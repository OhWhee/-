#pragma once
#include "Creature.h"
#include "Fish.h"
#include "Fisherman.h"
using namespace std;


class God {

	private:
		int count_creatures = 0;
		int count_fishes = 0;
		int count_fishermans = 0;

	public:
		God();
		Creature create_creature(string, int, int);
		Fish create_fish(string, int, int);
		Fisherman create_fisherman(string, int, int);

		void show_creatures() { cout << "Amount of creatures: " << count_creatures << endl;; };
		void show_fishes() { cout << "Amount of fish: " << count_fishes << endl;; };
		void show_fishermans() { cout << "Amount of fishermans: " << count_fishermans << endl;; };

};