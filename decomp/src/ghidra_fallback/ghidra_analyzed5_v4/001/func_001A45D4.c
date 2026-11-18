#include "ghidra_types.h"

extern int func_002917A4(int param_1,float *param_2,undefined4 param_3,float fparam_0);
extern int func_004FC244(int *param_1,int *param_2,int param_3,undefined4 param_4,int param_5);
extern int DAT_001a46f0;
extern float DAT_001a46f4;
extern int *DAT_001a46f8;

// USA 001A45D4 <- EU 001A45D4 (Ghidra, non-matching)
// GLOBAL DAT_001a46f0 int
// GLOBAL DAT_001a46f4 float
// GLOBAL DAT_001a46f8 int *

uint func_001A45D4(int *param_1,uint param_2,int param_3)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  
  piVar2 = DAT_001a46f8;
  if ((*(char *)((int)param_1 + 0x8fd) == '\x01') && (0 < *(short *)(DAT_001a46f0 + (int)param_1)))
  {
    if (param_2 != 3) {
      uVar3 = param_2 & 0xff;
      bVar6 = 0x1d < uVar3;
      bVar5 = uVar3 != 0x1e;
      if (bVar5) {
        uVar3 = uVar3 - 0xe;
        bVar6 = 2 < uVar3;
      }
      if (bVar6 && (bVar5 && uVar3 != 3)) goto LAB_001a46a8;
      cVar1 = (char)param_1[0x230];
      bVar6 = cVar1 == '\x06';
      if (bVar6) {
        cVar1 = *(char *)(param_3 + 0x24);
      }
      if (!bVar6 || cVar1 != '\x05') {
        return 0xe;
      }
      func_002917A4(*DAT_001a46f8,param_1 + 0xf4,0,DAT_001a46f4);
      func_004FC244(param_1,(int *)param_1[0x10f],0xc,1,1);
      iVar4 = **(int **)(*piVar2 + 0x24) - (param_1[0xfa] + -0x80000000);
      if (iVar4 + 0x3fffffffU < 0x7fffffff) {
        *(undefined1 *)(param_1 + 0x23f) = 1;
        param_1[0x23d] = iVar4 * 2 + param_1[0xfa] + -0x80000000;
      }
    }
    return 0;
  }
LAB_001a46a8:
  if ((param_2 == 0x14) &&
     (cVar1 = (char)param_1[0x230], (cVar1 == '\x05' || cVar1 == '\x06') || cVar1 == '\a')) {
    *(undefined1 *)((int)param_1 + 0x77d) = 9;
    *(undefined1 *)((int)param_1 + 0x77e) = 0xff;
    *(undefined1 *)((int)param_1 + 0x77f) = 0;
  }
  param_1[0x168] = param_1[0x168] | 0x80;
  return param_2;
}

