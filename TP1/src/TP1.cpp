//============================================================================
// Name        : TP1.cpp
// Author      : RIBES, VIELFAURE
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include<stdlib.h>
#include<iostream>
#include<vector>
#include "Figure.h"
#include "Polygone.h"
#include "Rectangle.h"
#include "Carre.h"
#include "TriangleEquilateral.h"
#include "Cercle.h"

using namespace std;

int main() {
//creation d'un tableau de figures fermees
cout << "coucou" << endl;
vector<Figure*> vect;

Carre car1(5);
TriangleEquilateral tri1(4);
Cercle cer1(6);
Rectangle rec1(4,6);

cout << "coucou1.5" << endl;

vect[0]= &car1;
vect[1]= &tri1;
vect[2]= &cer1;
vect[3]= &rec1;

cout << "coucou2" << endl;
for(int i = 0; i <= 3; i++){
	cout << "Figure numéro " << i << " : ";
	vect[i]->perimetre();
	vect[i]->afficherCaracteristiques();
}

}
