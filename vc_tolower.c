//
//  vc_tolower.c
//
//  Created by LIUNAN YIN on 2018/8/29.
//  Copyright © 2018年 LIUNAN YIN. All rights reserved.
//

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int vc_tolower(int c)
{
    if (c >= 'A' && c <= 'Z')
    {
        return (c = c + 'a' - 'A');
    }
    else
    {
        return c;
    }
}
