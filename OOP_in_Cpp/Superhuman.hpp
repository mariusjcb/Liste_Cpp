//
//  Superhuman.hpp
//  OOP_in_Cpp
//
//  Created by Marius Ilie on 13/05/17.
//  Copyright © 2017 Marius Ilie. All rights reserved.
//

#ifndef Superhuman_hpp
#define Superhuman_hpp

#include "Human.hpp"

class SuperHuman: public Human
{
    int dimensiune_nas;
    
public:
    SuperHuman(string name, int age, int dim_nas);
    int getNas();
};

#endif /* Superhuman_hpp */
