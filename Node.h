//
// Created by Ferdinand Forgaard on 05.03.2016.
//

#ifndef OBLIG2_OPPG1_V2_NODE_H
#define OBLIG2_OPPG1_V2_NODE_H

template <class T>
class Node {

private:
    T element;
    Node* next;
    Node* previous;

public:
    /* Initialize values as needed */
    Node();

    /* Initialize a node with the given values */
    Node(T el);

    /* Initialize a node with the given values */
    Node(T el, Node* next, Node* previous);

    /* Return a pointer to the next node in the list
    * Return NULL if the node is the last in the list */
    Node* getNext() const;

    /* Return a pointer to the previous node in the list
    * Return NULL if the node is the first in the list */
    Node* getPrevious() const;

    /* Return the data contained in the node */
    T getElement() const;

    /* Set the data in the node */
    void setElement(T el);

    /* Set the next node */
    void setNext(Node* next);

    /* Set the previous node */
    void setPrevious(Node* previous);

};

#endif //OBLIG2_OPPG1_V2_NODE_H
