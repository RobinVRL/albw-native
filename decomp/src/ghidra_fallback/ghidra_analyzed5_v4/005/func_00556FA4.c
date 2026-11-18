#include "ghidra_types.h"

extern int func_005467C0(int param_1,undefined4 *param_2);

// USA 00556FA4 <- EU 00556F7C (Ghidra, non-matching)

undefined4 func_00556FA4(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  float fVar6;
  
  iVar2 = *(int *)(param_1 + 0x2c);
  iVar4 = (int)*(short *)(iVar2 + 0x42);
  if (*(char *)(param_1 + 0x9b) != '\0') {
    switch(iVar4) {
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x1f:
    case 0x20:
    case 0x21:
      *param_2 = *(undefined4 *)(iVar2 + 0x170);
      param_2[1] = *(undefined4 *)(iVar2 + 0x174);
      param_2[2] = *(undefined4 *)(iVar2 + 0x178);
      return 0;
    }
  }
  if (iVar4 != 0x18) {
    if (iVar4 < 0x18) {
      if (iVar4 == 0x11) {
        if (0x68 < *(uint *)(iVar2 + 0x44)) {
          iVar2 = *(int *)(param_1 + 0x50);
          uVar1 = *(undefined4 *)(iVar2 + 0x68);
          uVar5 = *(undefined4 *)(iVar2 + 0x6c);
          param_2[2] = *(undefined4 *)(iVar2 + 0x70);
          *param_2 = uVar1;
          param_2[1] = uVar5;
          return 1;
        }
      }
      else if ((iVar4 == 0x14) &&
              (puVar3 = *(undefined4 **)(param_1 + 0x30),
              *(float *)(param_1 + 0xe8) < ALBW_AS_F32(puVar3[1]))) {
        *param_2 = *puVar3;
        param_2[1] = puVar3[1];
        fVar6 = ALBW_AS_F32(puVar3[2]);
        param_2[2] = ALBW_AS_U32(fVar6);
        param_2[2] = ALBW_AS_U32(fVar6 + *(float *)(param_1 + 0xf8));
        param_2[1] = *(undefined4 *)(param_1 + 0xe8);
        return 0;
      }
      goto code_r0x00557128;
    }
    if (iVar4 != 0x24) {
      if (iVar4 == 0x27) {
        puVar3 = *(undefined4 **)(param_1 + 0x30);
        *param_2 = *puVar3;
        param_2[1] = puVar3[1];
        param_2[2] = puVar3[2];
        return 5;
      }
      goto code_r0x00557128;
    }
  }
  puVar3 = *(undefined4 **)(param_1 + 0x30);
  if (*(float *)(param_1 + 0xe8) < ALBW_AS_F32(puVar3[1])) {
    *param_2 = *puVar3;
    param_2[1] = puVar3[1];
    param_2[2] = puVar3[2];
    param_2[1] = *(undefined4 *)(param_1 + 0xe8);
    return 0;
  }
code_r0x00557128:
  uVar1 = func_005467C0(param_1,param_2);
  return uVar1;
}

