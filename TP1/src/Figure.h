
#ifndef FIGURE_H
#define FIGURE_H

#include<stdlib.h>
#include<iostream>

using namespace std;

class Figure{

protected:


public:
	/*donne le resultat du perimetre*/
	virtual int perimetre() =0;
	/*la longueur du rayon, côté... */
	virtual void afficherCaracteristiques() =0;





};


#endif
