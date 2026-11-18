#include "ghidra_types.h"

extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0048C378(int *param_1,int param_2,undefined4 param_3);
extern int func_00688CA0(int param_1,int *param_2);
extern int func_00689A2C(undefined4 *param_1,undefined4 param_2,int param_3);
extern int func_00691884(int *param_1,int *param_2);
extern undefined4 DAT_004b6b14;
extern undefined4 DAT_004b6b18;
extern undefined DAT_004b6b1c;
extern int DAT_004b6b24;
extern undefined DAT_004b6b28;
extern undefined DAT_004b6b30;
extern undefined4 *DAT_004b6b38;
extern undefined4 DAT_004b6b3c;

// USA 004B68DC <- EU 004B68B4 (Ghidra, non-matching)
// GLOBAL DAT_004b6b14 undefined4
// GLOBAL DAT_004b6b18 undefined4
// GLOBAL DAT_004b6b1c undefined
// GLOBAL DAT_004b6b24 int
// GLOBAL DAT_004b6b28 undefined
// GLOBAL DAT_004b6b30 undefined
// GLOBAL DAT_004b6b38 undefined4 *
// GLOBAL DAT_004b6b3c undefined4

void func_004B68DC(int param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  uint uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  _Alignas(8) unsigned char albw_frame[0xb0];
  #define aiStack_a4 ((int *)(albw_frame + 0xc))
  #define auStack_98 ((undefined1 *)(albw_frame + 0x18))
  #define local_80 (*(int *)(albw_frame + 0x30))
  #define local_7c (*(undefined * *)(albw_frame + 0x34))
  #define aiStack_78 ((int *)(albw_frame + 0x38))
  #define auStack_6c ((undefined1 *)(albw_frame + 0x44))
  #define local_58 (*(int *)(albw_frame + 0x58))
  #define local_54 (*(undefined * *)(albw_frame + 0x5c))
  #define local_50 (*(int *)(albw_frame + 0x60))
  #define local_4c (*(undefined * *)(albw_frame + 0x64))
  #define iStack_34 (*(int *)(albw_frame + 0x7c))
  #define iStack_30 (*(int *)(albw_frame + 0x80))
  #define local_2c (*(int *)(albw_frame + 0x84))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x88))
  iStack_34 = param_1;
  iStack_30 = param_2;
  local_2c = param_3;
  uStack_28 = param_4;
  puVar2 = func_00689A2C(aiStack_78,auStack_6c,0x10);
  uVar1 = DAT_004b6b18;
  *(undefined1 *)puVar2[1] = 0;
  *puVar2 = uVar1;
  func_00688CA0(local_2c,aiStack_78);
  uVar7 = 0;
  if (*(int *)(param_2 + 0x26c) < 1) {
    return;
  }
  do {
    piVar6 = (int *)(param_2 + 0x1c4) + uVar7 * 7;
    do {
      iVar3 = func_00691884(aiStack_78,piVar6);
      if (iVar3 != 0) {
        if ((int)uVar7 < 0) {
          return;
        }
        puVar2 = func_00689A2C(aiStack_a4,auStack_98,0x10);
        *(undefined1 *)puVar2[1] = 0;
        *puVar2 = uVar1;
        func_00688CA0(local_2c,aiStack_a4);
        iVar3 = DAT_004b6b24;
        local_4c = &DAT_004b6b1c;
        local_50 = DAT_004b6b24;
        iVar4 = func_00691884(aiStack_a4,&local_50);
        if (iVar4 == 0) {
          local_7c = &DAT_004b6b28;
          local_80 = iVar3;
          iVar4 = func_00691884(aiStack_a4,&local_80);
          if (iVar4 != 0) goto LAB_004b6a00;
          local_54 = &DAT_004b6b30;
          local_58 = iVar3;
          iVar4 = func_00691884(aiStack_a4,&local_58);
          if (iVar4 != 0) goto LAB_004b6a00;
          uVar9 = 0;
        }
        else {
LAB_004b6a00:
          uVar9 = 1;
        }
        func_00688CA0(local_2c,aiStack_a4);
        local_54 = &DAT_004b6b1c;
        local_58 = iVar3;
        iVar4 = func_00691884(aiStack_a4,&local_58);
        if (iVar4 == 0) {
          local_7c = &DAT_004b6b28;
          local_80 = iVar3;
          iVar4 = func_00691884(aiStack_a4,&local_80);
          if (iVar4 == 0) {
            local_4c = &DAT_004b6b30;
            local_50 = iVar3;
            iVar3 = func_00691884(aiStack_a4,&local_50);
            if (iVar3 == 0) {
              uVar8 = 0;
              goto LAB_004b6a80;
            }
          }
        }
        uVar8 = 1;
LAB_004b6a80:
        puVar2 = DAT_004b6b38;
        if (*(int *)(param_1 + 0x20) == 0) {
          iVar3 = 1;
        }
        else {
          iVar3 = func_0010983C(*DAT_004b6b38,*(int *)(param_1 + 0x20));
        }
        puVar5 = (undefined4 *)func_0010BAB4(0x14);
        if (puVar5 != (undefined4 *)0x0) {
          puVar5[1] = *(undefined4 *)(param_2 + 0x19c34);
          puVar5[2] = 0xf;
          *puVar5 = DAT_004b6b3c;
          puVar5[3] = uVar7;
          *(undefined1 *)(puVar5 + 4) = uVar9;
          *(undefined1 *)((int)puVar5 + 0x11) = uVar8;
        }
        func_0048C378((int *)(param_1 + 0x18b4),0,puVar5);
        if (iVar3 != 1) {
          func_0010983C(*puVar2,iVar3);
        }
        return;
      }
      uVar7 = uVar7 + 1;
      if (*(int *)(param_2 + 0x26c) <= (int)uVar7) {
        return;
      }
      piVar6 = (int *)(param_2 + 0x1c4);
    } while (5 < uVar7);
  } while( true );
}

