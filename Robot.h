/*
classe : Robot.h
auteurs : Molinengo/Soumille
date : Nov 2015
*/

#ifndef _ROBOT_H_
#define _ROBOT_H_

#include "EtatRobot.h"
#include "Objet.h"
#include "Plot.h"
#include "Position.h"
#include "Afficheur.h"
#include <vector>
#include <string>

using namespace std;

class Robot {

private:
	Position  _position;
	string _direction;
	Objet _objetSaisi;
	Plot _plot;
	EtatRobot * _etat;
	string _ordre;
	vector<Afficheur*> _afficheurs;
	
public:
	Robot();

	//fonctions
	void saisir(Objet O);
	void avancer(int x, int y);
	void tourner(string direction);
	void poser();
	int peser();
	void rencontrerPlot(Plot p);
	int evaluerPlot();
	void figer();
	void repartir();
	void attacher(Afficheur *);
	void detacher(Afficheur *);
	void notifier();

	//getters
	Position getPosition();
	string getDirection();
	Objet getObjet();
	Plot getPlot();
	EtatRobot * getEtat();
	string getOrdre();
};

#endif