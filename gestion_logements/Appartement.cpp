#include "pch.h"
#include "Appartement.h"
namespace loge {
	Appartement::Appartement(string adresse, int surface_habital, int nombre_pieces, double taux_imposition, int num_etage):
		Logement(adresse,surface_habital,nombre_pieces,taux_imposition)
	{
		this->num_etage = num_etage;
	}
	double Appartement::calculer_taxe() const
	{
		return this->taux_imposition*this->surface_habital;
	}
	void Appartement::afficher() const
	{
		this->Logement::afficher();
		cout <<"numero etage: "<< this->num_etage << endl;
	}
}
