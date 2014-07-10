#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Node.h"

class LinkedList {
    public:
        LinkedList();
        LinkedList(int length);

        ~LinkedList();

        void insert(Node* node, int value);
        
        Node* get_head();
        int get_length();

        Node* get_node(int position);
    private:
        Node* m_head;
        int m_length;
};

#endif
