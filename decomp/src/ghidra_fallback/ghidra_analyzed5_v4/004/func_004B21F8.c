#include "ghidra_types.h"

extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0048C378(int *param_1,int param_2,undefined4 param_3);
extern int func_00688CA0(int param_1,int *param_2);
extern int func_00689894(int param_1,int *param_2,uint param_3);
extern int func_00689A2C(undefined4 *param_1,undefined4 param_2,int param_3);
extern undefined4 DAT_004b22cc;
extern undefined4 DAT_004b22d0;
extern undefined4 *DAT_004b22d4;
extern undefined4 DAT_004b22d8;

// USA 004B21F8 <- EU 004B21D0 (Ghidra, non-matching)
// GLOBAL DAT_004b22cc undefined4
// GLOBAL DAT_004b22d0 undefined4
// GLOBAL DAT_004b22d4 undefined4 *
// GLOBAL DAT_004b22d8 undefined4

void func_004B21F8(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define aiStack_60 ((int *)(albw_frame + 0x0))
  #define auStack_54 ((undefined1 *)(albw_frame + 0xc))
  puVar3 = func_00689A2C(aiStack_60,auStack_54,0x30);
  uVar2 = DAT_004b22d0;
  uVar1 = DAT_004b22cc;
  *(undefined1 *)puVar3[1] = 0;
  *puVar3 = uVar2;
  func_00688CA0(param_3,aiStack_60);
  puVar3 = DAT_004b22d4;
  if (*(int *)(param_1 + 0x20) == 0) {
    iVar6 = 1;
  }
  else {
    iVar6 = func_0010983C(*DAT_004b22d4,*(int *)(param_1 + 0x20));
  }
  puVar4 = (undefined4 *)func_0010BAB4(0x48);
  puVar5 = (undefined4 *)0x0;
  if (puVar4 != (undefined4 *)0x0) {
    puVar4[1] = *(undefined4 *)(param_2 + 0x19c34);
    puVar4[2] = 0x31;
    *puVar4 = DAT_004b22d8;
    puVar4 = func_00689A2C(puVar4 + 3,puVar4 + 6,0x30);
    *puVar4 = uVar1;
    func_00689894((int)puVar4,aiStack_60,0xffffffff);
    puVar5 = puVar4 + -3;
    *puVar4 = uVar2;
  }
  func_0048C378((int *)(param_1 + 0x18b4),0,puVar5);
  if (iVar6 != 1) {
    func_0010983C(*puVar3,iVar6);
  }
  return;
}

