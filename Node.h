//
// Created by Jairo Riaño on 6/09/24.
//

#ifndef LKPROJECT_NODE_H
#define LKPROJECT_NODE_H
#include <cstdlib>

template <class T> class LinkedList;

template <class T>
class Node {
    friend class LinkedList<T>;
public:
    Node() {}

    explicit Node(T *info) : info(info) {Node<T>::next = NULL;}

private:
    T *info;
    Node<T> *next;
};


#endif //LKPROJECT_NODE_H
