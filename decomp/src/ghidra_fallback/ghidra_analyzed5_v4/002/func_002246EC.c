#include "ghidra_types.h"

extern int func_0022816C(int *param_1);
extern int func_004D80EC(float *param_1,float *param_2,int param_3);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_0065E774(undefined4 *param_1,undefined1 param_2);
extern float DAT_002247a4;
extern int *DAT_002247a8;
extern int DAT_002247ac;
extern float DAT_002247b0;
extern int DAT_002247b4;
extern int DAT_002247b8;

// USA 002246EC <- EU 002246EC (Ghidra, non-matching)
// GLOBAL DAT_002247a4 float
// GLOBAL DAT_002247a8 int *
// GLOBAL DAT_002247ac int
// GLOBAL DAT_002247b0 float
// GLOBAL DAT_002247b4 int
// GLOBAL DAT_002247b8 int

undefined4 func_002246EC(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  func_0022816C(param_1);
  piVar2 = DAT_002247a8;
  param_1[0x1c0] = (int)ALBW_AS_U32((ALBW_AS_F32(param_1[0x1c0]) * DAT_002247a4));
  iVar1 = func_004D80EC((float *)(param_1[0x182] + 4),*(float **)(*piVar2 + 0x1c),0);
  func_0051D2F4(param_1 + 0x1a9,iVar1,DAT_002247ac,0x7fffffff,DAT_002247b0);
  piVar2 = param_1 + 0x11a;
  if (5 < *(ushort *)(DAT_002247b4 + (int)param_1)) {
    iVar1 = DAT_002247b8;
    uVar3 = func_0065E774(piVar2,9);
    param_1[0x1c0] = iVar1;
    return uVar3;
  }
  if (0x68 < param_1[0x11a]) {
    uVar3 = func_0065E774(piVar2,7);
    return uVar3;
  }
  if (0x3b < param_1[0x11a]) {
    param_1[0x1c0] = DAT_002247b8;
  }
  return piVar2;
}

