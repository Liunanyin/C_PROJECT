//
//  vc_bzeor.c
//
//  Created by LIUNAN YIN on 2018/8/29.
//  Copyright © 2018年 LIUNAN YIN. All rights reserved.
//

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void vc_bzero(char *s, int n)
{
    int i;
    i = 0;
    for (i = 0; i < n; ++i)
    {
        s[i] = 0;
    }
}
