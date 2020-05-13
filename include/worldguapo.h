#ifndef WORLD_H
#define WORLD_H


#include "bodyguapo.h"

struct world {
	world() {}
	world(vect_2 gravity) : gravity(gravity) {}

	void instansgravity(const vect_2& v);

	void addbody(cuerpo* b);


	void step(float dt);

	vect_2 gravity;
	std::vector<cuerpo*> bodies;
};

#endif