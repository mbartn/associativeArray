#include "associativeTab.h"

assocTab::~assocTab()
{
  clear();
}


assocTab::node::node(const char* k)
{
    next = NULL;
    key = new char[strlen(k) + 1];
    strcpy (key, k);
}

assocTab::node::node(const assocTab::node& element)
{
    cout << "KONSTR KOPIUJACY " << endl;
    if (element.key == NULL)
        key = NULL;
    else
    {
        key = new char[strlen(element.key) + 1];
        strcpy (key, element.key);
    }
    value = element.value;
}

assocTab::node::~node()
{
    delete []key;
}



void assocTab::insert(const char* key, int v)
{
    node* nowy = new node(key);
    nowy->next = head;
    head = nowy;
    nowy->value = v;
}


assocTab::node* assocTab::find(const char* key)
{
    node* buf;
    buf = head;

    buf = find_buf(buf, key);
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


void assocTab::displayAll()
{
    node* buf;
    buf = head;
    while(buf)
    {
        cout << "Klucz: " << buf->key << " wartosc: " << buf->value << endl;
        buf = buf->next;
    }
}

void assocTab::clear()
{
    node* buf;
    while(head)
    {
        buf = head -> next;
        delete head;
        head = buf;
    }
}



void assocTab::swap (assocTab& element)
{
  node *t = head;
  head = element.head;
  element.head = t;
}


assocTab& assocTab::operator =(const assocTab& element)
{
    if (&element == this)
        return *this;
    assocTab t (element);
    swap (t);
    return *this;
}

int& assocTab::operator [](const char* k)
{
    node *c = find(k);
    if (!c)
    {
      insert(k, 0);
      c = head;
    };
    return c->value;
}
