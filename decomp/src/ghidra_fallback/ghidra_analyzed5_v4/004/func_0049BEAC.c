#include "ghidra_types.h"

extern int func_0010CE7C(undefined4 *param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0010CF28(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0010F1DC(int *param_1,int *param_2);
extern void func_0010F1F8(int *param_1,float fparam_0);
extern int func_0010F8E8(undefined4 *param_1,int param_2,int *param_3);
extern int func_0010F924(undefined4 *param_1);
extern int DAT_0049bfd0;
extern int DAT_0049bfd4;
extern int *DAT_0049bfd8;

// USA 0049BEAC <- EU 0049BE84 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:1 undefined1
// PARAM param_6 Stack[0x4]:4 undefined4
// PARAM param_7 Stack[0x8]:4 undefined4
// PARAM param_8 Stack[0xc]:4 int
// GLOBAL DAT_0049bfd0 int
// GLOBAL DAT_0049bfd4 int
// GLOBAL DAT_0049bfd8 int *

undefined4 *
func_0049BEAC(undefined4 *param_1,int param_2,int *param_3,undefined4 param_4,undefined1 param_5,
             undefined4 param_6,undefined4 param_7,int param_8)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  float in_s0;
  
  piVar1 = func_0010CE7C(param_1);
  piVar1[4] = DAT_0049bfd0;
  piVar1[5] = *(int *)(param_2 + 4);
  iVar5 = DAT_0049bfd4;
  piVar1[6] = DAT_0049bfd4 + 0x4c;
  *piVar1 = iVar5;
  puVar2 = func_0010F924(piVar1 + 7);
  puVar2[0xe] = param_7;
  puVar2[0xf] = 0;
  puVar2[0x10] = 0;
  puVar2[0x12] = 0;
  puVar2[0x13] = 0;
  *(undefined1 *)(puVar2 + 0x14) = param_5;
  puVar2[0x15] = param_6;
  puVar2[0x16] = 0;
  puVar2[0x17] = 0;
  puVar2[0x18] = 0;
  puVar2[0x1b] = 0xfffffffe;
  puVar2[0x1a] = param_4;
  puVar2[0x19] = 0;
  puVar2[0x11] = puVar2 + -7;
  func_0010F8E8(puVar2,param_8,param_3);
  uVar3 = func_0010CEE0(param_7,param_3,4);
  puVar2[0x19] = uVar3;
  puVar4 = (undefined4 *)func_0010CF28(8,param_3,4);
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = 0;
    *(undefined1 *)(puVar4 + 1) = 1;
  }
  puVar2[0x18] = puVar4;
  iVar5 = *DAT_0049bfd8;
  if (iVar5 != 0) {
    iVar6 = puVar2[0x12];
    if (iVar6 != 0) {
      puVar2[0x12] = 0;
      func_0010F1F8(puVar2 + 0xf,in_s0);
      *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + -1;
    }
    puVar2[0x12] = (int *)(iVar5 + 0x14);
    func_0010F1DC((int *)(iVar5 + 0x14),puVar2 + 0xf);
    *(int *)(iVar5 + 0x1c) = *(int *)(iVar5 + 0x1c) + 1;
  }
  return puVar2 + -7;
}

