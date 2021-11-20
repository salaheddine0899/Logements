#include "pch.h"
#include "Quartier.h"


namespace loge {
	Quartier::Quartier()
	{
		this->logs = new vector<Logement*>();
	}
	void Quartier::ajouter(Logement& l)
	{
		for (int i = 0; i < this->logs->size(); i++)
			if (this->logs->at(i)->equal_adress(l))
				return;
		this->logs->push_back(&l);
	}
	void Quartier::info() const
	{
		for (int i = 0; i < this->logs->size(); i++) {
			this->logs->at(i)->afficher();
			cout << "Taxe: " << this->logs->at(i)->calculer_taxe() << " dhs" << endl;
			cout << endl;
		}
	}
	Quartier::~Quartier()
	{
		this->logs->~vector();
		delete this->logs;
		this->logs = nullptr;
	}
}