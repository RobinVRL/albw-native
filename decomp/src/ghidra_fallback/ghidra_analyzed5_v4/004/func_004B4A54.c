#include "ghidra_types.h"

extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0048C378(int *param_1,int param_2,undefined4 param_3);
extern int func_00687AF0(float *param_1,int *param_2);
extern int func_00688CA0(int param_1,int *param_2);
extern int func_00689A2C(undefined4 *param_1,undefined4 param_2,int param_3);
extern int func_00691D84(int *param_1,int *param_2);
extern undefined4 DAT_004b4b50;
extern undefined4 DAT_004b4b54;
extern undefined4 *DAT_004b4b58;
extern undefined4 DAT_004b4b5c;

// USA 004B4A54 <- EU 004B4A2C (Ghidra, non-matching)
// GLOBAL DAT_004b4b50 undefined4
// GLOBAL DAT_004b4b54 undefined4
// GLOBAL DAT_004b4b58 undefined4 *
// GLOBAL DAT_004b4b5c undefined4

void func_004B4A54(int param_1,int *param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define local_74 ((float *)(albw_frame + 0xc))
  #define aiStack_60 ((int *)(albw_frame + 0x20))
  #define auStack_54 ((undefined1 *)(albw_frame + 0x2c))
  #define aiStack_44 ((int *)(albw_frame + 0x3c))
  #define auStack_38 ((undefined1 *)(albw_frame + 0x48))
  puVar2 = func_00689A2C(aiStack_60,auStack_54,0x10);
  uVar1 = DAT_004b4b54;
  *(undefined1 *)puVar2[1] = 0;
  *puVar2 = uVar1;
  func_00688CA0(param_3,aiStack_60);
  uVar3 = func_00691D84(param_2,aiStack_60);
  if (-1 < (int)uVar3) {
    puVar2 = func_00689A2C(aiStack_44,auStack_38,0x10);
    *(undefined1 *)puVar2[1] = 0;
    *puVar2 = uVar1;
    func_00688CA0(param_3,aiStack_44);
    func_00687AF0(local_74,aiStack_44);
    puVar2 = DAT_004b4b58;
    if (*(int *)(param_1 + 0x20) == 0) {
      iVar5 = 1;
    }
    else {
      iVar5 = func_0010983C(*DAT_004b4b58,*(int *)(param_1 + 0x20));
    }
    puVar4 = (undefined4 *)func_0010BAB4(0x14);
    if (puVar4 != (undefined4 *)0x0) {
      puVar4[1] = param_2[0x670d];
      puVar4[2] = 0xb;
      *puVar4 = DAT_004b4b5c;
      puVar4[4] = ALBW_AS_U32(local_74[0]);
      puVar4[3] = uVar3;
    }
    func_0048C378((int *)(param_1 + 0x18b4),0,puVar4);
    if (iVar5 != 1) {
      func_0010983C(*puVar2,iVar5);
    }
  }
  return;
}

