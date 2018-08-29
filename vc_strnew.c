//
//  vc_strnew.c
//
//  Created by LIUNAN YIN on 2018/8/29.
//  Copyright © 2018年 LIUNAN YIN. All rights reserved.
//

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

char *vc_strnew(size_t size)
{
    char *str;
    if (size == 0)
    {
        return NULL;
    }
    else
    {
        str = (char *)malloc((4) * sizeof(char));
        str[4] = '\0';

        size_t i;
        i = 0;

        while (i < size + 1)
        {
            ((char *)str)[i] = '\0';
            i++;
        }

        return str;
    }
    return NULL;
}