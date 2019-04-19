/*
 * TriangleEquilateral.cpp
 *
 *  Created on: 19 avr. 2019
 *      Author: ribes
 */

#include<stdlib.h>
#include<iostream>
#include "TriangleEquilateral.h"

using namespace std;


TriangleEquilateral::TriangleEquilateral(): Polygone(3){
	lon = 1;
}

TriangleEquilateral::TriangleEquilateral(int L): Polygone(3){
	lon = L;
}

int TriangleEquilateral::perimetre(){
	return(3*lon);
}

void TriangleEquilateral::afficherCaracteristique(){
	cout << "Nombre de côtés : " << nbCotes << endl;
	cout << "longueur :" << lon << endl;
}


