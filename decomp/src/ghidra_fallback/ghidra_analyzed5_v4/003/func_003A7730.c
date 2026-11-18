#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_002FDB08(int *param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_005416A0(int param_1);
extern int *DAT_003a7874;
extern uint *DAT_003a7878;
extern undefined4 *DAT_003a787c;
extern undefined4 DAT_003a7880;

// USA 003A7730 <- EU 003A770C (Ghidra, non-matching)
// GLOBAL DAT_003a7874 int *
// GLOBAL DAT_003a7878 uint *
// GLOBAL DAT_003a787c undefined4 *
// GLOBAL DAT_003a7880 undefined4

void func_003A7730(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  if ((((*(char *)(param_1 + 0xb8) != '\0') && (*(char *)(param_1 + 0xb9) == '\0')) &&
      (*(int *)(param_1 + 0x98) != 0)) &&
     (iVar1 = func_005416A0(*(int *)(param_1 + 0x98)), iVar1 != 0)) {
    *(undefined1 *)(param_1 + 0xb9) = 1;
    iVar1 = *(int *)(*(int *)(param_1 + 0x28) + 0x5f4);
    *(float *)(iVar1 + 0x3b4c) = -*(float *)(iVar1 + 0x3b4c);
    *(float *)(iVar1 + 0x3b50) = -*(float *)(iVar1 + 0x3b50);
    *(float *)(iVar1 + 0x3b54) = -*(float *)(iVar1 + 0x3b54);
    *(float *)(iVar1 + 0x3b64) = -*(float *)(iVar1 + 0x3b64);
    *(float *)(iVar1 + 0x3b68) = -*(float *)(iVar1 + 0x3b68);
    *(float *)(iVar1 + 0x3b6c) = -*(float *)(iVar1 + 0x3b6c);
  }
  if (*(char *)(param_1 + 0xe0) != '\0') {
    puVar2 = (undefined4 *)func_0052FBA0(*DAT_003a7874 + 0x3dbbc,*(uint *)(param_1 + 0xbc));
    if (((*DAT_003a7878 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_003a7878), iVar1 != 0)) {
      *DAT_003a787c = DAT_003a7880;
    }
    if ((puVar2 == (undefined4 *)0x0) ||
       (iVar1 = (**(code **)*puVar2)(puVar2,DAT_003a787c), iVar1 == 0)) {
      puVar2 = (undefined4 *)0x0;
    }
    if ((puVar2 != (undefined4 *)0x0) && (iVar1 = func_005416A0((int)puVar2), iVar1 != 0)) {
      *(undefined1 *)(param_1 + 0xe0) = 0;
    }
  }
  if (((*(char *)(param_1 + 0xe1) != '\0') &&
      (piVar3 = *(int **)(*(int *)(param_1 + 0x2c) + 0x70), piVar3 != (int *)0x0)) &&
     (iVar1 = func_002FDB08(piVar3), iVar1 != 0)) {
    *(undefined1 *)(param_1 + 0xe1) = 0;
  }
  return;
}

