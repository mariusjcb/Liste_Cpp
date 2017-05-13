//
//  SimpleLinked.hpp
//  OOP_in_Cpp
//
//  Created by Marius Ilie on 13/05/17.
//  Copyright © 2017 Marius Ilie. All rights reserved.
//

#ifndef SimpleLinked_hpp
#define SimpleLinked_hpp

#include <iostream>
#include <cstring>
using namespace std;

class Node {
    int info;
    Node *next;
    Node *back;
    
public:
    Node(int info, Node *back = NULL, Node *next = NULL);
    
    int getInfo();
    Node* getNext();
    Node* getBack();
    
    void setBack(Node *back);
};

#endif /* SimpleLinked_hpp */
