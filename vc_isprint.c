//
//  vc_isprint.c
//
//  Created by LIUNAN YIN on 2018/8/29.
//  Copyright © 2018年 LIUNAN YIN. All rights reserved.
//

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int vc_isprint(char *str)
{
  int i;

  i = 0;
  while (str[i])
    if (!(str[i] >= ' ' && str[i] <= '~'))
      return 0;
  return 1;
}