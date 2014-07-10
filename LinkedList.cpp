#include "LinkedList.h"
#include <cstdlib>

LinkedList::LinkedList() :
    m_head(NULL),
    m_length(0)
{

}

LinkedList::LinkedList(int length) :
    m_head(NULL),
    m_length(0)
{
    if (length > 1) {
        m_head = new Node;
        m_length++;
        for (int i = 1; i < length; i++) {
            Node* temp = new Node;
            temp->set_next(m_head);

            m_head = temp;
            m_length++;
        } 
    }
}

LinkedList::~LinkedList() {
    Node* itr = m_head;

    while (itr != NULL) {
        Node* delete_me = itr;
        itr = itr->get_next();
        delete delete_me;
    }
}

void LinkedList::insert(Node* node, int value) {
    Node* temp = new Node;
    temp->set_next(m_head);

    m_head = temp;
    m_length++;
}

Node* LinkedList::get_head() {
    return m_head;
}

int LinkedList::get_length() {
    return m_length;
}

Node* LinkedList::get_node(int position) {
    Node* itr = m_head;

    for (int i = 0; i < position; i++) {
        // Return NULL if position is out-of-bounds.
        if (position >= m_length) {
            return NULL;
        } else {
            itr = itr->get_next();
        }
    }
    return itr;
}
