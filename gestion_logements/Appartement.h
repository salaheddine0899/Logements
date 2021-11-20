#pragma once
#include "Logement.h"
namespace loge {
    class Appartement :
        public Logement
    {
    private:
        int num_etage;
    public:
        Appartement(string adresse, int surface_habital, int nombre_pieces, double taux_imposition, int num_etage);
        double calculer_taxe()const override;
        void afficher()const override;
    };
}

