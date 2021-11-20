#pragma once
#include "Logement.h"
#include <vector>
#include<iostream>
using namespace std;
namespace loge {
	class Quartier
	{
	private:
		vector <Logement*>* logs;
	public:
		Quartier();
		void ajouter(Logement& l);
		void info()const;
		~Quartier();

	};
}
