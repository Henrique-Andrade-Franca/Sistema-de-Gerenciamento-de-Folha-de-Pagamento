#pragma once
#include "Funcionario.h"

class Gerente : public Funcionario{
    private:
        string areaDeSupervisao;

    public:
        Gerente();

        void setDesignacao();

        void setAreaSupervisao(string str);
        string getAreaSupervisao();
};