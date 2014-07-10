#ifndef NODE_H
#define NODE_H

class Node {
    public:
        Node();
        Node(int value, Node* next);

        int get_value();
        Node* get_next();

        void set_value(int value);
        Node* set_next(Node* next);

    private:
        int m_value;
        Node* m_next;
};

#endif
