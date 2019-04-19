/*
 * Cercle.cpp
 *
 *  Created on: 19 avr. 2019
 *      Author: ribes
 */

#include<stdlib.h>
#include<iostream>
#include "Cercle.h"

using namespace std;


Cercle::Cercle(){
	rayon = 1;
}

Cercle::Cercle(int r){
	rayon = r;
}

int Cercle::perimetre(){
	return(2*3*rayon);
}

void Cercle::afficherCaracteristiques(){
	cout << "Ceci est un cercle" << endl;
	cout << "Rayon : " << rayon << endl;
}

int Cercle::getR(){
	return rayon;
}

void Cercle::setR(int r){
	rayon = r;
}


