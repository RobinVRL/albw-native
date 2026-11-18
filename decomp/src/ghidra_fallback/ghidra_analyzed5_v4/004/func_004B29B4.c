#include "ghidra_types.h"

extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0048C378(int *param_1,int param_2,undefined4 param_3);
extern int func_006875AC(int *param_1,int *param_2,int param_3);
extern int func_00688CA0(int param_1,int *param_2);
extern int func_00689A2C(undefined4 *param_1,undefined4 param_2,int param_3);
extern int func_00691884(int *param_1,int *param_2);
extern undefined4 DAT_004b2b30;
extern undefined4 DAT_004b2b34;
extern int DAT_004b2b40;
extern undefined4 *DAT_004b2b54;
extern undefined4 DAT_004b2b58;
extern char s_BLACK_004b2b44[];
extern char s_Black_004b2b4c[];
extern char s_black_004b2b38[];

// USA 004B29B4 <- EU 004B298C (Ghidra, non-matching)
// GLOBAL DAT_004b2b30 undefined4
// GLOBAL DAT_004b2b34 undefined4
// GLOBAL DAT_004b2b40 int
// GLOBAL DAT_004b2b54 undefined4 *
// GLOBAL DAT_004b2b58 undefined4
// GLOBAL s_BLACK_004b2b44 string
// GLOBAL s_Black_004b2b4c string
// GLOBAL s_black_004b2b38 string

void func_004B29B4(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 uVar5;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define aiStack_60 ((int *)(albw_frame + 0x0))
  #define auStack_54 ((undefined1 *)(albw_frame + 0xc))
  #define local_48 (*(int *)(albw_frame + 0x18))
  #define iStack_44 (*(int *)(albw_frame + 0x1c))
  #define aiStack_40 ((int *)(albw_frame + 0x20))
  #define local_38 (*(int *)(albw_frame + 0x28))
  #define local_34 (*(char * *)(albw_frame + 0x2c))
  #define local_30 (*(int *)(albw_frame + 0x30))
  #define local_2c (*(char * *)(albw_frame + 0x34))
  #define local_28 (*(int *)(albw_frame + 0x38))
  #define local_24 (*(char * *)(albw_frame + 0x3c))
  puVar1 = func_00689A2C(aiStack_60,auStack_54,10);
  *(undefined1 *)puVar1[1] = 0;
  *puVar1 = DAT_004b2b34;
  func_00688CA0(param_3,aiStack_60);
  iVar3 = DAT_004b2b40;
  local_34 = s_black_004b2b38;
  local_38 = DAT_004b2b40;
  iVar2 = func_00691884(aiStack_60,&local_38);
  if (iVar2 == 0) {
    local_2c = s_BLACK_004b2b44;
    local_30 = iVar3;
    iVar2 = func_00691884(aiStack_60,&local_30);
    if (iVar2 == 0) {
      local_24 = s_Black_004b2b4c;
      local_28 = iVar3;
      iVar3 = func_00691884(aiStack_60,&local_28);
      if (iVar3 == 0) {
        uVar5 = 0;
        goto LAB_004b2a40;
      }
    }
  }
  uVar5 = 1;
LAB_004b2a40:
  func_00688CA0(param_3,aiStack_60);
  func_006875AC(&local_48,aiStack_60,-1);
  func_00688CA0(param_3,aiStack_60);
  func_006875AC(&iStack_44,aiStack_60,-1);
  func_00688CA0(param_3,aiStack_60);
  func_006875AC(aiStack_40,aiStack_60,-1);
  puVar1 = DAT_004b2b54;
  if (*(int *)(param_1 + 0x20) == 0) {
    iVar3 = 1;
  }
  else {
    iVar3 = func_0010983C(*DAT_004b2b54,*(int *)(param_1 + 0x20));
  }
  puVar4 = (undefined4 *)func_0010BAB4(0x1c);
  if (puVar4 != (undefined4 *)0x0) {
    puVar4[1] = *(undefined4 *)(param_2 + 0x19c34);
    puVar4[2] = 0x2c;
    *puVar4 = DAT_004b2b58;
    puVar4[3] = local_48;
    puVar4[4] = iStack_44;
    puVar4[5] = aiStack_40[0];
    *(undefined1 *)(puVar4 + 6) = uVar5;
  }
  func_0048C378((int *)(param_1 + 0x18b4),0,puVar4);
  if (iVar3 != 1) {
    func_0010983C(*puVar1,iVar3);
  }
  return;
}

