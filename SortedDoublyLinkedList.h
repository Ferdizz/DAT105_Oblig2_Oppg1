//
// Created by Ferdinand Forgaard on 07.03.2016.
//

#ifndef OBLIG2_OPPG1_V2_SORTEDDOUBLYLINKEDLIST_H
#define OBLIG2_OPPG1_V2_SORTEDDOUBLYLINKEDLIST_H

#include "DoublyLinkedList.h"

using namespace std;

template <class T>
class SortedDoublyLinkedList : public DoublyLinkedList<T> {

public:

    /* Add a node with the given value in a sorted order */
    void add( T el );

//    template <>
//    void add<string>(string s);


};

template <>
class SortedDoublyLinkedList<string> : public DoublyLinkedList<string> {

    void add(string s);

};


#endif //OBLIG2_OPPG1_V2_SORTEDDOUBLYLINKEDLIST_H
