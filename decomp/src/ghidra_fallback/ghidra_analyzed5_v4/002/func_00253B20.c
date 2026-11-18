#include "ghidra_types.h"

extern int func_0016898C(int param_1,uint *param_2);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern int func_002CBF8C(int param_1,undefined4 *param_2,undefined4 *param_3,int param_4);
extern int func_0051CE88(int *param_1);
extern undefined4 DAT_00253cb0;

// USA 00253B20 <- EU 00253B48 (Ghidra, non-matching)
// GLOBAL DAT_00253cb0 undefined4

void func_00253B20(int param_1)

{
  int iVar1;
  uint *puVar2;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define aiStack_70 ((int *)(albw_frame + 0x0))
  if (*(int *)(param_1 + 0x420) == 1) {
    *(undefined4 *)(param_1 + 0x4b4) = DAT_00253cb0;
  }
  if (*(int *)(param_1 + 0x4bc) == 0) {
    iVar1 = func_0051CE88((int *)(param_1 + 0x4bc));
    if (iVar1 != 0) {
      if (*(int *)(param_1 + 0x4bc) != 0) {
        func_002CBF8C(*(int *)(param_1 + 0x4bc),(undefined4 *)(param_1 + 0x4c0),
                      (undefined4 *)(param_1 + 0x4cc),1);
      }
      *(undefined4 *)(param_1 + 1000) = *(undefined4 *)(param_1 + 0x4cc);
      *(undefined4 *)(param_1 + 0x3d0) = *(undefined4 *)(param_1 + 0x4c0);
      *(undefined4 *)(param_1 + 0x3d4) = *(undefined4 *)(param_1 + 0x4c4);
      *(undefined4 *)(param_1 + 0x3d8) = *(undefined4 *)(param_1 + 0x4c8);
    }
    if (*(int *)(param_1 + 0x4bc) == 0) {
      return;
    }
  }
  iVar1 = **(int **)(*(int *)(param_1 + 0x444) + 0x14);
  if (*(char *)(*(int *)(param_1 + 0x4bc) + 0x9d2) == '\x01') {
    if (iVar1 != 3) {
      puVar2 = (uint *)func_002C11E8(aiStack_70,3,10,0);
      func_0016898C(*(int *)(param_1 + 0x444),puVar2);
    }
  }
  else if (iVar1 != 2) {
    puVar2 = (uint *)func_002C11E8(aiStack_70,2,10,0);
    func_0016898C(*(int *)(param_1 + 0x444),puVar2);
  }
  iVar1 = *(int *)(param_1 + 0x4bc);
  if (*(char *)(iVar1 + 0x9d2) == '\x01') {
    *(undefined1 *)(param_1 + 0x7e0) = 0;
  }
  if (iVar1 != 0) {
    func_002CBF8C(iVar1,(undefined4 *)(param_1 + 0x4c0),(undefined4 *)(param_1 + 0x4cc),1);
  }
  *(undefined4 *)(param_1 + 1000) = *(undefined4 *)(param_1 + 0x4cc);
  *(undefined4 *)(param_1 + 0x3d0) = *(undefined4 *)(param_1 + 0x4c0);
  *(undefined4 *)(param_1 + 0x3d4) = *(undefined4 *)(param_1 + 0x4c4);
  *(undefined4 *)(param_1 + 0x3d8) = *(undefined4 *)(param_1 + 0x4c8);
  return;
}

