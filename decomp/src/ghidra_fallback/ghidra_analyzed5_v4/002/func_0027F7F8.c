#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern int func_0052FE5C(int param_1);
extern int func_00660F70(undefined4 *param_1,undefined1 param_2);
extern undefined4 DAT_0027fa98;
extern undefined DAT_0027fa9c;
extern int DAT_0027fabc;
extern char s__SE_SwitchWatter_MOVE_PRE_0027fa9f[];
extern undefined4 _DAT_0027fa9c;

// USA 0027F7F8 <- EU 0027F820 (Ghidra, non-matching)
// GLOBAL DAT_0027fa98 undefined4
// GLOBAL DAT_0027fa9c undefined
// GLOBAL DAT_0027fabc int

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void func_0027F7F8(int *param_1)

{
  bool bVar1;
  int iVar2;
  uint *puVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define local_88 (*(int *)(albw_frame + 0x8))
  #define local_84 (*(char * *)(albw_frame + 0xc))
  #define aiStack_80 ((int *)(albw_frame + 0x10))
  piVar4 = param_1 + 0x12d;
  uVar5 = _DAT_0027fa9c;
  uVar6 = DAT_0027fa98;
  if ((param_1[0x12f] == 10) && (iVar2 = (**(code **)(*param_1 + 100))(param_1), iVar2 != 0)) {
    bVar1 = func_0052FE5C((int)param_1);
    if (bVar1) {
      puVar3 = (uint *)func_002C11E8(aiStack_80,4,10,0);
      func_0016898C(param_1[0x12d],puVar3);
      iVar2 = *piVar4;
      *(undefined4 *)(iVar2 + 0x8c) = uVar5;
      *(undefined4 *)(iVar2 + 0x88) = uVar6;
      iVar2 = *piVar4;
    }
    else {
      puVar3 = (uint *)func_002C11E8(aiStack_80,5,10,0);
      func_0016898C(param_1[0x12d],puVar3);
      iVar2 = *piVar4;
      *(undefined4 *)(iVar2 + 0x8c) = uVar5;
      *(undefined4 *)(iVar2 + 0x88) = uVar6;
      iVar2 = *piVar4;
    }
    local_88 = DAT_0027fabc;
    *(undefined4 *)(*(int *)(iVar2 + 0x14) + 0x10) = uVar5;
    local_84 = s__SE_SwitchWatter_MOVE_PRE_0027fa9f + 1;
    func_00150A84(param_1,&local_88,0);
  }
  if (param_1[0x12f] == 0x6e) {
    param_1[0x11e] = param_1[0x127];
    param_1[0x120] = param_1[0x129];
    *(undefined1 *)((int)param_1 + 0x4f5) = 0;
    bVar1 = func_0052FE5C((int)param_1);
    if (bVar1) {
      *(undefined1 *)((int)param_1 + 0x4f6) = 0;
      if (param_1[0x13b] == 0) {
        *(undefined1 *)((int)param_1 + 0x4f5) = 1;
        puVar3 = (uint *)func_002C11E8(&local_88,2,10,0);
        func_0016898C(param_1[0x12d],puVar3);
      }
      else {
        *(undefined1 *)(param_1 + 0x144) = 1;
        puVar3 = (uint *)func_002C11E8(&local_88,0,10,0);
        func_0016898C(param_1[0x12d],puVar3);
      }
      iVar2 = param_1[0x13b] + -1;
    }
    else {
      *(undefined1 *)((int)param_1 + 0x4f6) = 1;
      if (param_1[0x13b] == 2) {
        *(undefined1 *)((int)param_1 + 0x4f5) = 1;
        puVar3 = (uint *)func_002C11E8(&local_88,3,10,0);
        func_0016898C(param_1[0x12d],puVar3);
      }
      else {
        *(undefined1 *)(param_1 + 0x144) = 1;
        puVar3 = (uint *)func_002C11E8(&local_88,1,10,0);
        func_0016898C(param_1[0x12d],puVar3);
      }
      iVar2 = param_1[0x13b] + 1;
    }
    param_1[0x13b] = iVar2;
    iVar2 = param_1[0x12d];
    *(undefined4 *)(iVar2 + 0x8c) = uVar5;
    *(undefined4 *)(iVar2 + 0x88) = uVar6;
    *(undefined4 *)(*(int *)(*piVar4 + 0x14) + 0x10) = uVar5;
    func_00660F70(param_1 + 0x12f,4);
    iVar2 = param_1[0x13b];
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    else if (2 < iVar2) {
      iVar2 = 2;
    }
    param_1[0x13b] = iVar2;
    param_1[0x13c] = iVar2;
  }
  return;
}

