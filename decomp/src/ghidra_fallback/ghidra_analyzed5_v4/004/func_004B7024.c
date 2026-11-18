#include "ghidra_types.h"

extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0048C378(int *param_1,int param_2,undefined4 param_3);
extern int func_00688CA0(int param_1,int *param_2);
extern int func_00689A2C(undefined4 *param_1,undefined4 param_2,int param_3);
extern int func_00691884(int *param_1,int *param_2);
extern int func_00691D84(int *param_1,int *param_2);
extern undefined4 DAT_004b717c;
extern undefined4 DAT_004b7180;
extern undefined DAT_004b7184;
extern int DAT_004b718c;
extern undefined DAT_004b7190;
extern undefined DAT_004b7198;
extern undefined4 *DAT_004b71a0;
extern undefined4 DAT_004b71a4;

// USA 004B7024 <- EU 004B6FFC (Ghidra, non-matching)
// GLOBAL DAT_004b717c undefined4
// GLOBAL DAT_004b7180 undefined4
// GLOBAL DAT_004b7184 undefined
// GLOBAL DAT_004b718c int
// GLOBAL DAT_004b7190 undefined
// GLOBAL DAT_004b7198 undefined
// GLOBAL DAT_004b71a0 undefined4 *
// GLOBAL DAT_004b71a4 undefined4

void func_004B7024(int param_1,int *param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined1 uVar7;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define aiStack_70 ((int *)(albw_frame + 0x0))
  #define auStack_64 ((undefined1 *)(albw_frame + 0xc))
  #define aiStack_54 ((int *)(albw_frame + 0x1c))
  #define auStack_48 ((undefined1 *)(albw_frame + 0x28))
  #define local_38 (*(int *)(albw_frame + 0x38))
  #define local_34 (*(undefined * *)(albw_frame + 0x3c))
  #define local_30 (*(int *)(albw_frame + 0x40))
  #define local_2c (*(undefined * *)(albw_frame + 0x44))
  #define local_28 (*(int *)(albw_frame + 0x48))
  #define local_24 (*(undefined * *)(albw_frame + 0x4c))
  puVar2 = func_00689A2C(aiStack_54,auStack_48,0x10);
  uVar1 = DAT_004b7180;
  *(undefined1 *)puVar2[1] = 0;
  *puVar2 = uVar1;
  func_00688CA0(param_3,aiStack_54);
  uVar3 = func_00691D84(param_2,aiStack_54);
  if ((int)uVar3 < 0) {
    return;
  }
  puVar2 = func_00689A2C(aiStack_70,auStack_64,0x10);
  *(undefined1 *)puVar2[1] = 0;
  *puVar2 = uVar1;
  func_00688CA0(param_3,aiStack_70);
  iVar5 = DAT_004b718c;
  local_34 = &DAT_004b7184;
  local_38 = DAT_004b718c;
  iVar4 = func_00691884(aiStack_70,&local_38);
  if (iVar4 == 0) {
    local_2c = &DAT_004b7190;
    local_30 = iVar5;
    iVar4 = func_00691884(aiStack_70,&local_30);
    if (iVar4 == 0) {
      local_24 = &DAT_004b7198;
      local_28 = iVar5;
      iVar5 = func_00691884(aiStack_70,&local_28);
      if (iVar5 == 0) {
        uVar7 = 0;
        goto LAB_004b70ec;
      }
    }
  }
  uVar7 = 1;
LAB_004b70ec:
  puVar2 = DAT_004b71a0;
  if (*(int *)(param_1 + 0x20) == 0) {
    iVar5 = 1;
  }
  else {
    iVar5 = func_0010983C(*DAT_004b71a0,*(int *)(param_1 + 0x20));
  }
  puVar6 = (undefined4 *)func_0010BAB4(0x14);
  if (puVar6 != (undefined4 *)0x0) {
    puVar6[1] = param_2[0x670d];
    puVar6[2] = 0xe;
    *puVar6 = DAT_004b71a4;
    puVar6[3] = uVar3;
    *(undefined1 *)(puVar6 + 4) = uVar7;
  }
  func_0048C378((int *)(param_1 + 0x18b4),0,puVar6);
  if (iVar5 != 1) {
    func_0010983C(*puVar2,iVar5);
  }
  return;
}

