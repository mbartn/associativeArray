#include "insensitive.h"


assocTab::node* insensitive::find_buf(node* buf, const char* key)
{
    buf = head;
    while(buf && strcasecmp(key, buf->key))
    {
        buf = buf->next;
    }
    return buf;
}

insensitive::insensitive()
{
    this->head = NULL;
}
