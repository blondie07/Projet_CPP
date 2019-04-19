/*
 * Carre.cpp
 *
 *  Created on: 19 avr. 2019
 *      Author: ribes
 */

#include<stdlib.h>
#include<iostream>
#include "Carre.h"

using namespace std;

Carre::Carre() : Polygone(4){
	//nbCotes = 4;
	lon = 1;
}

Carre::Carre(int L) : Polygone(4){
	//nbCotes = 4;
	lon = L;
}

int Carre::perimetre(){
	return(4*lon);
}

void Carre::afficherCaracteristique(){
	cout << "Nombre de côtés : " << nbCotes << endl;
	cout << "longueur :" << lon << endl;
}



