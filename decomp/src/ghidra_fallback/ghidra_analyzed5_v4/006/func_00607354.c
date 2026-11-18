#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_004356B4(int *param_1);
extern int func_004ED4DC(int param_1,int param_2);
extern int func_0054D964(int param_1,uint param_2);
extern int DAT_006073ec;
extern float DAT_006073f0;
extern int DAT_006073f4;
extern int *DAT_006073f8;

// USA 00607354 <- EU 0060732C (Ghidra, non-matching)
// GLOBAL DAT_006073ec int
// GLOBAL DAT_006073f0 float
// GLOBAL DAT_006073f4 int
// GLOBAL DAT_006073f8 int *

int * func_00607354(uint *param_1)

{
  float fVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  uint in_fpscr;
  float fVar5;
  
  puVar2 = (undefined4 *)func_0010BAB4(0x420);
  piVar3 = (int *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    piVar3 = func_00150E40(puVar2,param_1);
    iVar4 = DAT_006073ec + 0x54;
    *piVar3 = DAT_006073ec;
    piVar3[200] = iVar4;
    *(undefined1 *)(piVar3 + 0x103) = 0;
    iVar4 = func_0054D964((int)piVar3,0);
    piVar3[0x104] = iVar4;
    iVar4 = DAT_006073f4;
    fVar1 = DAT_006073f0;
    if ((char)piVar3[0x103] == '\0') {
      fVar5 = (float)VectorSignedToFloat((int)(short)piVar3[0xb],(byte)(in_fpscr >> 0x15) & 3);
      piVar3[0x105] = (int)ALBW_AS_U32((fVar5 * DAT_006073f0));
      piVar3[0x106] = iVar4;
      fVar5 = (float)VectorSignedToFloat((int)*(short *)((int)piVar3 + 0x2e),
                                         (byte)(in_fpscr >> 0x15) & 3);
      piVar3[0x107] = (int)ALBW_AS_U32((fVar5 * fVar1));
      *(undefined1 *)(piVar3 + 0x103) = 1;
      func_004356B4((int *)piVar3[0x104]);
    }
    if (*DAT_006073f8 != 0) {
      func_004ED4DC(*DAT_006073f8,piVar3[0xb3]);
    }
  }
  return piVar3;
}

