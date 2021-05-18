// Copyright 2020-2020 The TZIOT Authors. All rights reserved.
// 内部看门狗驱动接口
// Authors: jdh99 <jdh821@163.com>

#ifndef TZIWDG_H
#define TZIWDG_H

#include <stdint.h>

// TZIWdgInit 初始化内部看门狗
// timeout超时时间.单位:s
// 注意:超时时间不允许为0,如果设置为0,则内部看门狗失效
// 本函数需要驱动定义
void TZIWdgInit(int timeout);

// TZIWdgFeed 喂狗
// 本函数需要驱动定义
void TZIWdgFeed(void);

#endif
