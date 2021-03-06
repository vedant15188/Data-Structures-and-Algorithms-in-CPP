//
// Created by VEDANT KASHYAP on 12/31/2017.
//

#ifndef DATA_STRUCTURES_AND_ALGORITHMS_LINKEDLIST_H
#define DATA_STRUCTURES_AND_ALGORITHMS_LINKEDLIST_H

#endif //DATA_STRUCTURES_AND_ALGORITHMS_LINKEDLIST_H

struct LL_node {
    int data;
    struct LL_node *next;
};

void Single_LinkedList();

void printList(struct LL_node *LL);

void Append(struct LL_node **LL, int val);

void Insert(struct LL_node **LL, int index, int val);

void Delete(struct LL_node **LL, int val);

void Swap(struct LL_node **LL, int val1, int val2);

bool Search(struct LL_node **LL, int val);

void RotateFW(struct LL_node **LL, int k);

void RotateBW(struct LL_node **LL, int k);