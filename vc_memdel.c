//
//  vc_memdel.c
//
//  Created by LIUNAN YIN on 2018/8/29.
//  Copyright © 2018年 LIUNAN YIN. All rights reserved.
//

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void vc_memdel(void **ap)
{
    free(ap);
    ap[0] = '\0';
}