//
//  vc_strrchr.c
//
//  Created by LIUNAN YIN on 2018/8/29.
//  Copyright © 2018年 LIUNAN YIN. All rights reserved.
//

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

char *vc_strrchr(char *str, int c)
{
    char *chr;

    chr = '\0';
    if (*str == (char)c)
    {
        chr = (char *)str;
    }
    while (*str)
    {
        if (*str == c)
        {
            chr = (char *)str;
        }
        str++;
    }
    if (c == '\0')
    {
        chr = (char *)str;
    }        
    return (chr);
}
