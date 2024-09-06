//
// Created by Jairo Riaño on 6/09/24.
//

#include "LinkedList.h"

template<class T>
LinkedList<T>::LinkedList() {
    LinkedList<T>::head = NULL;
}

template<class T>
T *LinkedList<T>::getLast() {
    return nullptr;
}

template<class T>
T *LinkedList<T>::getFirst() {
    return nullptr;
}

template<class T>
T *LinkedList<T>::getObject() {
    return nullptr;
}

template<class T>
int LinkedList<T>::getSize() {
    return 0;
}

template<class T>
T *LinkedList<T>::deleteNode(Node<T> *) {
    return nullptr;
}

template<class T>
std::vector<T *> LinkedList<T>::getLinkedList() {
    return std::vector<T *>();
}

template<class T>
T *LinkedList<T>::findInfo(int) {
    return nullptr;
}

template<class T>
Node<T> *LinkedList<T>::findNode(int) {
    return nullptr;
}

template<class T>
void LinkedList<T>::addNodeSorted(T *) {

}

template<class T>
void LinkedList<T>::addNodeBeforeTo(Node<T> *, T *) {

}

template<class T>
void LinkedList<T>::addNodeAfterTo(Node<T> *, T *) {

}

template<class T>
void LinkedList<T>::addNodeLast(T *) {

}

template<class T>
void LinkedList<T>::addNodeFirst(T * node) {
    Node<T> *xxxx = new Node<T>( node );

}
/**
 * Responsable Riaño Herrera
 * Método que valida si la lista está vacía
 * @tparam T Parámetro de la clase
 * @return bool
 */
template<class T>
bool LinkedList<T>::isEmpty() {
    return head == NULL;
}

template<class T>
LinkedList<T>::~LinkedList() {

}

