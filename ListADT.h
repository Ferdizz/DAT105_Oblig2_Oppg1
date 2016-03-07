//
// Created by Ferdinand Forgaard on 05.03.2016.
//

#ifndef OBLIG2_OPPG1_V2_LISTADT_H
#define OBLIG2_OPPG1_V2_LISTADT_H

#include "Node.h"

template <class T>
class ListADT{

public:

    /* Remove the first element in the list
    * and return a pointer to the element */
    virtual Node<T>* removeFirst() = 0;

    /* Remove the last element in the list
    * and return a pointer to the element */
    virtual Node<T>* removeLast() = 0;

    /* Return a pointer to the first occurrence
     * of the given * value in the list */
    virtual Node<T>* find(T el) const = 0;

    /* Remove the first occurrence of the given value
     * in the list * and return a pointer to the element */
    virtual Node<T>* remove(T el) = 0;

    /* return a pointer to the first element in the list */
    virtual Node<T>* first() const = 0;

    /* Return a pointer to the last element in the list */
    virtual Node<T>* last() const = 0;

    /* Return true if the given value is found in the list,
     * false otherwise */
    virtual bool contains(T el) const = 0;

    /* Return true if the list is empty, false otherwise */
    virtual bool isEmpty() const = 0;

    /* Return the number of elements in the list */
    virtual int size() const = 0;

};

#endif //OBLIG2_OPPG1_V2_LISTADT_H
