/*
 * Rectangle.h
 *
 *  Created on: 19 avr. 2019
 *      Author: ribes
 */

#ifndef RECT_H
#define RECT_H

#include<stdlib.h>
#include<iostream>
#include "Polygone.h"

using namespace std;

class Rectangle : public Polygone {

private:
	int lon;
	int larg;

public:
	Rectangle();
	Rectangle(int L, int l);
	virtual int perimetre();
	virtual void afficherCaracteristique();

};
#endif
