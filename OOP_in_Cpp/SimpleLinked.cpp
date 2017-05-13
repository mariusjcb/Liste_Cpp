//
//  SimpleLinked.cpp
//  OOP_in_Cpp
//
//  Created by Marius Ilie on 13/05/17.
//  Copyright © 2017 Marius Ilie. All rights reserved.
//

#include "SimpleLinked.hpp"

Node::Node(int info, Node *back, Node *next) {
    this->info = info;
    this->back = back;
    this->next = next;
}

int Node::getInfo() {
    return this->info;
}

Node* Node::getNext() {
    return this->next;
}

Node* Node::getBack() {
    return this->back;
}

void Node::setBack(Node *back) {
    this->back = back;
}
