#include "ghidra_types.h"

extern ulonglong func_00110710(uint param_1,uint param_2);
extern int func_0048F4E4(undefined4 param_1,uint param_2,float *param_3,uint param_4,float fparam_0, float fparam_1);

// USA 0048F7D4 <- EU 0048F7AC (Ghidra, non-matching)

void func_0048F7D4(uint *param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  
  uVar5 = 0;
  if (-1 < (int)param_1[0x3f]) {
    uVar5 = func_0048F4E4(param_1,param_2,(float *)(param_1 + 0x46),param_1[0x3f],
                          ALBW_AS_F32(param_1[0x3a]),ALBW_AS_F32(param_1[0x3c]));
  }
  if (-1 < (int)param_1[0x40]) {
    uVar1 = func_0048F4E4(param_1,param_2,(float *)(param_1 + 0x48),param_1[0x40],
                          ALBW_AS_F32(param_1[0x3b]),ALBW_AS_F32(param_1[0x3d]));
    uVar5 = uVar5 | uVar1;
  }
  uVar3 = param_1[0x3f];
  uVar1 = 0;
  if (-1 < (int)uVar3) {
    uVar1 = 1 << (uVar3 & 0xff) | 1 << (uVar3 + 1 & 0xff) | 1 << (uVar3 + 2 & 0xff) |
            1 << (uVar3 + 3 & 0xff);
  }
  uVar3 = param_1[0x40];
  if (-1 < (int)uVar3) {
    uVar1 = uVar1 | 1 << (uVar3 & 0xff) | 1 << (uVar3 + 1 & 0xff) | 1 << (uVar3 + 2 & 0xff) |
            1 << (uVar3 + 3 & 0xff);
  }
  uVar5 = param_1[0x43] & ~uVar1 | uVar5;
  param_1[0x43] = uVar5;
  *param_1 = uVar5 & ~param_2;
  uVar1 = 0;
  param_1[1] = param_2 & ~uVar5;
  param_1[2] = 0;
  if (0 < (int)param_1[0x3e]) {
    do {
      uVar5 = 1 << (uVar1 & 0xff);
      if ((param_1[0x43] & uVar5) == 0) {
        param_1[uVar1 + 10] = 0;
      }
      else {
        uVar3 = (uint)*(byte *)((int)param_1 + uVar1 + 200);
        if (uVar3 != 0) {
          uVar4 = (uint)*(byte *)((int)param_1 + uVar1 + 0xa8);
          uVar2 = param_1[uVar1 + 10];
          if ((uVar4 == uVar2) ||
             ((uVar4 < uVar2 &&
              (uVar6 = func_00110710(uVar2 - uVar4,uVar3), (int)((ulonglong)uVar6 >> 0x20) == 0))))
          {
            param_1[2] = param_1[2] | uVar5;
          }
        }
        param_1[uVar1 + 10] = param_1[uVar1 + 10] + 1;
      }
      uVar1 = uVar1 + 1;
    } while ((int)uVar1 < (int)param_1[0x3e]);
  }
  if ((param_3 == 0) && ((param_1[3] & 1) != 0)) {
    uVar5 = param_1[3] | 2;
  }
  else {
    uVar5 = param_1[3] & 0xfffffffd;
  }
  param_1[3] = uVar5;
  if ((param_3 == 0) || ((uVar5 & 1) != 0)) {
    uVar5 = uVar5 & 0xfffffffb;
  }
  else {
    uVar5 = uVar5 | 4;
  }
  param_1[3] = uVar5;
  param_1[4] = (int)ALBW_AS_F32(param_1[0x44]);
  param_1[5] = (int)ALBW_AS_F32(param_1[0x45]);
  return;
}

