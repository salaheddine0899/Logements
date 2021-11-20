#pragma once
#include<iostream>
using namespace std;
namespace loge {
	class Logement
	{
	private:
		string adresse;
		int nombre_pieces;
	protected:
		int surface_habital;
		double taux_imposition;
	public:
		Logement(string adresse,int surface_habital,int nombre_pieces,double taux_imposition);
		virtual void afficher()const;
		virtual double calculer_taxe()const=0;
		bool equal_adress(const Logement &l)const;
	};
}
