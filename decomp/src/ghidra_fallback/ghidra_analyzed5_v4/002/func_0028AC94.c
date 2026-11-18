#include "ghidra_types.h"

extern int func_0016898C(int param_1,uint *param_2);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern int func_004EAF08(int param_1,int param_2);
extern int *DAT_0028ada8;
extern float DAT_0028adac;
extern float DAT_0028adb0;

// USA 0028AC94 <- EU 0028ACBC (Ghidra, non-matching)
// GLOBAL DAT_0028ada8 int *
// GLOBAL DAT_0028adac float
// GLOBAL DAT_0028adb0 float

void func_0028AC94(int param_1)

{
  float fVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined1 in_r12;
  float fVar6;
  float in_s2;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define aiStack_68 ((int *)(albw_frame + 0x8))
  func_004EAF08(*DAT_0028ada8,1);
  puVar2 = (uint *)func_002C11E8(aiStack_68,3,0,0);
  func_0016898C(*(int *)(param_1 + 0x580),puVar2);
  fVar1 = DAT_0028adac;
  iVar3 = *(int *)(param_1 + 0x580);
  uVar4 = 0;
  if (0 < *(int *)(iVar3 + 0xc)) {
    in_r12 = 1;
    in_s2 = DAT_0028adb0;
  }
  fVar6 = *(float *)(*(int *)(iVar3 + 0x14) + 0x14);
  if (0 < *(int *)(iVar3 + 0xc)) {
    do {
      iVar5 = *(int *)(iVar3 + 0x14);
      if (uVar4 < *(uint *)(iVar3 + 0xc)) {
        iVar5 = iVar5 + uVar4 * 0x28;
      }
      if ((in_s2 <= fVar1) || (fVar6 != in_s2)) {
        *(float *)(iVar5 + 0xc) = fVar6;
        *(float *)(iVar5 + 8) = fVar6;
      }
      else {
        *(float *)(iVar5 + 0xc) = *(float *)(iVar5 + 0x14);
        *(float *)(iVar5 + 8) = *(float *)(iVar5 + 0x14);
      }
      uVar4 = uVar4 + 1;
      *(float *)(iVar5 + 0x10) = fVar1;
      *(undefined4 *)(iVar5 + 0x18) = 0;
      *(undefined1 *)(iVar5 + 0x26) = in_r12;
      *(undefined1 *)(iVar5 + 0x25) = in_r12;
    } while ((int)uVar4 < *(int *)(iVar3 + 0xc));
  }
  return;
}

