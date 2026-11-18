#include "ghidra_types.h"

extern int func_0010C0B8(int param_1);
extern int func_0010DA7C(undefined4 *param_1,undefined4 param_2,int param_3);
extern int func_0010EEE0(int param_1);
extern int func_0010EEE8(undefined4 *param_1,undefined4 param_2);
extern int func_0010F1DC(int *param_1,int *param_2);
extern int DAT_0010e0b0;
extern int DAT_0010e0b4;

// USA 0010DF58 <- EU 0010DF58 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// PARAM param_6 Stack[0x4]:1 undefined1
// PARAM param_7 Stack[0x8]:4 int
// GLOBAL DAT_0010e0b0 int
// GLOBAL DAT_0010e0b4 int

undefined4 *
func_0010DF58(undefined4 *param_1,int param_2,int param_3,int param_4,int param_5,undefined1 param_6
             ,int param_7)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  
  piVar1 = func_0010DA7C(param_1,param_3,1);
  piVar1[4] = DAT_0010e0b0;
  piVar1[5] = *(int *)(param_2 + 4);
  iVar3 = DAT_0010e0b4;
  *piVar1 = DAT_0010e0b4;
  piVar1[6] = iVar3 + 100;
  piVar1[7] = param_4;
  piVar1[8] = param_5;
  piVar1[9] = param_3;
  piVar1[0xb] = (int)(piVar1 + 10);
  piVar1[0xc] = 0;
  piVar1[10] = (int)(piVar1 + 10);
  piVar1[0xd] = -1;
  piVar1[0xe] = 0;
  piVar1[0xf] = 0;
  piVar1[0x11] = (int)(piVar1 + 0x10);
  piVar1[0x12] = 0;
  piVar1[0x10] = (int)(piVar1 + 0x10);
  piVar1[0x13] = -1;
  *(undefined1 *)(piVar1 + 0x14) = param_6;
  puVar2 = func_0010EEE8(piVar1 + 0x15,param_3);
  puVar2[7] = 4;
  if (param_7 != 0) {
    puVar2[7] = 5;
  }
  puVar4 = (undefined4 *)0x0;
  if ((puVar2[7] & 1) != 0) {
    func_0010C0B8((int)puVar2);
    puVar4 = puVar2;
  }
  puVar2[-8] = 0x38;
  puVar2[-2] = 8;
  if (param_3 != 0) {
    iVar3 = 0;
    if ((*(uint *)(param_3 + 0x70) & 1) != 0) {
      func_0010C0B8(param_3 + 0x54);
      iVar3 = param_3 + 0x54;
    }
    func_0010F1DC((int *)(param_3 + 0x28),(int *)(*(int *)(param_3 + 0x34) + (int)(puVar2 + -0x15)))
    ;
    *(int *)(param_3 + 0x30) = *(int *)(param_3 + 0x30) + 1;
    if (iVar3 != 0) {
      func_0010EEE0(iVar3);
    }
  }
  if (puVar4 != (undefined4 *)0x0) {
    func_0010EEE0((int)puVar4);
  }
  return puVar2 + -0x15;
}

