#include <iostream>
#include "Node.cpp"
#include "DoublyLinkedList.cpp"
#include "SortedDoublyLinkedList.cpp"

using namespace std;

void nodeTest();
void listTest();

int main() {

    nodeTest();
    listTest();

    return 0;
}

void nodeTest(){
    cout << "\nTesting Node:\n-------------" << endl;
    Node<int> n1(5);
    Node<int> n2(10);

    n1.setNext(&n2);
    n2.setPrevious(&n1);

    cout << n1.getElement() << endl;
    cout << n1.getNext()->getElement() << endl;

    n1.setElement(0);
    cout << n2.getPrevious()->getElement() << endl;

}

void listTest(){
    cout << "\nTesting List:\n-------------" << endl;
//    DoublyLinkedList<int> list;
    SortedDoublyLinkedList<int> list;

    cout << list.contains(9) << endl;
    cout << list.isEmpty() << endl;
    cout << list.size() << endl;

    list.add(9);
    list.add(8);
    list.add(7);
    list.add(10);
    list.add(9);
    list.add(1);

    cout << list.contains(9) << endl;
    cout << list.isEmpty() << endl;
    cout << list.size() << endl;

    cout << "List: " << list.toString() << endl;

    list.remove(9);
    list.removeLast();
    list.removeFirst();

    cout << list.contains(9) << endl;
    cout << list.isEmpty() << endl;
    cout << list.size() << endl;
}