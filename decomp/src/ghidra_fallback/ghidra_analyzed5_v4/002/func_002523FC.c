#include "ghidra_types.h"

extern int func_0016898C(int param_1,uint *param_2);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern int func_002CBF8C(int param_1,undefined4 *param_2,undefined4 *param_3,int param_4);
extern int func_0051CE88(int *param_1);
extern undefined4 DAT_0025259c;

// USA 002523FC <- EU 00252424 (Ghidra, non-matching)
// GLOBAL DAT_0025259c undefined4

void func_002523FC(int param_1)

{
  int iVar1;
  uint *puVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define aiStack_70 ((int *)(albw_frame + 0x0))
  if (*(int *)(param_1 + 0x4fc) == 1) {
    *(undefined4 *)(param_1 + 0x550) = DAT_0025259c;
  }
  puVar3 = (undefined4 *)(param_1 + 0x578);
  if (*(int *)(param_1 + 0x574) == 0) {
    iVar1 = func_0051CE88((int *)(param_1 + 0x574));
    if (iVar1 != 0) {
      if (*(int *)(param_1 + 0x574) != 0) {
        func_002CBF8C(*(int *)(param_1 + 0x574),puVar3,(undefined4 *)(param_1 + 0x584),2);
      }
      *(undefined4 *)(param_1 + 1000) = *(undefined4 *)(param_1 + 0x584);
      *(undefined4 *)(param_1 + 0x3d0) = *puVar3;
      *(undefined4 *)(param_1 + 0x3d4) = *(undefined4 *)(param_1 + 0x57c);
      *(undefined4 *)(param_1 + 0x3d8) = *(undefined4 *)(param_1 + 0x580);
    }
    if (*(int *)(param_1 + 0x574) == 0) {
      return;
    }
  }
  iVar1 = **(int **)(*(int *)(param_1 + 0x4f8) + 0x14);
  if (*(char *)(*(int *)(param_1 + 0x574) + 0x9d2) == '\x01') {
    if (iVar1 != 2) {
      puVar2 = (uint *)func_002C11E8(aiStack_70,2,10,0);
      func_0016898C(*(int *)(param_1 + 0x4f8),puVar2);
    }
  }
  else if (iVar1 != 1) {
    puVar2 = (uint *)func_002C11E8(aiStack_70,1,10,0);
    func_0016898C(*(int *)(param_1 + 0x4f8),puVar2);
  }
  iVar1 = *(int *)(param_1 + 0x574);
  if (*(char *)(iVar1 + 0x9d2) == '\x01') {
    *(undefined1 *)(param_1 + 0x898) = 0;
  }
  if (iVar1 != 0) {
    func_002CBF8C(iVar1,puVar3,(undefined4 *)(param_1 + 0x584),2);
  }
  *(undefined4 *)(param_1 + 1000) = *(undefined4 *)(param_1 + 0x584);
  *(undefined4 *)(param_1 + 0x3d0) = *puVar3;
  *(undefined4 *)(param_1 + 0x3d4) = *(undefined4 *)(param_1 + 0x57c);
  *(undefined4 *)(param_1 + 0x3d8) = *(undefined4 *)(param_1 + 0x580);
  return;
}

