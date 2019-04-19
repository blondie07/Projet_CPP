/*
 * Polygone.h
 *
 *  Created on: 19 avr. 2019
 *      Author: ribes
 */

#ifndef POLYGONE_H_
#define POLYGONE_H_
#include "Figure.h"
#include<stdlib.h>
#include<iostream>

using namespace std;

class Polygone: public Figure{

protected:
	int nbCotes;

public:
	Polygone();
	Polygone(int c);
	virtual void afficherCaracteristiques();


};


#endif /* POLYGONE_H_ */
