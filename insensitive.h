#ifndef insensitive_H
#define insensitive_H

#include "associativeTab.h"

class insensitive: public assocTab
{
public:
    insensitive();
    node* find_buf(node*, const char*);
};


#endif
