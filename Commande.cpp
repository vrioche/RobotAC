/*
  Implementation des méthodes de Commande.h
  auteurs : Molinengo/Soumille
  date : Nov 2015
*/

#include "Commande.h"

LecteurCommande * Commande::_LecteurCommande = new LecteurCommande();

Commande::Commande(string nom, bool isReversible){
	commandesInscrites()[nom] = this;
	_reversible = isReversible;
}

map<string, Commande*>& Commande::commandesInscrites(){
	static map<string, Commande*>* docInscrits = new map<string, Commande*>();
	return *docInscrits;
}

Commande * Commande::nouvelleCommande(string nom){
	return commandesInscrites()[nom]->constructeurVirtuel(_LecteurCommande);
}
