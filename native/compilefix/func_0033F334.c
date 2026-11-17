/* compilefix: func_0033F334, the converted stage-2 text (build/decomp/ghidra_fallback/ghidra_analyzed5_v4/003/func_0033F334.c) with `this` restored in 1
 * member-function-pointer call(s) by tools/pmf_this_fix.py (BOOT_LOG 140): this = BASE + (adj >> 1).
 * Further arguments of those calls are as Ghidra printed them. */
#include "ghidra_types.h"

extern int func_0014E2A0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5 ,int param_6);
extern int func_001512E8(int *param_1);
extern int func_002917A4(int param_1,float *param_2,undefined4 param_3,float fparam_0);
extern int func_00291FE0(int param_1,float *param_2,float fparam_0);
extern int func_0033EBEC(int param_1);
extern int func_0033F55C(int param_1);
extern int func_0034CA24(undefined4 *param_1);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_00491B3C(float *param_1,float *param_2);
extern int func_004CEAF0(int param_1);
extern int func_00521380(int param_1);
extern uint DAT_0033f528;
extern undefined4 DAT_0033f52c;
extern float DAT_0033f530;
extern int *DAT_0033f534;

// USA 0033F334 <- EU 0033F310 (Ghidra, non-matching)
// GLOBAL DAT_0033f528 uint
// GLOBAL DAT_0033f52c undefined4
// GLOBAL DAT_0033f530 float
// GLOBAL DAT_0033f534 int *

undefined4 func_0033F334(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  uint extraout_r1 = 0;
  uint in_fpscr;
  float fparam_0;
  
  func_0034CA24(*(undefined4 **)(param_1 + 0x41c));
  if (*(char *)(*(int *)(param_1 + 0x414) + 0x61) != '\0') {
    func_0014E2A0(param_1,*(undefined4 *)(param_1 + 0x418),param_1 + 0x438,DAT_0033f528,0,0);
    if (*(int *)(param_1 + 0x4c4) == 0) {
      if (**(int **)(param_1 + 0x41c) != 0) {
        cVar1 = *(char *)((int)*(int **)(param_1 + 0x41c) + 0x21);
        if (cVar1 == '\x05') {
          func_002917A4(*DAT_0033f534,param_1 + 0x3d0,0,DAT_0033f530);
          *(undefined4 *)(param_1 + 0x4c4) = 0x16;
        }
        else if (cVar1 == '\x0e') {
          func_00291FE0(*DAT_0033f534,param_1 + 0x3d0,DAT_0033f530);
          *(undefined4 *)(param_1 + 0x4c4) = 0x16;
        }
      }
    }
    else {
      *(int *)(param_1 + 0x4c4) = *(int *)(param_1 + 0x4c4) + -1;
    }
  }
  piVar5 = (int *)(*(int *)(param_1 + 0x474) + *(char *)(param_1 + 0x45c) * 8);
  uVar3 = *(uint *)(*(int *)(param_1 + 0x474) + *(char *)(param_1 + 0x45c) * 8 + 4);
  if ((uVar3 & 1) != 0) {
    piVar5 = (int *)(*piVar5 + *(int *)(*(int *)(param_1 + 0x46c) + ((int)uVar3 >> 1)));
  }
  (*(int (*)(int *))(code *)*piVar5)(((int *)((int)(*(int *)(param_1 + 0x46c)) + ((int)uVar3 >> 1))));   /* this restored (pmf_this_fix) */
  iVar4 = *(int *)(param_1 + 0x458) + 1;
  *(int *)(param_1 + 0x458) = iVar4;
  if (*(int *)(param_1 + 0x468) != 0) {
    fparam_0 = (float)VectorUnsignedToFloat(iVar4,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(*(int *)(param_1 + 0x468),1,fparam_0);
  }
  func_0033F55C(param_1);
  func_0033EBEC(param_1);
  iVar4 = *(int *)(param_1 + 0x40c);
  piVar5 = (int *)(param_1 + 0x40c);
  uVar3 = extraout_r1;
  if (iVar4 != 0) {
    uVar3 = (uint)*(byte *)(iVar4 + 0x30);
  }
  if (iVar4 != 0 && uVar3 != 0) {
    *(uint *)(iVar4 + 0x164) = *(uint *)(iVar4 + 0x164) | 0x40000000;
    func_00491B3C((float *)(iVar4 + 0x80),(float *)(param_1 + 0x4b0));
    uVar2 = DAT_0033f52c;
    iVar4 = *piVar5;
    *(uint *)(iVar4 + 0x164) = *(uint *)(iVar4 + 0x164) | 0x40000000;
    *(undefined4 *)(iVar4 + 0x74) = uVar2;
    *(undefined4 *)(iVar4 + 0x78) = uVar2;
    *(undefined4 *)(iVar4 + 0x7c) = uVar2;
    iVar4 = *piVar5;
    *(uint *)(iVar4 + 0x164) = *(uint *)(iVar4 + 0x164) | 0x40000000;
    *(undefined4 *)(iVar4 + 0x8c) = *(undefined4 *)(param_1 + 0x3d0);
    *(undefined4 *)(iVar4 + 0x9c) = *(undefined4 *)(param_1 + 0x3d4);
    *(undefined4 *)(iVar4 + 0xac) = *(undefined4 *)(param_1 + 0x3d8);
    func_004CEAF0(*piVar5);
  }
  if ((*(int *)(param_1 + 0x410) != 0) &&
     (iVar4 = func_00521380(*(int *)(param_1 + 0x410)), iVar4 != 0)) {
    return func_001512E8(*(int **)(param_1 + 0x410));
  }
  return 0;
}

