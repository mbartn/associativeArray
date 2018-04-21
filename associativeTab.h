#ifndef ASSOCIATIVTAB_H
#define ASSOCIATIVTAB_H


#include <iostream>
#include <string.h>


using namespace std;

class assocTab
{
public:
    class node
    {
        friend class assocTab;
    public:
        node(const char*);
        node(const node&);
        ~node();
        node* next;
        char* key;
        int value;
    };
    node* head;
public:
    ~assocTab();
    void insert(const char*, int);
    void displayAll();
    void clear();
    void swap (assocTab&);
    assocTab& operator =(const assocTab&);
    int& operator [](const char*);
    node* find(const char*);
    virtual node* find_buf(node*, const char*){};
};





#endif // ASSOCIATIVTAB_H
