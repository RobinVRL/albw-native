#include "ghidra_types.h"

extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0048C378(int *param_1,int param_2,undefined4 param_3);
extern int func_00688CA0(int param_1,int *param_2);
extern int func_00689894(int param_1,int *param_2,uint param_3);
extern int func_00689A2C(undefined4 *param_1,undefined4 param_2,int param_3);
extern int func_00691884(int *param_1,int *param_2);
extern undefined4 DAT_004b6620;
extern undefined4 DAT_004b6624;
extern undefined DAT_004b6628;
extern int DAT_004b6630;
extern undefined DAT_004b6634;
extern undefined DAT_004b663c;
extern undefined4 *DAT_004b6644;
extern undefined4 DAT_004b6648;

// USA 004B64B0 <- EU 004B6488 (Ghidra, non-matching)
// GLOBAL DAT_004b6620 undefined4
// GLOBAL DAT_004b6624 undefined4
// GLOBAL DAT_004b6628 undefined
// GLOBAL DAT_004b6630 int
// GLOBAL DAT_004b6634 undefined
// GLOBAL DAT_004b663c undefined
// GLOBAL DAT_004b6644 undefined4 *
// GLOBAL DAT_004b6648 undefined4

void func_004B64B0(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined1 uVar8;
  _Alignas(8) unsigned char albw_frame[0xa0];
  #define aiStack_98 ((int *)(albw_frame + 0x8))
  #define auStack_8c ((undefined1 *)(albw_frame + 0x14))
  #define aiStack_6c ((int *)(albw_frame + 0x34))
  #define auStack_60 ((undefined1 *)(albw_frame + 0x40))
  #define local_40 (*(int *)(albw_frame + 0x60))
  #define local_3c (*(undefined * *)(albw_frame + 0x64))
  #define local_38 (*(int *)(albw_frame + 0x68))
  #define local_34 (*(undefined * *)(albw_frame + 0x6c))
  #define local_30 (*(int *)(albw_frame + 0x70))
  #define local_2c (*(undefined * *)(albw_frame + 0x74))
  #define local_28 (*(int * *)(albw_frame + 0x78))
  puVar3 = func_00689A2C(aiStack_6c,auStack_60,0x20);
  uVar2 = DAT_004b6624;
  uVar1 = DAT_004b6620;
  *(undefined1 *)puVar3[1] = 0;
  *puVar3 = uVar2;
  func_00688CA0(param_3,aiStack_6c);
  puVar3 = func_00689A2C(aiStack_98,auStack_8c,0x20);
  *(undefined1 *)puVar3[1] = 0;
  *puVar3 = uVar2;
  func_00688CA0(param_3,aiStack_98);
  iVar5 = DAT_004b6630;
  local_3c = &DAT_004b6628;
  local_40 = DAT_004b6630;
  iVar4 = func_00691884(aiStack_98,&local_40);
  if (iVar4 == 0) {
    local_34 = &DAT_004b6634;
    local_38 = iVar5;
    iVar4 = func_00691884(aiStack_98,&local_38);
    if (iVar4 == 0) {
      local_2c = &DAT_004b663c;
      local_30 = iVar5;
      iVar5 = func_00691884(aiStack_98,&local_30);
      if (iVar5 == 0) {
        uVar8 = 0;
        goto LAB_004b6564;
      }
    }
  }
  uVar8 = 1;
LAB_004b6564:
  puVar3 = DAT_004b6644;
  if (*(int *)(param_1 + 0x20) == 0) {
    iVar5 = 1;
  }
  else {
    iVar5 = func_0010983C(*DAT_004b6644,*(int *)(param_1 + 0x20));
  }
  local_28 = (int *)(param_1 + 0x18b4);
  puVar6 = (undefined4 *)func_0010BAB4(0x3c);
  puVar7 = (undefined4 *)0x0;
  if (puVar6 != (undefined4 *)0x0) {
    puVar6[1] = *(undefined4 *)(param_2 + 0x19c34);
    puVar6[2] = 0x2f;
    *puVar6 = DAT_004b6648;
    puVar6 = func_00689A2C(puVar6 + 3,puVar6 + 6,0x20);
    *puVar6 = uVar1;
    func_00689894((int)puVar6,aiStack_6c,0xffffffff);
    *puVar6 = uVar2;
    puVar7 = puVar6 + -3;
    *(undefined1 *)(puVar6 + 0xb) = uVar8;
  }
  func_0048C378(local_28,0,puVar7);
  if (iVar5 != 1) {
    func_0010983C(*puVar3,iVar5);
  }
  return;
}

