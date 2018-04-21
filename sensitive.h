#ifndef SENSITIVE_H
#define SENSITIVE_H

#include "associativeTab.h"

class sensitive: public assocTab
{
public:
    sensitive();
    node* find_buf(node*, const char*);
};

#endif
