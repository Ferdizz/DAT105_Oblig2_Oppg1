//
// Created by Ferdinand Forgaard on 05.03.2016.
//

#ifndef OBLIG2_OPPG1_V2_DOUBLYLINKEDLIST_H
#define OBLIG2_OPPG1_V2_DOUBLYLINKEDLIST_H


#include <iostream>
#include "ListADT.h"

template <class T>
class DoublyLinkedList : public ListADT<T>{

protected:
    Node<T> *head;
    int numberOfElements;

public:
    /* Initialize values as needed */
    DoublyLinkedList();

    /* Add a node with the given value to the end of the list */
    void add( T el );

    /* Remove the first element in the list
    * and return a pointer to the element */
    Node<T>* removeFirst();

    /* Remove the last element in the list
    * and return a pointer to the element */
    Node<T>* removeLast();

    /* Return a pointer to the first occurrence of the given
    * value in the list */
    Node<T>* find( T el ) const;

    /* Remove the first occurrence of the given value in the list
    * and return a pointer to the element */
    Node<T>* remove( T el );

    /* return a pointer to the first node in the list */
    Node<T>* first() const;

    /* Return a pointer to the last node in the list */
    Node<T>* last() const;

    /* Return true if the given value is found in the list,
    * false otherwise */
    bool contains( T el ) const;

    /* Return true if the list is empty, false otherwise */
    bool isEmpty() const;

    /* Return the number of elements in the list */
    int size() const;

    std::string toString() const;

};


#endif //OBLIG2_OPPG1_V2_DOUBLYLINKEDLIST_H
