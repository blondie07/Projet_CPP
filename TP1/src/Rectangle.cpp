/*
 * Rectangle.cpp
 *
 *  Created on: 19 avr. 2019
 *      Author: ribes
 */


#include<stdlib.h>
#include<iostream>
#include "Rectangle.h"

using namespace std;


Rectangle::Rectangle(): Polygone(4){
	lon = 1;
	larg = 1;
}

Rectangle::Rectangle(int L, int l): Polygone(4){
	lon = L;
	larg = l;
}

int Rectangle::perimetre(){
	return(2*lon + 2*larg);
}

void Rectangle::afficherCaracteristique(){
	cout << "Nombre de côtés : " << nbCotes << endl;
	cout << "longueur :" << lon << " largeur : " << larg << endl;
}



