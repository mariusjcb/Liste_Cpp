//
//  main.cpp
//  OOP_in_Cpp
//
//  Created by Marius Ilie on 13/05/17.
//  Copyright © 2017 Marius Ilie. All rights reserved.
//

#include "SimpleLinked.hpp"

int main(int argc, const char * argv[]) {
    int n = 5;
    Node* prim = new Node(n, NULL, NULL);
    
    while(--n) {
        Node* currentNode = new Node(n, NULL, prim);
        prim->setBack(currentNode);
        prim = currentNode;
    }
    
    while(prim->getNext() != NULL) {
        cout << prim->getInfo() << "\n";
        prim = prim->getNext();
    }
    
    while(prim != NULL) {
        cout << prim->getInfo() << "\n";
        prim = prim->getBack();
    }
    
    return 0;
}
