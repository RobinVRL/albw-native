#include "ghidra_types.h"

extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0048C378(int *param_1,int param_2,undefined4 param_3);
extern int func_00688CA0(int param_1,int *param_2);
extern int func_00689A2C(undefined4 *param_1,undefined4 param_2,int param_3);
extern int func_00691E50(int *param_1,int *param_2);
extern undefined4 DAT_004b1be8;
extern undefined4 DAT_004b1bec;
extern undefined4 *DAT_004b1bf0;
extern undefined4 DAT_004b1bf4;

// USA 004B1B28 <- EU 004B1B00 (Ghidra, non-matching)
// GLOBAL DAT_004b1be8 undefined4
// GLOBAL DAT_004b1bec undefined4
// GLOBAL DAT_004b1bf0 undefined4 *
// GLOBAL DAT_004b1bf4 undefined4

void func_004B1B28(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define aiStack_38 ((int *)(albw_frame + 0x8))
  #define auStack_2c ((undefined1 *)(albw_frame + 0x14))
  puVar1 = func_00689A2C(aiStack_38,auStack_2c,0x10);
  *(undefined1 *)puVar1[1] = 0;
  *puVar1 = DAT_004b1bec;
  func_00688CA0(param_3,aiStack_38);
  uVar2 = func_00691E50((int *)(param_2 + 0x270),aiStack_38);
  puVar1 = DAT_004b1bf0;
  if (-1 < (int)uVar2) {
    if (*(int *)(param_1 + 0x20) == 0) {
      iVar4 = 1;
    }
    else {
      iVar4 = func_0010983C(*DAT_004b1bf0,*(int *)(param_1 + 0x20));
    }
    puVar3 = (undefined4 *)func_0010BAB4(0x10);
    if (puVar3 != (undefined4 *)0x0) {
      puVar3[1] = *(undefined4 *)(param_2 + 0x19c34);
      puVar3[2] = 0x16;
      *puVar3 = DAT_004b1bf4;
      puVar3[3] = uVar2;
    }
    func_0048C378((int *)(param_1 + 0x18b4),0,puVar3);
    if (iVar4 != 1) {
      func_0010983C(*puVar1,iVar4);
    }
  }
  return;
}

