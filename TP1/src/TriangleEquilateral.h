/*
 * TriangleEquilateral.h
 *
 *  Created on: 19 avr. 2019
 *      Author: ribes
 */

#ifndef TRIANGLEEQUILATERAL_H_
#define TRIANGLEEQUILATERAL_H_

#include<stdlib.h>
#include<iostream>
#include "Polygone.h"

using namespace std;

class TriangleEquilateral : public Polygone {

private:
	int lon;

public:
	TriangleEquilateral();
	TriangleEquilateral(int L);
	virtual int perimetre();
	virtual void afficherCaracteristique();

};



#endif /* TRIANGLEEQUILATERAL_H_ */
