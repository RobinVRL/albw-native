#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001151EC(undefined4 *param_1,undefined4 *param_2);
extern int func_00115224(undefined4 *param_1,undefined4 *param_2);
extern float func_00115DC8(float *param_1);
extern int func_0049840C(int param_1,float fparam_0,float fparam_1,float fparam_2,float fparam_3);
extern float fRam0031d40c;
extern float fRam0031d414;
extern float fRam0031d418;
extern int iRam0031d42c;
extern int iRam0031d430;
extern float *pfRam0031d410;
extern int *piRam0031d434;
extern undefined4 *puRam0031d400;
extern undefined4 *puRam0031d404;
extern undefined4 *puRam0031d408;
extern undefined4 *puRam0031d438;
extern undefined *PTR_0031d41c;
extern undefined *PTR_0031d420;
extern undefined *PTR_0031d424;
extern undefined *PTR_0031d428;

// USA 0031D1B0 <- EU 0031D18C (Ghidra, non-matching)
// GLOBAL PTR_0031d41c undefined *
// GLOBAL PTR_0031d420 undefined *
// GLOBAL PTR_0031d424 undefined *
// GLOBAL PTR_0031d428 undefined *
// GLOBAL UNK_0031d400 undefined4 *
// GLOBAL UNK_0031d404 undefined4 *
// GLOBAL UNK_0031d408 undefined4 *
// GLOBAL UNK_0031d40c float
// GLOBAL UNK_0031d410 float *
// GLOBAL UNK_0031d414 float
// GLOBAL UNK_0031d418 float
// GLOBAL UNK_0031d42c int
// GLOBAL UNK_0031d430 int
// GLOBAL UNK_0031d434 int *
// GLOBAL UNK_0031d438 undefined4 *

void func_0031D1B0(int param_1)

{
  undefined4 *puVar1;
  undefined *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  
  puVar1 = puRam0031d400;
  *(undefined4 *)(param_1 + 0x98) = *puRam0031d400;
  *(undefined4 *)(param_1 + 0x9c) = puVar1[1];
  *(undefined4 *)(param_1 + 0xa0) = puVar1[2];
  puVar1 = puRam0031d404;
  *(undefined4 *)(param_1 + 0x8c) = *puRam0031d404;
  *(undefined4 *)(param_1 + 0x90) = puVar1[1];
  *(undefined4 *)(param_1 + 0x94) = puVar1[2];
  puVar1 = puRam0031d408;
  *(undefined4 *)(param_1 + 0xa4) = *puRam0031d408;
  *(undefined4 *)(param_1 + 0xa8) = puVar1[1];
  *(undefined4 *)(param_1 + 0xac) = puVar1[2];
  func_00115DC8((float *)(param_1 + 0xa4));
  (**(code **)(*(int *)(param_1 + 0x58) + 0x10))(param_1 + 0x58,param_1 + 0x5c);
  func_0049840C(param_1 + 0xb0,fRam0031d418,fRam0031d414,*pfRam0031d410,fRam0031d40c);
  puVar2 = PTR_0031d41c;
  *(byte *)(*(int *)PTR_0031d41c + 0x2c1f) = *(byte *)(*(int *)PTR_0031d41c + 0x2c1f) | 1;
  piVar7 = *(int **)(*(int *)puVar2 + 0x28d4);
  if (((*(uint *)PTR_0031d420 & 1) == 0) &&
     (iVar4 = func_00100174((int *)PTR_0031d420), iVar4 != 0)) {
    *(undefined **)PTR_0031d424 = PTR_0031d428;
  }
  if ((piVar7 == (int *)0x0) ||
     (iVar4 = (**(code **)(*piVar7 + 8))(piVar7,PTR_0031d424), iVar4 == 0)) {
    piVar7 = (int *)0x0;
  }
  func_001151EC(piVar7 + 5,(undefined4 *)(param_1 + 0x5c));
  piVar7[0x11] = *(int *)(param_1 + 0x8c);
  piVar7[0x12] = *(int *)(param_1 + 0x90);
  piVar7[0x13] = *(int *)(param_1 + 0x94);
  piVar7[0x14] = *(int *)(param_1 + 0x98);
  piVar7[0x15] = *(int *)(param_1 + 0x9c);
  piVar7[0x16] = *(int *)(param_1 + 0xa0);
  piVar7[0x17] = *(int *)(param_1 + 0xa4);
  piVar7[0x18] = *(int *)(param_1 + 0xa8);
  piVar7[0x19] = *(int *)(param_1 + 0xac);
  piVar7[0xb2] = piVar7[0xb2] & 0xfffffffe;
  *(undefined1 *)(piVar7 + 0x1b) = *(undefined1 *)(param_1 + 0xb4);
  *(undefined1 *)((int)piVar7 + 0x6d) = *(undefined1 *)(param_1 + 0xb5);
  func_00115224(piVar7 + 0x1c,(undefined4 *)(param_1 + 0xb8));
  func_00115224(piVar7 + 0x2c,(undefined4 *)(param_1 + 0xf8));
  iVar5 = iRam0031d430;
  iVar4 = iRam0031d42c;
  *(undefined1 *)(piVar7 + 0x3c) = *(undefined1 *)(param_1 + 0x138);
  piVar7[0x3d] = *(int *)(param_1 + 0x13c);
  piVar7[0x3e] = *(int *)(param_1 + 0x140);
  piVar7[0x3f] = *(int *)(param_1 + 0x144);
  piVar7[0x40] = *(int *)(param_1 + 0x148);
  piVar7[0x41] = *(int *)(param_1 + 0x14c);
  piVar7[0x42] = *(int *)(param_1 + 0x150);
  piVar7[0x43] = *(int *)(param_1 + 0x154);
  piVar7[0x44] = *(int *)(param_1 + 0x158);
  piVar7[0x45] = *(int *)(param_1 + 0x15c);
  piVar7[0x46] = *(int *)(param_1 + 0x160);
  piVar7[0x47] = *(int *)(param_1 + 0x164);
  piVar7[0xb2] = piVar7[0xb2] & 0xfffffffd;
  piVar3 = piRam0031d434;
  piVar7[0x1fe] = iVar4;
  piVar7[0x1ff] = iVar5;
  puVar1 = puRam0031d438;
  iVar5 = *(int *)(*piVar3 + 0xf3c);
  iVar4 = *piVar3 + 0x284;
  uVar6 = 0;
  if (iVar5 != 0) {
    uVar6 = *(uint *)(iVar5 + 4);
  }
  if (uVar6 < 0x33) {
    iVar4 = iVar4 + uVar6 * 0x38;
  }
  *(undefined4 *)(iVar4 + 8) = *puRam0031d438;
  *(undefined4 *)(iVar4 + 0xc) = puVar1[1];
  *(undefined4 *)(iVar4 + 0x10) = puVar1[2];
  return;
}

