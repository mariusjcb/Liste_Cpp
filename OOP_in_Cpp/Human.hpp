//
//  Human.hpp
//  OOP_in_Cpp
//
//  Created by Marius Ilie on 13/05/17.
//  Copyright © 2017 Marius Ilie. All rights reserved.
//

#ifndef Human_hpp
#define Human_hpp

#include <iostream>
#include <cstring>
using namespace std;

#include "Helper.hpp"

class Human
{
    string name;
    int age;
    double d_age;
    
public:
    Human(string name, int age);
    
    string getName();
    int getAge();
};

#endif /* Human_hpp */
