#include "ghidra_types.h"

extern int func_0016898C(int param_1,uint *param_2);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern float DAT_001ae854;
extern undefined4 DAT_001ae858;

// USA 001AE6F8 <- EU 001AE6F8 (Ghidra, non-matching)
// GLOBAL DAT_001ae854 float
// GLOBAL DAT_001ae858 undefined4

void func_001AE6F8(int param_1,int param_2,uint param_3)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  undefined8 uVar5;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define aiStack_70 ((int *)(albw_frame + 0x0))
  if (*(int *)(param_1 + 0x99c) == 0) {
    return;
  }
  iVar3 = *(int *)(*(int *)(param_1 + 0x99c) + 0x1c);
  if (iVar3 != 0) {
    if ((int)param_3 < 0) {
      param_3 = (uint)*(byte *)(param_1 + 0x654);
    }
    if (param_2 == 2) {
      fVar4 = DAT_001ae854;
      puVar1 = (uint *)func_002C11E8(aiStack_70,0,0,0);
      func_0016898C(iVar3,puVar1);
      iVar2 = *(int *)(iVar3 + 0x14);
      if (*(float *)(iVar2 + 8) != *(float *)(iVar2 + 0x14)) {
        *(float *)(iVar2 + 8) = *(float *)(iVar2 + 0x14);
        *(undefined1 *)(iVar2 + 0x26) = 1;
      }
LAB_001ae840:
      *(float *)(*(int *)(iVar3 + 0x14) + 0x10) = fVar4;
      return;
    }
    uVar5 = CONCAT44(DAT_001ae858,DAT_001ae854);
    if (param_2 == 4) {
      puVar1 = (uint *)func_002C11E8(aiStack_70,0,param_3,0);
      func_0016898C(iVar3,puVar1);
      iVar2 = *(int *)(iVar3 + 0x14);
      if (*(float *)(iVar2 + 8) != ALBW_AS_F32(uVar5)) {
        *(float *)(iVar2 + 8) = ALBW_AS_F32(uVar5);
        *(undefined1 *)(iVar2 + 0x26) = 1;
      }
    }
    else {
      if (param_2 != 0xc) {
        puVar1 = (uint *)func_002C11E8(aiStack_70,0,0,0);
        fVar4 = ALBW_AS_F32(uVar5);
        func_0016898C(iVar3,puVar1);
        iVar2 = *(int *)(iVar3 + 0x14);
        if (*(float *)(iVar2 + 8) != fVar4) {
          *(float *)(iVar2 + 8) = fVar4;
          *(undefined1 *)(iVar2 + 0x26) = 1;
        }
        goto LAB_001ae840;
      }
      puVar1 = (uint *)func_002C11E8(aiStack_70,1,param_3,0);
      func_0016898C(iVar3,puVar1);
    }
    *(int *)(*(int *)(iVar3 + 0x14) + 0x10) = (int)((ulonglong)uVar5 >> 0x20);
  }
  return;
}

