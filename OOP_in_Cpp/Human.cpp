//
//  Human.cpp
//  OOP_in_Cpp
//
//  Created by Marius Ilie on 13/05/17.
//  Copyright © 2017 Marius Ilie. All rights reserved.
//

#include "Human.hpp"

Human::Human(string name, int age) {
    this->name = name;
    this->age = age;
}

string Human::getName() {
    return this->name;
}

int Human::getAge() {
    return this->age;
}
