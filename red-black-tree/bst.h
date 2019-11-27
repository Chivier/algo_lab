//
// Created by chivier on 10/17/19.
//

#ifndef RED_BLACK_TREE_BST_H
#define RED_BLACK_TREE_BST_H

#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <vector>

// * A single node in the tree
// * Only keep the main key - val
template <typename T>
class Tree_Node_Type {
private:
    T val;
    Tree_Node_Type<T> *lch;
    Tree_Node_Type<T> *rch;

public:
    void Tree_Node_Type() {
        val = 0;
        lch = rch = NULL;
    }

    T get_val() { return val; }
    void set_val(T x) { val = x; }

    //
    void create_lch() { lch = new Tree_Node_Type<T>; }
    Tree_Node_Type<T> get_lch() { return lch; }
    void delete_lch() { delete lch; }

    void create_rch() { rch = new Tree_Node_Type<T>; }
    Tree_Node_Type<T> get_rch() { return rch; }
    void delete_rch() { delete rch; }
};

// * BST (Binary Search Tree)
template <typename T>
class BST_Type {
private:
    int size;
    Tree_Node_Type<T> *root;

public:
    // Create empty tree.
    void BST_Type() {
        size = 0;
        root = NULL;
    }

    T insertion(T x);
    T deletion(T x);
    T find_min();
    T find_max();
    T fund_succ(T x);
    T find_prev(T x);
    bool find(T x);
};

void bst_insertion(Tree_Node_Type) template <typename T>
T BST_Type<T>::insertion(T x) {
}
#endif //RED_BLACK_TREE_BST_H
