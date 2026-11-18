#include "ghidra_types.h"

extern float DAT_002c406c;
extern float DAT_002c4070;

// USA 002C3EB4 <- EU 002C3E90 (Ghidra, non-matching)
// GLOBAL DAT_002c406c float
// GLOBAL DAT_002c4070 float

void * func_002C3EB4(int param_1,char param_2,float fparam_0)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  float fVar4;
  
  if (*(float *)(param_1 + 0x154) != fparam_0) {
    if ((int)ALBW_AS_U32(*(float *)(param_1 + 0x154)) < 0x3f800000) {
      if ((0x3f7fffff < (int)ALBW_AS_U32(fparam_0)) && (uVar1 = 0, 0 < *(int *)(param_1 + 0x178))) {
        do {
          bVar3 = *(byte *)(param_1 + 0x16a);
          if (uVar1 < *(uint *)(param_1 + 0x178)) {
            iVar2 = *(int *)(*(int *)(param_1 + 0x180) + uVar1 * 4);
          }
          else {
            iVar2 = 0;
          }
          *(byte *)(iVar2 + 0x87) = bVar3;
          *(uint *)(iVar2 + 0x7c) = *(uint *)(iVar2 + 0x7c) & 0xf807ffff | (uint)bVar3 << 0x13;
          if (uVar1 < *(uint *)(param_1 + 0x178)) {
            iVar2 = *(int *)(*(int *)(param_1 + 0x180) + uVar1 * 4);
          }
          else {
            iVar2 = 0;
          }
          uVar1 = uVar1 + 1;
          *(undefined1 *)(iVar2 + 0x88) = 0;
          *(uint *)(iVar2 + 0x7c) = *(uint *)(iVar2 + 0x7c) & 0xf7ffffff;
        } while ((int)uVar1 < *(int *)(param_1 + 0x178));
      }
    }
    else if (((int)ALBW_AS_U32(fparam_0) < 0x3f800000) && (uVar1 = 0, 0 < *(int *)(param_1 + 0x178))) {
      do {
        if (uVar1 < *(uint *)(param_1 + 0x178)) {
          iVar2 = *(int *)(*(int *)(param_1 + 0x180) + uVar1 * 4);
        }
        else {
          iVar2 = 0;
        }
        bVar3 = *(char *)(param_1 + 0x16a) + param_2;
        *(byte *)(iVar2 + 0x87) = bVar3;
        *(uint *)(iVar2 + 0x7c) = *(uint *)(iVar2 + 0x7c) & 0xf807ffff | (uint)bVar3 << 0x13;
        if (uVar1 < *(uint *)(param_1 + 0x178)) {
          iVar2 = *(int *)(*(int *)(param_1 + 0x180) + uVar1 * 4);
        }
        else {
          iVar2 = 0;
        }
        *(undefined1 *)(iVar2 + 0x88) = 1;
        *(uint *)(iVar2 + 0x7c) = *(uint *)(iVar2 + 0x7c) | 0x8000000;
        if (uVar1 < *(uint *)(param_1 + 0x184)) {
          iVar2 = *(int *)(*(int *)(param_1 + 0x18c) + uVar1 * 4);
        }
        else {
          iVar2 = 0;
        }
        bVar3 = *(char *)(param_1 + 0x16a) + param_2 + '\x01';
        *(byte *)(iVar2 + 0x87) = bVar3;
        *(uint *)(iVar2 + 0x7c) = *(uint *)(iVar2 + 0x7c) & 0xf807ffff | (uint)bVar3 << 0x13;
        if (uVar1 < *(uint *)(param_1 + 0x184)) {
          iVar2 = *(int *)(*(int *)(param_1 + 0x18c) + uVar1 * 4);
        }
        else {
          iVar2 = 0;
        }
        uVar1 = uVar1 + 1;
        *(undefined1 *)(iVar2 + 0x88) = 1;
        *(uint *)(iVar2 + 0x7c) = *(uint *)(iVar2 + 0x7c) | 0x8000000;
      } while ((int)uVar1 < *(int *)(param_1 + 0x178));
    }
    fVar4 = DAT_002c406c;
    if ((DAT_002c406c <= fparam_0) && (fVar4 = fparam_0, DAT_002c4070 < fparam_0)) {
      fVar4 = DAT_002c4070;
    }
    *(float *)(param_1 + 0x154) = fVar4;
  }
  return (void *)param_1;
}

