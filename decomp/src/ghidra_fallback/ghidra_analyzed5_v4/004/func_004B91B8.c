#include "ghidra_types.h"

extern int func_00100950(int param_1,undefined *param_2,int param_3,int param_4);
extern void func_0010F1F8(int *param_1,float fparam_0);
extern int func_00297934(int param_1);
extern int func_002E1B70(int *param_1);
extern int func_00352A28(undefined4 *param_1);
extern int func_004A1520();
extern undefined4 DAT_004b9238;
extern undefined *DAT_004b923c;
extern int DAT_004b9240;
extern undefined4 DAT_004b9244;

// USA 004B91B8 <- EU 004B9190 (Ghidra, non-matching)
// GLOBAL DAT_004b9238 undefined4
// GLOBAL DAT_004b923c undefined *
// GLOBAL DAT_004b9240 int
// GLOBAL DAT_004b9244 undefined4

undefined4 * func_004B91B8(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  float in_s0;
  
  *param_1 = DAT_004b9238;
  func_002E1B70(param_1 + 0x85c);
  func_00100950((int)(param_1 + 0x74),DAT_004b923c,0x138,0xf);
  iVar2 = DAT_004b9240 + 0x3c;
  param_1[0x20] = DAT_004b9240;
  param_1[0x2d] = iVar2;
  puVar1 = func_00297934((int)(param_1 + 0x5d));
  iVar2 = func_00352A28(puVar1 + -0x12);
  *(undefined4 *)(iVar2 + -0x100) = DAT_004b9244;
  if (*(char *)(iVar2 + -200) != '\0') {
    iVar3 = *(int *)(iVar2 + -0xe4);
    if (iVar3 != 0) {
      *(undefined4 *)(iVar2 + -0xe4) = 0;
      func_0010F1F8((int *)(iVar2 + -0xf0),in_s0);
      *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + -1;
    }
    *(undefined1 *)(iVar2 + -200) = 0;
  }
  puVar1 = func_004A1520((undefined4 *)(iVar2 + -0x100));
  puVar1 = func_004A1520(puVar1 + -0xb);
  return puVar1;
}

