//
// Created by Ferdinand Forgaard on 07.03.2016.
//

#include "SortedDoublyLinkedList.h"

using namespace std;

template <class T>
void SortedDoublyLinkedList<T>::add(T el) {

    Node<T>* node = new Node<T>(el);
    Node<T>* biggerNode = DoublyLinkedList<T>::last();

    if(DoublyLinkedList<T>::isEmpty()){
        DoublyLinkedList<T>::head = node;
    }else{

        while(biggerNode != nullptr && el < biggerNode->getElement()){
            biggerNode = biggerNode->getPrevious();
        }

        if(biggerNode == nullptr){
            node->setNext(DoublyLinkedList<T>::head);
            DoublyLinkedList<T>::head->setPrevious(node);
            DoublyLinkedList<T>::head = node;
        }else{
            node->setNext(biggerNode->getNext());

            if(biggerNode != DoublyLinkedList<T>::last()){
                biggerNode->getNext()->setPrevious(node);
            }

            node->setPrevious(biggerNode);
            biggerNode->setNext(node);
        }

    }

    DoublyLinkedList<T>::numberOfElements++;
    cout << "Node with data: " << node->getElement() << ", added." << endl;

}

void SortedDoublyLinkedList<string>::add(string s) {

    Node<string>* node = new Node<string>(s);
    Node<string>* biggerNode = DoublyLinkedList<string>::last();

    if(DoublyLinkedList<string>::isEmpty()){
        DoublyLinkedList<string>::head = node;
    }else{

        while(biggerNode != nullptr && s.compare(biggerNode->getElement()) < 0){
            biggerNode = biggerNode->getPrevious();
        }

        if(biggerNode == nullptr){
            node->setNext(DoublyLinkedList<string>::head);
            DoublyLinkedList<string>::head->setPrevious(node);
            DoublyLinkedList<string>::head = node;
        }else{
            node->setNext(biggerNode->getNext());

            if(biggerNode != DoublyLinkedList<string>::last()){
                biggerNode->getNext()->setPrevious(node);
            }

            node->setPrevious(biggerNode);
            biggerNode->setNext(node);
        }

    }

    DoublyLinkedList<string>::numberOfElements++;
    cout << "Node with data: " << node->getElement() << ", added." << endl;

}
