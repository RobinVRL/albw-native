#include "ghidra_types.h"

extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0048C378(int *param_1,int param_2,undefined4 param_3);
extern int func_00687850(uint *param_1,int *param_2,int param_3);
extern int func_00687AF0(float *param_1,int *param_2);
extern int func_00688CA0(int param_1,int *param_2);
extern int func_00689A2C(undefined4 *param_1,undefined4 param_2,int param_3);
extern undefined4 DAT_004b5bbc;
extern undefined4 DAT_004b5bc0;
extern undefined4 *DAT_004b5bc4;
extern undefined4 DAT_004b5bc8;

// USA 004B5A7C <- EU 004B5A54 (Ghidra, non-matching)
// GLOBAL DAT_004b5bbc undefined4
// GLOBAL DAT_004b5bc0 undefined4
// GLOBAL DAT_004b5bc4 undefined4 *
// GLOBAL DAT_004b5bc8 undefined4

void func_004B5A7C(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define local_88 (*(float *)(albw_frame + 0x8))
  #define local_84 ((float *)(albw_frame + 0xc))
  #define aiStack_7c ((int *)(albw_frame + 0x14))
  #define auStack_70 ((undefined1 *)(albw_frame + 0x20))
  #define aiStack_60 ((int *)(albw_frame + 0x30))
  #define auStack_54 ((undefined1 *)(albw_frame + 0x3c))
  #define aiStack_44 ((int *)(albw_frame + 0x4c))
  #define auStack_38 ((undefined1 *)(albw_frame + 0x58))
  #define local_28 ((uint *)(albw_frame + 0x68))
  puVar2 = func_00689A2C(aiStack_44,auStack_38,0x10);
  uVar1 = DAT_004b5bc0;
  *(undefined1 *)puVar2[1] = 0;
  *puVar2 = uVar1;
  func_00688CA0(param_3,aiStack_44);
  func_00687AF0(&local_88,aiStack_44);
  puVar2 = func_00689A2C(aiStack_60,auStack_54,0x10);
  *(undefined1 *)puVar2[1] = 0;
  *puVar2 = uVar1;
  func_00688CA0(param_3,aiStack_60);
  func_00687AF0(local_84,aiStack_60);
  puVar2 = func_00689A2C(aiStack_7c,auStack_70,0x10);
  *(undefined1 *)puVar2[1] = 0;
  *puVar2 = uVar1;
  func_00688CA0(param_3,aiStack_7c);
  func_00687850(local_28,aiStack_7c,-1);
  puVar2 = DAT_004b5bc4;
  if (*(int *)(param_1 + 0x20) == 0) {
    iVar4 = 1;
  }
  else {
    iVar4 = func_0010983C(*DAT_004b5bc4,*(int *)(param_1 + 0x20));
  }
  puVar3 = (undefined4 *)func_0010BAB4(0x18);
  if (puVar3 != (undefined4 *)0x0) {
    puVar3[1] = *(undefined4 *)(param_2 + 0x19c34);
    puVar3[2] = 6;
    *puVar3 = DAT_004b5bc8;
    puVar3[3] = ALBW_AS_U32(local_88);
    puVar3[4] = ALBW_AS_U32(local_84[0]);
    *(bool *)(puVar3 + 5) = local_28[0] != 0;
  }
  func_0048C378((int *)(param_1 + 0x18b4),0,puVar3);
  if (iVar4 != 1) {
    func_0010983C(*puVar2,iVar4);
  }
  return;
}

