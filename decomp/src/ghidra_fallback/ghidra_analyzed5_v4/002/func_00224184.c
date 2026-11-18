#include "ghidra_types.h"

extern ulonglong func_00110710(uint param_1,uint param_2);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00227500(int param_1,int param_2);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern int func_0065E774(undefined4 *param_1,undefined1 param_2);
extern float DAT_002242fc;
extern int *DAT_00224300;

// USA 00224184 <- EU 00224184 (Ghidra, non-matching)
// GLOBAL DAT_002242fc float
// GLOBAL DAT_00224300 int *

undefined4 func_00224184(int param_1)

{
  int iVar1;
  uint *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  bool bVar5;
  undefined8 uVar6;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define aiStack_70 ((int *)(albw_frame + 0x0))
  uVar4 = 1;
  iVar1 = *(int *)(*(int *)(param_1 + 0x68c) + 0x14);
  puVar3 = (undefined4 *)(param_1 + 0x468);
  if (*(char *)(iVar1 + 0x1c) == '\0') {
    if (*(float *)(iVar1 + 0x10) < DAT_002242fc) {
      if (*(float *)(iVar1 + 8) <= DAT_002242fc) goto LAB_002241f0;
    }
    else if (*(float *)(iVar1 + 8) == *(float *)(iVar1 + 0x14)) {
LAB_002241f0:
      if (*(int *)(param_1 + 0x6d4) < 1) {
        *(undefined4 *)(param_1 + 0x6d4) = 0x14;
        if (*(char *)(param_1 + 0x73d) == '\x02') {
          func_0065E774(puVar3,0x11);
        }
        else {
          func_0065E774(puVar3,10);
          puVar2 = (uint *)func_002C11E8(aiStack_70,1,0,0);
          func_0016898C(*(int *)(param_1 + 0x690),puVar2);
          *(undefined1 *)(param_1 + 0x74c) = 1;
        }
      }
      else {
        func_0065E774(puVar3,7);
      }
      goto LAB_002242b0;
    }
  }
  if (((*(int *)(param_1 + 0x468) < 0x1e) &&
      (uVar6 = func_00110710(*(uint *)(*DAT_00224300 + 0x10),6),
      (int)((ulonglong)uVar6 >> 0x20) == 0)) &&
     (bVar5 = *(char *)(param_1 + 0x74b) == '\0', uVar4 = (uint)bVar5, bVar5)) {
    uVar4 = 1;
  }
LAB_002242b0:
  bVar5 = *(int *)(param_1 + 0x6d4) == 0;
  if (*(int *)(param_1 + 0x6d4) < 1) {
    bVar5 = *(char *)(param_1 + 0x73d) == '\x02';
  }
  if (!bVar5) {
    bVar5 = (int)*(char *)(param_1 + 0x74b) == uVar4;
  }
  if (bVar5) {
    return 0;
  }
  return func_00227500(param_1,uVar4);
}

