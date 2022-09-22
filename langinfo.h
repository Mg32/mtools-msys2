#ifndef _LANGINFO_H_
#define _LANGINFO_H_

#include <stdlib.h>
#define CODESET 1
typedef int nl_item;

static char *nl_langinfo(nl_item item)
{
    static char empty[8] = "";
    static char ascii[8] = "ASCII";
    static char utf8[8] = "UTF-8";
    if (item == CODESET)
    {
        return (MB_CUR_MAX == 1) ? ascii : utf8;
    }
    return empty;
}

#endif
