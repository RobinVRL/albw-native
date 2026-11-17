/* compilefix: func_001403BC, the converted stage-2 text (build/decomp/ghidra_fallback/ghidra_analyzed5_v4/001/func_001403BC.c) with `this` restored in 1
 * member-function-pointer call(s) by tools/pmf_this_fix.py (BOOT_LOG 140): this = BASE + (adj >> 1).
 * Further arguments of those calls are as Ghidra printed them. */
#include "ghidra_types.h"

extern int func_0013F428(int param_1);
extern int func_0014064C(int param_1);
extern int func_0014E2A0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5 ,int param_6);
extern undefined4 func_00151148(int param_1,int param_2);
extern int func_001512E8(int *param_1);
extern int func_002917A4(int param_1,float *param_2,undefined4 param_3,float fparam_0);
extern int func_00291FE0(int param_1,float *param_2,float fparam_0);
extern int func_0034CA24(undefined4 *param_1);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_00491B3C(float *param_1,float *param_2);
extern int func_004A2D1C(int param_1,float *param_2);
extern int func_004CEAF0(int param_1);
extern int func_004CF478(int param_1,int param_2);
extern int func_00521380(int param_1);
extern uint DAT_00140640;
extern float DAT_00140644;
extern int *DAT_00140648;

// USA 001403BC <- EU 001403BC (Ghidra, non-matching)
// GLOBAL DAT_00140640 uint
// GLOBAL DAT_00140644 float
// GLOBAL DAT_00140648 int *

undefined4 func_001403BC(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint in_fpscr;
  float fparam_0;
  
  *(int *)(param_1 + 0x50c) = *(int *)(param_1 + 0x50c) + -1;
  if (*(char *)(param_1 + 0x51e) != '\0') {
    *(undefined1 *)(param_1 + 0x51e) = 0;
    cVar1 = *(char *)(param_1 + 0x51d);
    func_004CF478(*(int *)(param_1 + 0x410),(int)cVar1);
    *(char *)(*(int *)(param_1 + 0x418) + 0x61) = cVar1;
    func_00151148(*(int *)(param_1 + 0x414),(int)cVar1);
    if (*(char *)(param_1 + 0x51d) != '\0') {
      func_0013F428(param_1);
    }
  }
  func_0034CA24(*(undefined4 **)(param_1 + 0x420));
  if (*(char *)(*(int *)(param_1 + 0x418) + 0x61) != '\0') {
    func_0014E2A0(param_1,*(undefined4 *)(param_1 + 0x41c),param_1 + 0x440,DAT_00140640,0,0);
    if (*(int *)(param_1 + 0x4f4) == 0) {
      if (**(int **)(param_1 + 0x420) != 0) {
        cVar1 = *(char *)((int)*(int **)(param_1 + 0x420) + 0x21);
        if (cVar1 == '\x05') {
          func_002917A4(*DAT_00140648,param_1 + 0x3d0,0,DAT_00140644);
          *(undefined4 *)(param_1 + 0x4f4) = 0x16;
        }
        else if (cVar1 == '\x0e') {
          func_00291FE0(*DAT_00140648,param_1 + 0x3d0,DAT_00140644);
          *(undefined4 *)(param_1 + 0x4f4) = 0x16;
        }
      }
    }
    else {
      *(int *)(param_1 + 0x4f4) = *(int *)(param_1 + 0x4f4) + -1;
    }
  }
  piVar5 = (int *)(*(int *)(param_1 + 0x47c) + *(char *)(param_1 + 0x464) * 8);
  uVar2 = *(uint *)(*(int *)(param_1 + 0x47c) + *(char *)(param_1 + 0x464) * 8 + 4);
  if ((uVar2 & 1) != 0) {
    piVar5 = (int *)(*piVar5 + *(int *)(*(int *)(param_1 + 0x474) + ((int)uVar2 >> 1)));
  }
  (*(int (*)(int *))(code *)*piVar5)(((int *)((int)(*(int *)(param_1 + 0x474)) + ((int)uVar2 >> 1))));   /* this restored (pmf_this_fix) */
  iVar3 = *(int *)(param_1 + 0x460) + 1;
  *(int *)(param_1 + 0x460) = iVar3;
  if (*(int *)(param_1 + 0x470) != 0) {
    fparam_0 = (float)VectorUnsignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(*(int *)(param_1 + 0x470),1,fparam_0);
  }
  if (*(char *)(param_1 + 0x521) == '\0') {
    func_0014064C(param_1);
    iVar3 = *(int *)(param_1 + 0x410);
    if (*(char *)(iVar3 + 0x30) != '\0') {
      *(uint *)(iVar3 + 0x164) = *(uint *)(iVar3 + 0x164) | 0x40000000;
      func_00491B3C((float *)(iVar3 + 0x80),(float *)(param_1 + 0x4d8));
      iVar3 = *(int *)(param_1 + 0x410);
      *(uint *)(iVar3 + 0x164) = *(uint *)(iVar3 + 0x164) | 0x40000000;
      *(undefined4 *)(iVar3 + 0x8c) = *(undefined4 *)(param_1 + 0x3d0);
      *(undefined4 *)(iVar3 + 0x9c) = *(undefined4 *)(param_1 + 0x3d4);
      *(undefined4 *)(iVar3 + 0xac) = *(undefined4 *)(param_1 + 0x3d8);
      func_004CEAF0(*(int *)(param_1 + 0x410));
      if (*(int *)(param_1 + 0x508) == 2) {
        iVar3 = *(int *)(param_1 + 0x410);
        *(uint *)(iVar3 + 0x164) = *(uint *)(iVar3 + 0x164) | 0x40000000;
        iVar4 = *(int *)(param_1 + 0x4ec);
        if ((iVar4 != 0) && (*(int *)(iVar4 + 0x1c) == *(int *)(param_1 + 0x4f0))) {
          func_004A2D1C(iVar4,(float *)(iVar3 + 0x80));
        }
      }
    }
    iVar3 = func_00521380(*(int *)(param_1 + 0x414));
    if (iVar3 != 0) {
      return func_001512E8(*(int **)(param_1 + 0x414));
    }
  }
  return 0;
}

