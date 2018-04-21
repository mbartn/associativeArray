#include "sensitive.h"


sensitive::sensitive()
{
    this->head = NULL;
}


assocTab::node* sensitive::find_buf(node* buf, const char* key)
{
    buf = head;
    while(buf && strcmp(key, buf->key))
    {
        buf = buf->next;
    }
    return buf;
}
