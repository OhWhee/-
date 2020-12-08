#include <iostream>
#pragma once

using namespace std;

class Creature {
	private:
		string name;
		int id;
		int lifespan;

	public:
		Creature(string, int, int);
		string get_name() { return name; };
		int get_id() { return id; };
		int get_lifespan() { return lifespan; };

		void set_name(string new_name) { name = new_name; };
		void set_id(int new_id) { id = new_id; };
		void set_lifespan(int new_lifespan) { lifespan = new_lifespan; };

		void move();
		void speak();
		
};