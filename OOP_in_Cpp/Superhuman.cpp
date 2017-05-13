//
//  Superhuman.cpp
//  OOP_in_Cpp
//
//  Created by Marius Ilie on 13/05/17.
//  Copyright © 2017 Marius Ilie. All rights reserved.
//

#include "Superhuman.hpp"

SuperHuman::SuperHuman(string name, int age, int dim_nas) : Human(name, age) {
    this->dimensiune_nas = dim_nas;
}

int SuperHuman::getNas(){
    return dimensiune_nas;
}
