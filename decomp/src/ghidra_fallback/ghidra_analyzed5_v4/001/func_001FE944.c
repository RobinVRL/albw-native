#include "ghidra_types.h"

extern int func_0016898C(int param_1,uint *param_2);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern undefined4 DAT_001fe9dc;
extern undefined4 DAT_001fe9e0;

// USA 001FE944 <- EU 001FE944 (Ghidra, non-matching)
// GLOBAL DAT_001fe9dc undefined4
// GLOBAL DAT_001fe9e0 undefined4

void func_001FE944(int param_1,undefined4 param_2,int param_3)

{
  uint *puVar1;
  int iVar2;
  uint in_fpscr;
  float fVar3;
  undefined4 uVar4;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define aiStack_70 ((int *)(albw_frame + 0x0))
  *(undefined1 *)(param_1 + 0x32) = 1;
  puVar1 = (uint *)func_002C11E8(aiStack_70,param_2,0,0);
  func_0016898C(*(int *)(param_1 + 0x14),puVar1);
  if (param_3 < 0) {
    iVar2 = *(int *)(*(int *)(param_1 + 0x14) + 0x14);
    uVar4 = DAT_001fe9e0;
  }
  else {
    fVar3 = (float)VectorSignedToFloat(param_3,(byte)(in_fpscr >> 0x15) & 3);
    iVar2 = *(int *)(*(int *)(param_1 + 0x14) + 0x14);
    if (*(float *)(iVar2 + 8) != fVar3) {
      *(float *)(iVar2 + 8) = fVar3;
      *(undefined1 *)(iVar2 + 0x26) = 1;
    }
    iVar2 = *(int *)(*(int *)(param_1 + 0x14) + 0x14);
    uVar4 = DAT_001fe9dc;
  }
  *(undefined4 *)(iVar2 + 0x10) = uVar4;
  return;
}

