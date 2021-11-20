#include "pch.h"
#include "Maison.h"

namespace loge {
	Maison::Maison(string adresse, int surface_habital, int nombre_pieces, double taux_imposition, int surface_terrain):
		Logement(adresse, surface_habital, nombre_pieces, taux_imposition)
	{
		this->surface_terrain = surface_terrain;
	}
	void Maison::afficher() const
	{
		this->Logement::afficher();
		cout << "surface du terrain: " << this->surface_terrain << endl;

	}

	double Maison::calculer_taxe() const
	{
		return this->taux_imposition*(this->surface_habital*0.1+this->surface_terrain*0.3);
	}
}