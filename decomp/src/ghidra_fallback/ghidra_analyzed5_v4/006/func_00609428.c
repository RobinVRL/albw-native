#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_004356B4(int *param_1);
extern int func_0054D964(int param_1,uint param_2);
extern undefined4 DAT_00609498;
extern int DAT_0060949c;
extern float DAT_006094a0;
extern float DAT_006094a4;

// USA 00609428 <- EU 00609400 (Ghidra, non-matching)
// GLOBAL DAT_00609498 undefined4
// GLOBAL DAT_0060949c int
// GLOBAL DAT_006094a0 float
// GLOBAL DAT_006094a4 float

int * func_00609428(uint *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  uint extraout_r1;
  uint in_fpscr;
  float fVar4;
  undefined8 uVar5;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00609498);
  piVar2 = (int *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    piVar2 = func_00150E40(puVar1,param_1);
    iVar3 = DAT_0060949c + 0x54;
    *piVar2 = DAT_0060949c;
    piVar2[200] = iVar3;
    *(undefined1 *)(piVar2 + 0x103) = 0;
    iVar3 = func_0054D964((int)piVar2,0);
    piVar2[0x104] = iVar3;
    piVar2[0x105] = 0;
    fVar4 = (float)VectorSignedToFloat((int)(short)piVar2[0xb],(byte)(in_fpscr >> 0x15) & 3);
    uVar5 = func_00114608((uint)ALBW_AS_U32((fVar4 * DAT_006094a0 * DAT_006094a4)),extraout_r1);
    piVar2[0x105] = (int)uVar5;
    piVar2[0x106] = piVar2[0x12];
    func_004356B4((int *)piVar2[0x104]);
  }
  return piVar2;
}

