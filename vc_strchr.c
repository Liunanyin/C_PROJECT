//
//  vc_strcat.c
//
//  Created by LIUNAN YIN on 2018/8/29.
//  Copyright © 2018年 LIUNAN YIN. All rights reserved.
//

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

char *vc_strchr(char *str, int c)
{
    int i;
    i = 0;
    while (*(str + i))
    {
        if(*(str + i) == c) return (str + i);       
        i++;
    }
    return NULL;
}
