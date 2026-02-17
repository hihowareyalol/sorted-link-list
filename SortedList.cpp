
#include "SortedList.h"


template<class T>
SortedList<T>::SortedList() {

}

template<class T>
void SortedList<T>::MakeEmpty() {

}

template<class T>
bool SortedList<T>::IsFull() const {
    return false;
}

template<class T>
int SortedList<T>::GetLength() const {
    return length;
}

template<class T>
bool SortedList<T>::Contains(T someItem) {

    int first = 0;
    int last = length;
    int middle = (first + last) / 2;
    NodeT currN = head;

    for (int i = 0; i < middle; i++)
    {
        currN = currN->next;
    }


    return false;
}

template<class T>
void SortedList<T>::AddItem(T item) {

    //handles empty case
    if (head == nullptr)
    {
        NodeT *newNode = new NodeT;
        newNode->info = item;
        newNode->next = nullptr;
        length++;
        return;
    }

    NodeT *prevN;
    NodeT *currN = head;
    while (currN != nullptr)
    {
        if (item < currN->info)
        {
            newNode->next = currN;
            if (prevN != nullptr)
            {
                prevN->next = newNode;
            }
            else
            {
                head = newNode;
            }
            length++;

        }

        prevN = currN;
        currN = currN->next;
    }


}

template<class T>
void SortedList<T>::DeleteItem(T item) {

    NodeT *prevN = nullptr;
    NodeT *currN = head;

    while (currN != nullptr)
    {
        if (item == currN->info)
        {
            if (prevN != nullptr) // middle case
            {
                prevN->next = currN->next;
            } else //prevN is nullptr, this is a beginning case
            {
                head = currN->next;
            }
            prevN->next = currN->next;
            delete currN;
            length--;
            return;
        }
        prevN = currN;
        currN = currN->next;
    }
}

template<class T>
void SortedList<T>::ResetIterator() {

}

template<class T>
int SortedList<T>::GetNextItem() {
    if (currentPos >= length) {
        throw "Out of bounds";
    }

    return T();
}

