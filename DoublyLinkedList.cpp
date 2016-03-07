//
// Created by Ferdinand Forgaard on 05.03.2016.
//

#include <iostream>
#include <sstream>
#include "DoublyLinkedList.h"

using namespace std;

template <class T>
DoublyLinkedList<T>::DoublyLinkedList() {
    head = nullptr;
    numberOfElements = 0;
}

template <class T>
void DoublyLinkedList<T>::add(T el) {

    Node<T>* node = new Node<T>(el);
    node->setPrevious(last());

    if(numberOfElements == 0){
        head = node;
    }else{
        node->getPrevious()->setNext(node);
    }

    numberOfElements++;
    cout << "Node with data: " << node->getElement() << ", added." << endl;

}

template <class T>
Node<T>* DoublyLinkedList<T>::removeFirst() {
    if(numberOfElements > 0){

        Node<T>* firstNode = first();

        if(numberOfElements != 1){
            firstNode->getNext()->setPrevious(nullptr);
        }

        head = firstNode->getNext();
        numberOfElements--;
        cout << "Node with data: " << firstNode->getElement() << ", deleted." << endl;

        return firstNode;

    }else{
        return nullptr;
    }
}

template <class T>
Node<T>* DoublyLinkedList<T>::removeLast() {
    if(numberOfElements > 0){

        Node<T>* lastNode = last();

        if(numberOfElements == 1){
            head = nullptr;
        }else{
            lastNode->getPrevious()->setNext(nullptr);
        }

        numberOfElements--;
        cout << "Node with data: " << lastNode->getElement() << ", deleted." << endl;

        return lastNode;

    }else{
        return nullptr;
    }
}

template <class T>
Node<T>* DoublyLinkedList<T>::find(T el) const {


    if(numberOfElements > 0){
        Node<T>* node = first();
        do{
            if(node->getElement() == el){
                return node;
            }else{
                node = node->getNext();
            }
        }while(node != nullptr);
    }

    return nullptr;

}

template <class T>
Node<T>* DoublyLinkedList<T>::remove(T el) {

    Node<T>* node = find(el);

    if(node != nullptr){

        if(numberOfElements == 1){

            head = nullptr;

        }else if(node == first()){

            return removeFirst();

        }else if(node == last()){

            return removeLast();

        }else{

            node->getPrevious()->setNext(node->getNext());
            node->getNext()->setPrevious(node->getPrevious());

        }

        numberOfElements--;
        cout << "Node with data: " << node->getElement() << ", deleted." << endl;

    }

    return node;

}

template <class T>
Node<T>* DoublyLinkedList<T>::first() const {
    return head;
}

template <class T>
Node<T>* DoublyLinkedList<T>::last() const {

    if(numberOfElements == 0){
        return nullptr;
    }else if(numberOfElements == 1){
        return first();
    }else{

        Node<T>* node = first();

        while(node->getNext() != nullptr){
            node = node->getNext();
        }

        return node;

    }
}

template <class T>
bool DoublyLinkedList<T>::contains(T el) const {
    return find(el) == nullptr ? false : true;
}

template <class T>
bool DoublyLinkedList<T>::isEmpty() const {
    return numberOfElements == 0 ? true : false;
}

template <class T>
int DoublyLinkedList<T>::size() const {
    return numberOfElements;
}

template<class T>
std::string DoublyLinkedList<T>::toString() const {
    Node<T>* node = first();
    ostringstream s;

    while(node != nullptr){
        s << node->getElement() << ", ";
        node = node->getNext();
    }

    return s.str();
}
