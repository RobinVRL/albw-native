#include "ghidra_types.h"

extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0048C378(int *param_1,int param_2,undefined4 param_3);
extern int func_00687AF0(float *param_1,int *param_2);
extern int func_00688CA0(int param_1,int *param_2);
extern int func_00689A2C(undefined4 *param_1,undefined4 param_2,int param_3);
extern int func_00691E50(int *param_1,int *param_2);
extern undefined4 DAT_004b4dac;
extern undefined4 DAT_004b4db0;
extern float DAT_004b4db4;
extern undefined4 *DAT_004b4db8;
extern undefined4 DAT_004b4dbc;

// USA 004B4C08 <- EU 004B4BE0 (Ghidra, non-matching)
// GLOBAL DAT_004b4dac undefined4
// GLOBAL DAT_004b4db0 undefined4
// GLOBAL DAT_004b4db4 float
// GLOBAL DAT_004b4db8 undefined4 *
// GLOBAL DAT_004b4dbc undefined4

void func_004B4C08(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define aiStack_90 ((int *)(albw_frame + 0x0))
  #define auStack_84 ((undefined1 *)(albw_frame + 0xc))
  #define local_6c (*(float *)(albw_frame + 0x24))
  #define local_68 (*(float *)(albw_frame + 0x28))
  #define aiStack_64 ((int *)(albw_frame + 0x2c))
  #define auStack_58 ((undefined1 *)(albw_frame + 0x38))
  #define local_48 ((float *)(albw_frame + 0x48))
  #define local_3c (*(float *)(albw_frame + 0x54))
  #define local_38 (*(float *)(albw_frame + 0x58))
  #define local_34 ((float *)(albw_frame + 0x5c))
  puVar2 = func_00689A2C(aiStack_64,auStack_58,0x10);
  uVar1 = DAT_004b4db0;
  *(undefined1 *)puVar2[1] = 0;
  *puVar2 = uVar1;
  func_00688CA0(param_3,aiStack_64);
  uVar3 = func_00691E50((int *)(param_2 + 0x270),aiStack_64);
  if (-1 < (int)uVar3) {
    local_3c = DAT_004b4db4;
    local_38 = DAT_004b4db4;
    local_34[0] = DAT_004b4db4;
    puVar2 = func_00689A2C(aiStack_90,auStack_84,0x10);
    *(undefined1 *)puVar2[1] = 0;
    *puVar2 = uVar1;
    func_00688CA0(param_3,aiStack_90);
    func_00687AF0(&local_3c,aiStack_90);
    func_00688CA0(param_3,aiStack_90);
    func_00687AF0(&local_38,aiStack_90);
    func_00688CA0(param_3,aiStack_90);
    func_00687AF0(local_34,aiStack_90);
    func_00688CA0(param_3,aiStack_90);
    func_00687AF0(local_48,aiStack_90);
    func_00688CA0(param_3,aiStack_90);
    func_00687AF0(&local_6c,aiStack_90);
    func_00688CA0(param_3,aiStack_90);
    func_00687AF0(&local_68,aiStack_90);
    puVar2 = DAT_004b4db8;
    if (*(int *)(param_1 + 0x20) == 0) {
      iVar5 = 1;
    }
    else {
      iVar5 = func_0010983C(*DAT_004b4db8,*(int *)(param_1 + 0x20));
    }
    puVar4 = (undefined4 *)func_0010BAB4(0x28);
    if (puVar4 != (undefined4 *)0x0) {
      puVar4[1] = *(undefined4 *)(param_2 + 0x19c34);
      puVar4[2] = 0x17;
      *puVar4 = DAT_004b4dbc;
      puVar4[3] = uVar3;
      puVar4[4] = ALBW_AS_U32(local_3c);
      puVar4[5] = ALBW_AS_U32(local_38);
      puVar4[6] = ALBW_AS_U32(local_34[0]);
      puVar4[7] = ALBW_AS_U32(local_48[0]);
      puVar4[8] = ALBW_AS_U32(local_6c);
      puVar4[9] = ALBW_AS_U32(local_68);
    }
    func_0048C378((int *)(param_1 + 0x18b4),0,puVar4);
    if (iVar5 != 1) {
      func_0010983C(*puVar2,iVar5);
    }
  }
  return;
}

