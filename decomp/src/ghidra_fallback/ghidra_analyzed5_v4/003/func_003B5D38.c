#include "ghidra_types.h"

extern int func_0016898C(int param_1,uint *param_2);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern float DAT_003b5de8;
extern float DAT_003b5dec;

// USA 003B5D38 <- EU 003B5D14 (Ghidra, non-matching)
// GLOBAL DAT_003b5de8 float
// GLOBAL DAT_003b5dec float

void func_003B5D38(int param_1)

{
  float fVar1;
  float fVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define aiStack_68 ((int *)(albw_frame + 0x8))
  puVar3 = (uint *)func_002C11E8(aiStack_68,0,10,0);
  func_0016898C(*(int *)(param_1 + 0x28),puVar3);
  fVar2 = DAT_003b5dec;
  fVar1 = DAT_003b5de8;
  iVar4 = *(int *)(param_1 + 0x28);
  uVar5 = 0;
  if (0 < *(int *)(iVar4 + 0xc)) {
    do {
      iVar6 = *(int *)(iVar4 + 0x14);
      if (uVar5 < *(uint *)(iVar4 + 0xc)) {
        iVar6 = iVar6 + uVar5 * 0x28;
      }
      if (fVar1 <= fVar2) {
        *(float *)(iVar6 + 0xc) = fVar1;
        *(float *)(iVar6 + 8) = fVar1;
      }
      else {
        *(float *)(iVar6 + 0xc) = *(float *)(iVar6 + 0x14);
        *(float *)(iVar6 + 8) = *(float *)(iVar6 + 0x14);
      }
      uVar5 = uVar5 + 1;
      *(float *)(iVar6 + 0x10) = fVar2;
      *(undefined4 *)(iVar6 + 0x18) = 0;
      *(undefined1 *)(iVar6 + 0x26) = 1;
      *(undefined1 *)(iVar6 + 0x25) = 1;
    } while ((int)uVar5 < *(int *)(iVar4 + 0xc));
  }
  return;
}

