#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_00112364(int *param_1,int param_2,int *param_3);
extern int func_003E696C(int *param_1,undefined4 *param_2);
extern int func_00407D4C(int param_1,int *param_2,int *param_3,undefined *param_4);
extern int func_00412BB4(void);
extern int func_00412C8C(int *param_1,int param_2);
extern int func_00412E2C(int param_1);
extern undefined *DAT_0040c0a0;
extern undefined *DAT_0040c0a4;
extern undefined *DAT_0040c0a8;

// USA 0040BE08 <- EU 0040BDE8 (Ghidra, non-matching)
// GLOBAL DAT_0040c0a0 undefined *
// GLOBAL DAT_0040c0a4 undefined *
// GLOBAL DAT_0040c0a8 undefined *

/* WARNING: Type propagation algorithm not settling */

undefined4 func_0040BE08(int param_1,undefined4 param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  _Alignas(8) unsigned char albw_frame[0x620];
  #define local_620 (*(int *)(albw_frame + 0x0))
  #define local_61c ((undefined4 *)(albw_frame + 0x4))
  uVar4 = 0;
  if (*(int *)(param_1 + 0x18) != 0) {
    do {
      func_00407D4C((int)(*(int **)(param_1 + 0x1c) + (uVar4 & 0xffffff) * 0x17),
                    *(int **)(param_1 + 0x1c),(int *)((uVar4 & 0xffffff) * 7),(undefined *)param_4);
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(param_1 + 0x18));
  }
  if (1 < *(uint *)(param_1 + 0x28)) {
    func_00100118((int)&local_620,DAT_0040c0a0,0xc,0x80);
    iVar1 = *(int *)(param_1 + 0x28);
    while (iVar1 != 0) {
      piVar3 = *(int **)(param_1 + 0x2c);
      func_003E696C((int *)(param_1 + 0x28),piVar3);
      iVar2 = (uint)*(byte *)((int)piVar3 + -0x5b) + piVar3[-0x29];
      iVar1 = UnsignedSaturate(iVar2,7);
      UnsignedDoesSaturate(iVar2,7);
      func_00112364(&local_620 + iVar1 * 3,(int)local_61c + iVar1 * 0xc,piVar3);
      iVar1 = *(int *)(param_1 + 0x28);
    }
    iVar1 = 0;
    do {
      if ((&local_620)[iVar1 * 3] != 0) {
        do {
          piVar3 = *(int **)((int)local_61c + iVar1 * 0xc);
          func_003E696C(&local_620 + iVar1 * 3,piVar3);
          func_00112364((int *)(param_1 + 0x28),param_1 + 0x2c,piVar3);
        } while ((&local_620)[iVar1 * 3] != 0);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0x80);
  }
  if (1 < *(uint *)(param_1 + 0x74)) {
    func_00100118((int)&local_620,DAT_0040c0a4,0xc,0x80);
    iVar1 = *(int *)(param_1 + 0x74);
    while (iVar1 != 0) {
      piVar3 = *(int **)(param_1 + 0x78);
      func_003E696C((int *)(param_1 + 0x74),piVar3);
      iVar2 = (uint)*(byte *)((int)piVar3 + -0x5b) + piVar3[-0x29];
      iVar1 = UnsignedSaturate(iVar2,7);
      UnsignedDoesSaturate(iVar2,7);
      func_00112364(&local_620 + iVar1 * 3,(int)local_61c + iVar1 * 0xc,piVar3);
      iVar1 = *(int *)(param_1 + 0x74);
    }
    iVar1 = 0;
    do {
      if ((&local_620)[iVar1 * 3] != 0) {
        do {
          piVar3 = *(int **)((int)local_61c + iVar1 * 0xc);
          func_003E696C(&local_620 + iVar1 * 3,piVar3);
          func_00112364((int *)(param_1 + 0x74),param_1 + 0x78,piVar3);
        } while ((&local_620)[iVar1 * 3] != 0);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0x80);
  }
  if (1 < *(uint *)(param_1 + 0xc0)) {
    func_00100118((int)&local_620,DAT_0040c0a8,0xc,0x80);
    iVar1 = *(int *)(param_1 + 0xc0);
    while (iVar1 != 0) {
      piVar3 = *(int **)(param_1 + 0xc4);
      func_003E696C((int *)(param_1 + 0xc0),piVar3);
      iVar2 = (uint)*(byte *)((int)piVar3 + -0x5b) + piVar3[-0x29];
      iVar1 = UnsignedSaturate(iVar2,7);
      UnsignedDoesSaturate(iVar2,7);
      func_00112364(&local_620 + iVar1 * 3,(int)local_61c + iVar1 * 0xc,piVar3);
      iVar1 = *(int *)(param_1 + 0xc0);
    }
    iVar1 = 0;
    do {
      if ((&local_620)[iVar1 * 3] != 0) {
        do {
          piVar3 = *(int **)((int)local_61c + iVar1 * 0xc);
          func_003E696C(&local_620 + iVar1 * 3,piVar3);
          func_00112364((int *)(param_1 + 0xc0),param_1 + 0xc4,piVar3);
        } while ((&local_620)[iVar1 * 3] != 0);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0x80);
  }
  piVar3 = (int *)func_00412BB4();
  func_00412E2C((int)piVar3);
  return func_00412C8C(piVar3,0);
}

