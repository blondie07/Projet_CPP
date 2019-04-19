/*
 * Polygone.cpp
 *
 *  Created on: 19 avr. 2019
 *      Author: ribes
 */

#include<stdlib.h>
#include<iostream>
#include "Figure.h"
#include "Polygone.h"

using namespace std;

Polygone::Polygone(){
	nbCotes = 3;
}

Polygone::Polygone(int c){
	nbCotes = c;
}

void Polygone::afficherCaracteristiques(){
	cout << "Ce polygone a "<< nbCotes << " côtés" <<endl;
}
