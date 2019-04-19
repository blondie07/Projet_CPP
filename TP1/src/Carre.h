/*
 * Carre.h
 *
 *  Created on: 19 avr. 2019
 *      Author: ribes
 */

#ifndef CARRE_H_
#define CARRE_H_
#include<stdlib.h>
#include<iostream>
#include "Polygone.h"

class Carre : public Polygone {

private:
	int lon;

public:
	Carre();
	Carre(int L);
	virtual int perimetre();
	virtual void afficherCaracteristique();

};

#endif /* CARRE_H_ */
