#include "ghidra_types.h"

extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0048C378(int *param_1,int param_2,undefined4 param_3);
extern int func_00688CA0(int param_1,int *param_2);
extern int func_00689A2C(undefined4 *param_1,undefined4 param_2,int param_3);
extern int func_00691884(int *param_1,int *param_2);
extern undefined4 DAT_004b2cb4;
extern undefined4 DAT_004b2cb8;
extern undefined4 *DAT_004b2cbc;
extern undefined DAT_004b2cc0;
extern int DAT_004b2cc8;
extern undefined4 DAT_004b2ccc;

// USA 004B2BD8 <- EU 004B2BB0 (Ghidra, non-matching)
// GLOBAL DAT_004b2cb4 undefined4
// GLOBAL DAT_004b2cb8 undefined4
// GLOBAL DAT_004b2cbc undefined4 *
// GLOBAL DAT_004b2cc0 undefined
// GLOBAL DAT_004b2cc8 int
// GLOBAL DAT_004b2ccc undefined4

void func_004B2BD8(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_58 (*(int *)(albw_frame + 0x8))
  #define local_54 (*(undefined * *)(albw_frame + 0xc))
  #define aiStack_4c ((int *)(albw_frame + 0x14))
  #define auStack_40 ((undefined1 *)(albw_frame + 0x20))
  puVar1 = func_00689A2C(aiStack_4c,auStack_40,0x10);
  *(undefined1 *)puVar1[1] = 0;
  *puVar1 = DAT_004b2cb8;
  func_00688CA0(param_3,aiStack_4c);
  puVar1 = DAT_004b2cbc;
  if (*(int *)(param_1 + 0x20) == 0) {
    iVar4 = 1;
  }
  else {
    iVar4 = func_0010983C(*DAT_004b2cbc,*(int *)(param_1 + 0x20));
  }
  puVar2 = (undefined4 *)func_0010BAB4(0x10);
  if (puVar2 != (undefined4 *)0x0) {
    uVar5 = *(undefined4 *)(param_2 + 0x19c34);
    local_54 = &DAT_004b2cc0;
    local_58 = DAT_004b2cc8;
    uVar3 = func_00691884(aiStack_4c,&local_58);
    puVar2[1] = uVar5;
    puVar2[2] = 5;
    *puVar2 = DAT_004b2ccc;
    *(char *)(puVar2 + 3) = (char)uVar3;
  }
  func_0048C378((int *)(param_1 + 0x18b4),0,puVar2);
  if (iVar4 != 1) {
    func_0010983C(*puVar1,iVar4);
  }
  return;
}

