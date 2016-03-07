//
// Created by Ferdinand Forgaard on 05.03.2016.
//

#include "Node.h"

template <class T>
Node<T>::Node() {
    this->next = nullptr;
    this->previous = nullptr;
}

template <class T>
Node<T>::Node(T el) {
    element = el;
    this->next = nullptr;
    this->previous = nullptr;
}

template <class T>
Node<T>::Node(T el, Node *next, Node *previous) {
    element = el;
    this->next = next;
    this->previous = previous;
}

// GET ELEMENT
template <class T>
T Node<T>::getElement() const {
    return element;
}

// SET ELEMENT
template <class T>
void Node<T>::setElement(T el) {
    element = el;
}

// GET NEXT
template <class T>
Node<T>* Node<T>::getNext() const {
    return next;
}

// GET PREVIOUS
template <class T>
Node<T>* Node<T>::getPrevious() const {
    return previous;
}

// SET NEXT
template <class T>
void Node<T>::setNext(Node *next) {
    this->next = next;
}

// SET PREVIOUS
template <class T>
void Node<T>::setPrevious(Node *previous) {
    this->previous = previous;
}