//
// Created by Maikol Guzman on 8/2/20.
//

#include <iostream>
#include "Professor.h"
#include "Administrative.h"
#include "University.h"


int main() {

    //-----------------------TEMPLATE---------------------------------

    University<Professor> professorList= University<Professor>();
    University<Administrative> administrativeList= University<Administrative>();

    //-----------------------------------------------------------------
    Professor prof= Professor("Mario", "Ruiz", 25685692, 300000, 0.05);
    Administrative adm1 = Administrative ("Carlos", "Lopez", 35698720 , 500000);

    //------------------METODOS DE TEMPLATE------------------------------

    professorList.push_back(prof);
    administrativeList.push_back(adm1);

    return 0;
}
