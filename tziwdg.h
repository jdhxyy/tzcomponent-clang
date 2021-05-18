// Copyright 2020-2020 The TZIOT Authors. All rights reserved.
// �ڲ����Ź������ӿ�
// Authors: jdh99 <jdh821@163.com>

#ifndef TZIWDG_H
#define TZIWDG_H

#include <stdint.h>

// TZIWdgInit ��ʼ���ڲ����Ź�
// timeout��ʱʱ��.��λ:s
// ע��:��ʱʱ�䲻����Ϊ0,�������Ϊ0,���ڲ����Ź�ʧЧ
// ��������Ҫ��������
void TZIWdgInit(int timeout);

// TZIWdgFeed ι��
// ��������Ҫ��������
void TZIWdgFeed(void);

#endif
