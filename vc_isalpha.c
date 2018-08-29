//
//  vc_isalpha.c
//
//  Created by LIUNAN YIN on 2018/8/29.
//  Copyright © 2018年 LIUNAN YIN. All rights reserved.
//

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int vc_isalpha(char *str)
{
  int i;

  i = 0;
  while (str[i])
  {
    if (!((str[i] >= 'A' && str[i] <= 'Z') \
          || (str[i] >= 'a' && str[i] <= 'z')))
      return 0;
    i++;
  }
  return 1;
}
