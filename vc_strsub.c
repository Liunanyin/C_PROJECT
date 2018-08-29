//
//  vc_strsub.c
//
//  Created by LIUNAN YIN on 2018/8/29.
//  Copyright © 2018年 LIUNAN YIN. All rights reserved.
//

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

char *vc_strsub(char const *s, size_t start, size_t len)
{
    char *result = malloc(sizeof(char)*(len + 1));
    int i;
    for(i = 0; i < len; i++)
    {
        result[i] = s[start + i];
    }
    result[len] = 0;
    return result;
}