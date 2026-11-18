#include "ghidra_types.h"

extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0048C378(int *param_1,int param_2,undefined4 param_3);
extern int func_00687AF0(float *param_1,int *param_2);
extern int func_00688CA0(int param_1,int *param_2);
extern int func_00689A2C(undefined4 *param_1,undefined4 param_2,int param_3);
extern int func_00691D84(int *param_1,int *param_2);
extern undefined4 DAT_004b16c0;
extern undefined4 DAT_004b16c4;
extern undefined4 DAT_004b16c8;
extern undefined4 DAT_004b16cc;
extern undefined4 *DAT_004b16d0;
extern undefined4 DAT_004b16d4;

// USA 004B1580 <- EU 004B1558 (Ghidra, non-matching)
// GLOBAL DAT_004b16c0 undefined4
// GLOBAL DAT_004b16c4 undefined4
// GLOBAL DAT_004b16c8 undefined4
// GLOBAL DAT_004b16cc undefined4
// GLOBAL DAT_004b16d0 undefined4 *
// GLOBAL DAT_004b16d4 undefined4

void func_004B1580(int param_1,int *param_2,int param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define aiStack_80 ((int *)(albw_frame + 0x0))
  #define auStack_74 ((undefined1 *)(albw_frame + 0xc))
  #define local_4c (*(float *)(albw_frame + 0x34))
  #define fStack_48 (*(float *)(albw_frame + 0x38))
  #define afStack_44 ((float *)(albw_frame + 0x3c))
  #define aiStack_3c ((int *)(albw_frame + 0x44))
  #define auStack_30 ((undefined1 *)(albw_frame + 0x50))
  puVar1 = func_00689A2C(aiStack_3c,auStack_30,0x10);
  *(undefined1 *)puVar1[1] = 0;
  *puVar1 = DAT_004b16c4;
  func_00688CA0(param_3,aiStack_3c);
  uVar2 = func_00691D84(param_2,aiStack_3c);
  if (-1 < (int)uVar2) {
    puVar1 = func_00689A2C(aiStack_80,auStack_74,0x20);
    *(undefined1 *)puVar1[1] = 0;
    *puVar1 = DAT_004b16cc;
    func_00688CA0(param_3,aiStack_80);
    func_00687AF0(&local_4c,aiStack_80);
    func_00688CA0(param_3,aiStack_80);
    func_00687AF0(&fStack_48,aiStack_80);
    func_00688CA0(param_3,aiStack_80);
    func_00687AF0(afStack_44,aiStack_80);
    puVar1 = DAT_004b16d0;
    if (*(int *)(param_1 + 0x20) == 0) {
      iVar4 = 1;
    }
    else {
      iVar4 = func_0010983C(*DAT_004b16d0,*(int *)(param_1 + 0x20));
    }
    puVar3 = (undefined4 *)func_0010BAB4(0x1c);
    if (puVar3 != (undefined4 *)0x0) {
      puVar3[1] = param_2[0x670d];
      puVar3[2] = 0x1f;
      *puVar3 = DAT_004b16d4;
      puVar3[3] = uVar2;
      puVar3[4] = ALBW_AS_U32(local_4c);
      puVar3[5] = ALBW_AS_U32(fStack_48);
      puVar3[6] = ALBW_AS_U32(afStack_44[0]);
    }
    func_0048C378((int *)(param_1 + 0x18b4),0,puVar3);
    if (iVar4 != 1) {
      func_0010983C(*puVar1,iVar4);
    }
  }
  return;
}

