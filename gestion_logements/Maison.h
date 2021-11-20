#pragma once
#include "Logement.h"
namespace loge {
    class Maison :
        public Logement
    {
    private:
        int surface_terrain;
    public:
        Maison(string adresse, int surface_habital, int nombre_pieces, double taux_imposition,int surface_terrain);
        void afficher()const override;
        double calculer_taxe()const override;
    };
}

