/*
 * Cercle.h
 *
 *  Created on: 19 avr. 2019
 *      Author: ribes
 */

#ifndef CERCLE_H_
#define CERCLE_H_

#include<stdlib.h>
#include<iostream>
#include "Figure.h"

using namespace std;

class Cercle : public Figure{

private:
	int rayon;

public:
	Cercle();
	Cercle(int r);
	virtual int perimetre();
	virtual void afficherCaracteristiques();
	int getR();
	void setR(int r);

};





#endif /* CERCLE_H_ */
