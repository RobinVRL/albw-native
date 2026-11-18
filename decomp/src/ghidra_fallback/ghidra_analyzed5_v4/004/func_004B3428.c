#include "ghidra_types.h"

extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0048C378(int *param_1,int param_2,undefined4 param_3);
extern int func_00688CA0(int param_1,int *param_2);
extern int func_00689A2C(undefined4 *param_1,undefined4 param_2,int param_3);
extern int func_00691884(int *param_1,int *param_2);
extern int func_00691E50(int *param_1,int *param_2);
extern undefined4 DAT_004b3580;
extern undefined4 DAT_004b3584;
extern undefined DAT_004b3588;
extern int DAT_004b3590;
extern undefined DAT_004b3594;
extern undefined DAT_004b359c;
extern undefined4 *DAT_004b35a4;
extern undefined4 DAT_004b35a8;

// USA 004B3428 <- EU 004B3400 (Ghidra, non-matching)
// GLOBAL DAT_004b3580 undefined4
// GLOBAL DAT_004b3584 undefined4
// GLOBAL DAT_004b3588 undefined
// GLOBAL DAT_004b3590 int
// GLOBAL DAT_004b3594 undefined
// GLOBAL DAT_004b359c undefined
// GLOBAL DAT_004b35a4 undefined4 *
// GLOBAL DAT_004b35a8 undefined4

void func_004B3428(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined1 uVar7;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define aiStack_84 ((int *)(albw_frame + 0xc))
  #define auStack_78 ((undefined1 *)(albw_frame + 0x18))
  #define local_68 (*(int *)(albw_frame + 0x28))
  #define local_64 (*(undefined * *)(albw_frame + 0x2c))
  #define local_60 (*(int *)(albw_frame + 0x30))
  #define local_5c (*(undefined * *)(albw_frame + 0x34))
  #define local_50 (*(int *)(albw_frame + 0x40))
  #define local_4c (*(undefined * *)(albw_frame + 0x44))
  #define aiStack_48 ((int *)(albw_frame + 0x48))
  #define auStack_3c ((undefined1 *)(albw_frame + 0x54))
  puVar2 = func_00689A2C(aiStack_48,auStack_3c,0x10);
  uVar1 = DAT_004b3584;
  *(undefined1 *)puVar2[1] = 0;
  *puVar2 = uVar1;
  func_00688CA0(param_3,aiStack_48);
  uVar3 = func_00691E50((int *)(param_2 + 0x270),aiStack_48);
  if ((int)uVar3 < 0) {
    return;
  }
  puVar2 = func_00689A2C(aiStack_84,auStack_78,0x10);
  *(undefined1 *)puVar2[1] = 0;
  *puVar2 = uVar1;
  func_00688CA0(param_3,aiStack_84);
  iVar5 = DAT_004b3590;
  local_64 = &DAT_004b3588;
  local_68 = DAT_004b3590;
  iVar4 = func_00691884(aiStack_84,&local_68);
  if (iVar4 == 0) {
    local_4c = &DAT_004b3594;
    local_50 = iVar5;
    iVar4 = func_00691884(aiStack_84,&local_50);
    if (iVar4 == 0) {
      local_5c = &DAT_004b359c;
      local_60 = iVar5;
      iVar5 = func_00691884(aiStack_84,&local_60);
      if (iVar5 == 0) {
        uVar7 = 0;
        goto LAB_004b34f0;
      }
    }
  }
  uVar7 = 1;
LAB_004b34f0:
  puVar2 = DAT_004b35a4;
  if (*(int *)(param_1 + 0x20) == 0) {
    iVar5 = 1;
  }
  else {
    iVar5 = func_0010983C(*DAT_004b35a4,*(int *)(param_1 + 0x20));
  }
  puVar6 = (undefined4 *)func_0010BAB4(0x14);
  if (puVar6 != (undefined4 *)0x0) {
    puVar6[1] = *(undefined4 *)(param_2 + 0x19c34);
    puVar6[2] = 0x18;
    *puVar6 = DAT_004b35a8;
    puVar6[3] = uVar3;
    *(undefined1 *)(puVar6 + 4) = uVar7;
  }
  func_0048C378((int *)(param_1 + 0x18b4),0,puVar6);
  if (iVar5 != 1) {
    func_0010983C(*puVar2,iVar5);
  }
  return;
}

