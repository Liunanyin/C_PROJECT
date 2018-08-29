//
//  vc_strdel.c
//
//  Created by LIUNAN YIN on 2018/8/29.
//  Copyright © 2018年 LIUNAN YIN. All rights reserved.
//

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void vc_strdel(char **as)
{
    if(as && *as){
        free(as);
        as[0] = '\0';
    }
}

