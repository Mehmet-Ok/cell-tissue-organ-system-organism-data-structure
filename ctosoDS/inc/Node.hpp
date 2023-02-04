#ifndef NODE_HPP
#define NODE_HPP

#include "Doku.hpp"
using namespace std;

class Node{
    public:
        Doku* veri;
        Node* left;
        Node* right;

        Node(Doku *item);
        ~Node();
};

#endif