#include "ghidra_types.h"

extern void func_0010F1F8(int *param_1,float fparam_0);
extern int func_002E1B70(int *param_1);
extern int func_0036746C(undefined4 *param_1);
extern int func_00494194(int param_1);
extern int func_004941CC(void *param_1);
extern int func_004A1520();
extern int DAT_0030d0f0;
extern int *DAT_0030d0f4;
extern int DAT_0030d0f8;

// USA 0030D008 <- EU 0030CFE4 (Ghidra, non-matching)
// GLOBAL DAT_0030d0f0 int
// GLOBAL DAT_0030d0f4 int *
// GLOBAL DAT_0030d0f8 int

undefined4 func_0030D008(int *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  float in_s0;
  
  iVar4 = DAT_0030d0f0;
  piVar1 = param_1 + -3;
  *param_1 = DAT_0030d0f0 + 0x54;
  *piVar1 = iVar4;
  func_002E1B70(param_1 + 7);
  func_002E1B70(param_1 + 9);
  iVar4 = *DAT_0030d0f4;
  piVar2 = DAT_0030d0f4;
  if (iVar4 != 0) {
    piVar2 = *(int **)(iVar4 + 100);
  }
  if (iVar4 != 0 && piVar2 != (int *)0x0) {
    if ((int *)piVar2[5] == piVar1) {
      piVar2[5] = 0;
    }
    if ((*(char *)((int)param_1 + 0xcd) != '\0') &&
       (*(char *)(*(int *)(iVar4 + 100) + 0x18) == '\0')) {
      func_00494194((int)piVar1);
      *(undefined1 *)((int)param_1 + 0xcd) = 0;
    }
  }
  param_1[4] = 0;
  iVar4 = DAT_0030d0f8;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[0x3a] = iVar4;
  if ((char)param_1[0x48] != '\0') {
    iVar4 = param_1[0x41];
    if (iVar4 != 0) {
      param_1[0x41] = 0;
      func_0010F1F8(param_1 + 0x3e,in_s0);
      *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + -1;
    }
    *(undefined1 *)(param_1 + 0x48) = 0;
  }
  puVar3 = func_004A1520(param_1 + 0x3a);
  puVar3 = func_0036746C(puVar3 + -0x18);
  func_002E1B70(puVar3 + -0x19);
  func_002E1B70(puVar3 + -0x1b);
  puVar3 = func_004A1520(puVar3 + -0x22);
  return func_004941CC(puVar3 + -3);
}

