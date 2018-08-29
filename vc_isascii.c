//
//  vc_isascii.c
//
//  Created by LIUNAN YIN on 2018/8/29.
//  Copyright © 2018年 LIUNAN YIN. All rights reserved.
//

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int vc_isascii(int c)
{
  int result = 0;

  if (c >= 0 && c <= 127)
  {
    result = 1;
  }

  return result;
}
