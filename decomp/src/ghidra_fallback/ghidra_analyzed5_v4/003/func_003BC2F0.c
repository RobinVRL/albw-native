#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010BAB4(undefined4 param_1);
extern int func_00231EE4(undefined4 *param_1);
extern int func_0048E140(int param_1,int *param_2,int param_3);
extern int DAT_003bc394;
extern undefined4 DAT_003bc398;
extern undefined4 DAT_003bc39c;
extern undefined *DAT_003bc3a0;

// USA 003BC2F0 <- EU 003BC2CC (Ghidra, non-matching)
// GLOBAL DAT_003bc394 int
// GLOBAL DAT_003bc398 undefined4
// GLOBAL DAT_003bc39c undefined4
// GLOBAL DAT_003bc3a0 undefined *

int func_003BC2F0(int param_1,int *param_2,int *param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(int *)(albw_frame + 0xc))
  (**(code **)(*param_3 + 8))(param_3);
  local_14 = param_3[1];
  local_18 = DAT_003bc394;
  (**(code **)(DAT_003bc394 + 8))(&local_18);
  puVar3 = func_0048E140(param_1,param_2,local_14);
  *puVar3 = DAT_003bc398;
  puVar4 = (undefined4 *)func_0010BAB4(0x84);
  puVar5 = (undefined4 *)0x0;
  if (puVar4 != (undefined4 *)0x0) {
    puVar5 = func_00231EE4(puVar4);
  }
  puVar3[0x7b] = puVar5;
  uVar1 = DAT_003bc39c;
  *(undefined1 *)(puVar3 + 0x7c) = 1;
  *(undefined1 *)((int)puVar3 + 0x1f1) = 1;
  *(undefined1 *)((int)puVar3 + 0x1f2) = 1;
  *puVar3 = uVar1;
  puVar3[0x7d] = 0;
  puVar3[0x7e] = 0;
  puVar2 = DAT_003bc3a0;
  puVar3[0x7f] = 0;
  iVar6 = func_00100118((int)(puVar3 + 0x80),puVar2,8,2);
  *(undefined1 *)(iVar6 + -0x10) = 1;
  *(undefined1 *)(iVar6 + -0xf) = 0;
  *(undefined1 *)(iVar6 + -0xe) = 1;
  return iVar6 + -0x200;
}

