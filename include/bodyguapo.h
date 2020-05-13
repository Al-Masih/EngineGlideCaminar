#ifndef BODY_H
#define BODY_H


#include "mathguapo.h"

struct cuerpo
{
	//constructor
	cuerpo() {}

	//mostrar informacion del cuerpo 
	void debuginfo();

	//aplicacion de la fuerza 
	void addforce(const vect_2& v);

	float mass;
	float invmass;
	vect_2 position;
	vect_2 velocity;
	vect_2 force = vect_2(0.0f, 0.0f);
};


#endif