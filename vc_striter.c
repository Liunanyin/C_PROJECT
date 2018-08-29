//
//  vc_striter.c
//
//  Created by LIUNAN YIN on 2018/8/29.
//  Copyright © 2018年 LIUNAN YIN. All rights reserved.
//


#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void vc_striter(char *s, void (*f)(char *))
{
    int i;
    i = 0;
    while(*(s + i))
    {
        f(s + i);
        i++;
    }
}