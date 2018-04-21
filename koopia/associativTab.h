#ifndef ASSOCIATIVTAB_H
#define ASSOCIATIVTAB_H


#include <iostream>
#include <string.h>
#include "exceptions.h"


using namespace std;

class assocTab
{
public:                     // DO POPRAWY
    class node
    {
        friend class assocTab;
    public:                 //DO POPRAWY
        node(const char*);
        node(const node&);
        ~node();
        node* next;
        char* key;
        int value;
        //node& operator= (const node &);       - po co?
    };
    node* head;
public:
    assocTab();
    void insert(const char*, int);
    void displayAll();
    void clear();
    void swap (assocTab&);
    assocTab& operator =(const assocTab&);
    int& operator [](const char*);
 //   virtual node* find(const char*);
     virtual node* find_buf(node*, const char*);
    node* find(const char* key)
{
    node* buf;
    buf = head;

    buf = find_buf(buf, key);
    /*
    while(buf && strcasecmp(key, buf->key))
    {
        buf = buf->next;
    }*/
    if(buf)
    {
        cout << "znaleziono klucz " << buf->key << " o wartosci " << buf->value << endl;
        return buf;
    }
    else
    {
      return NULL;
    }

}

};

class notSensitive: public assocTab
{
public:
    /*
node* find(const char* key)
{
    node* buf;
    buf = head;

    buf = find_buf(buf, key);

    while(buf && strcasecmp(key, buf->key))
    {
        buf = buf->next;
    }
    if(buf)
    {
        cout << "znaleziono klucz " << buf->key << " o wartosci " << buf->value << endl;
        return buf;
    }
    else
    {
      return NULL;
    }

}
*/
node* find_buf(node* buf, const char* key)
{
    buf = head;
    while(buf && strcasecmp(key, buf->key))
    {
        buf = buf->next;
    }
    return buf;
}


};

class sensitive: public assocTab
{
public:
/*
node* find(const char* key)
{
    node* buf;
    buf = head;

    buf = find_buf(buf, key);
    /*
    while(buf && strcasecmp(key, buf->key))
    {
        buf = buf->next;
    }
    if(buf)
    {
        cout << "znaleziono klucz " << buf->key << " o wartosci " << buf->value << endl;
        return buf;
    }
    else
    {
      return NULL;
    }

}
*/

node* find_buf(node* buf, const char* key)
{
    buf = head;
    while(buf && strcmp(key, buf->key))
    {
        buf = buf->next;
    }
    return buf;
}

};


#endif // ASSOCIATIVTAB_H
