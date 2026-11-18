#include "ghidra_types.h"

extern int func_0016898C(int param_1,uint *param_2);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern int func_004CEAF0(int param_1);
extern int func_004CF478(int param_1,int param_2);
extern int func_004D7EB0(float *param_1,uint param_2,uint param_3,float *param_4);
extern int func_00588BF0(int param_1,int param_2);
extern int func_00663954(undefined4 *param_1,undefined1 param_2);
extern float DAT_002cf420;

// USA 002CF2EC <- EU 002CF2C8 (Ghidra, non-matching)
// GLOBAL DAT_002cf420 float

undefined4 func_002CF2EC(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  bool bVar1;
  int iVar2;
  uint *puVar3;
  undefined4 extraout_r1;
  int *piVar4;
  int *piVar5;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define aiStack_70 ((int *)(albw_frame + 0x0))
  piVar5 = (int *)(param_1 + 0x434);
  if (*(char *)(*(int *)(param_1 + 0x430) + 0x30) == '\0') {
    bVar1 = func_00588BF0(param_1,0);
    if (!bVar1) {
      return 0;
    }
    func_004CF478(*(int *)(param_1 + 0x430),1);
    piVar4 = (int *)0x0;
    puVar3 = (uint *)func_002C11E8(aiStack_70,3,0,0);
    iVar2 = *(int *)(param_1 + 0x434);
    func_0016898C(iVar2,puVar3);
    func_00169A80((int *)*piVar5,extraout_r1,iVar2,piVar4);
    func_00168E9C((int *)*piVar5,*(int *)(param_1 + 0x430),(int *)0x0);
  }
  else {
    func_00169A80(*(int **)(param_1 + 0x434),param_2,param_3,param_4);
    func_00168E9C((int *)*piVar5,*(int *)(param_1 + 0x430),(int *)0x0);
    iVar2 = *(int *)(*piVar5 + 0x14);
    if (*(char *)(iVar2 + 0x1c) == '\0') {
      if (*(float *)(iVar2 + 0x10) < DAT_002cf420) {
        if (DAT_002cf420 < *(float *)(iVar2 + 8)) goto LAB_002cf3e4;
      }
      else if (*(float *)(iVar2 + 8) != *(float *)(iVar2 + 0x14)) goto LAB_002cf3e4;
      func_00663954((undefined4 *)(param_1 + 0x40c),1);
    }
  }
LAB_002cf3e4:
  iVar2 = *(int *)(param_1 + 0x430);
  *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 0x40000000;
  func_004D7EB0((float *)(iVar2 + 0x80),*(uint *)(param_1 + 0x47c),*(uint *)(param_1 + 1000),
                (float *)(param_1 + 0x3d0));
  return func_004CEAF0(*(int *)(param_1 + 0x430));
}

