#include "pch.h"
#include "Logement.h"

namespace loge {
	Logement::Logement(string adresse, int surface_habital, int nombre_pieces, double taux_imposition)
	{
		this->adresse = adresse;
		this->surface_habital = surface_habital;
		this->nombre_pieces = nombre_pieces;
		this->taux_imposition = taux_imposition;

	}

	void Logement::afficher()const
	{
		cout << "adress: " << this->adresse << endl;
		cout << "surface habital: " << this->surface_habital << endl;
		cout << "nombre de pieces: " << this->nombre_pieces << endl;
		cout << "taux d'imposition: " << this->taux_imposition << endl;
	}
	bool Logement::equal_adress(const Logement& l)const
	{
		return this->adresse==l.adresse;
	}
}