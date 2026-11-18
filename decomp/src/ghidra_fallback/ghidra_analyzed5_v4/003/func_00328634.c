#include "ghidra_types.h"

extern int func_00120FBC(int param_1,undefined4 *param_2,float *param_3,undefined4 *param_4,undefined4 param_5, int param_6,float *param_7);
extern int func_001E8440(int param_1,float *param_2,float param_3);
extern int func_002E1B70(int *param_1);
extern int func_004ED740(int param_1);
extern int func_005845D8(int param_1);
extern int *DAT_003286e0;
extern int *DAT_003286e4;
extern float DAT_003286e8;
extern undefined4 DAT_003286ec;
extern undefined4 *DAT_003286f0;
extern float *DAT_003286f4;

// USA 00328634 <- EU 00328610 (Ghidra, non-matching)
// GLOBAL DAT_003286e0 int *
// GLOBAL DAT_003286e4 int *
// GLOBAL DAT_003286e8 float
// GLOBAL DAT_003286ec undefined4
// GLOBAL DAT_003286f0 undefined4 *
// GLOBAL DAT_003286f4 float *

void func_00328634(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_1c (*(float *)(albw_frame + 0x4))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(float *)(albw_frame + 0xc))
  if ((*DAT_003286e0 != 0) && (iVar2 = func_005845D8(*DAT_003286e0), iVar2 != 0)) {
    uVar3 = *(undefined4 *)(iVar2 + 0x94c);
    uVar4 = *(undefined4 *)(iVar2 + 0x950);
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(iVar2 + 0x954);
    *(undefined4 *)(param_1 + 0x1c) = uVar3;
    *(undefined4 *)(param_1 + 0x20) = uVar4;
  }
  piVar1 = DAT_003286e4;
  if (*(int *)(*DAT_003286e4 + 0x18) != 0) {
    func_001E8440(*(int *)(*DAT_003286e4 + 0x18),param_1 + 0x1c,100);
  }
  iVar2 = *piVar1;
  iVar5 = *(int *)(iVar2 + 0x18);
  if (iVar5 != 0) {
    func_004ED740(iVar2);
    local_1c = DAT_003286e8;
    uStack_18 = DAT_003286ec;
    local_14 = DAT_003286e8;
    func_00120FBC(iVar5,(undefined4 *)(param_1 + 0x30),DAT_003286f4,DAT_003286f0,0,0,&local_1c);
    func_004ED740(*piVar1);
    func_002E1B70((int *)(param_1 + 0x30));
  }
  return;
}

