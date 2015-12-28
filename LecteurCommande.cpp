/*
  Implementation des méthodes de LecteurCommande.h
  auteurs : Molinengo/Soumille
  date : Nov 2015
*/

#include "LecteurCommande.h"
#include "Position.h"
#include <algorithm>

 using namespace std;


 LecteurCommande::LecteurCommande(){
 	_pos= Position();
 }

//ExecuteCommandeByString()
/*
prompt 
nouvelleCommande(getString)
execute
*/
//getString
/*
return cin >> str
*/

//getInt
/*
return cin >> int
*/

//getCommande
/*
return 
*/

int LecteurCommande::getInt(){
	int value;
	cin >> value;
	return value;
}

string LecteurCommande::getStr(){
	string value;
	cin >> value;
	return value;
}

void LecteurCommande::read(){
	cout << "Début de la simulation (Ctrl^C pour quitter)" << endl;
	string nomCommande;
	while(cin >> nomCommande){
		transform(nomCommande.begin(), nomCommande.end(),nomCommande.begin(), ::toupper);
		Commande * cmd = Commande::nouvelleCommande(nomCommande);
		cmd->execute();
	}
	/*cin >> _commande;
	if(_commande=="AVANCER"){
		int _x,_y;
		cin>>_x;
		cin>>_y;
		_pos.setx(_x);
		_pos.sety(_y);

	}
	if(_commande=="SAISIR"){
		cin>>_paramInt;

	}
	if(_commande=="RENCONTRER"){
		cin>>_paramInt;
	}

	Commande::nouvelleCommande(_commande);*/
}


