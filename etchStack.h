//
//  etchStack.h - A header file for a stack implemented in linked lists.
//  Stack Calculator
//
//  Created by Hesham Saleh on 4/25/16.
//  Copyright (c) 2016 Hesham Saleh. All rights reserved.
//

#include<iostream>

using namespace std;

struct node {
    char data;
    node *nxt;
};

struct myStack {
    node *head;
    myStack() {
        head = NULL;
    }
    void push(char x) {
        node *n = new node();
        n->data = x;
        n->nxt = head;
        head = n;
    }
    
    char pop(int *empty) {
        if (head == NULL) {
            *empty = 1;
            return 0;
        }
        *empty = 0;
        node *tmp = head;
        head = head->nxt;
        char x = tmp->data;
        delete (tmp);
        return x;
    }
    
    char top() {
        if (head == NULL) {
            return 0;
        }
        return head->data;
    }
};
