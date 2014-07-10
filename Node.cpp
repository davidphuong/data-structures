#include "Node.h"
#include <cstdlib>

Node::Node() :
    m_value(0),
    m_next(NULL)
{

}

Node::Node(int value, Node* next) :
    m_value(value),
    m_next(next)
{

}

int Node::get_value() {
    return m_value;
}

Node* Node::get_next() {
    return m_next;
}

void Node::set_value(int value) {
    m_value = value;
}

Node* Node::set_next(Node* next) {
    m_next = next;
}
