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

// USA 0030D010 <- EU 0030CFEC (Ghidra, non-matching)
// GLOBAL DAT_0030d0f0 int
// GLOBAL DAT_0030d0f4 int *
// GLOBAL DAT_0030d0f8 int

int * func_0030D010(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  float in_s0;
  
  iVar3 = DAT_0030d0f0;
  param_1[3] = DAT_0030d0f0 + 0x54;
  *param_1 = iVar3;
  func_002E1B70(param_1 + 10);
  func_002E1B70(param_1 + 0xc);
  iVar3 = *DAT_0030d0f4;
  piVar1 = DAT_0030d0f4;
  if (iVar3 != 0) {
    piVar1 = *(int **)(iVar3 + 100);
  }
  if (iVar3 != 0 && piVar1 != (int *)0x0) {
    if ((int *)piVar1[5] == param_1) {
      piVar1[5] = 0;
    }
    if ((*(char *)((int)param_1 + 0xd9) != '\0') &&
       (*(char *)(*(int *)(iVar3 + 100) + 0x18) == '\0')) {
      func_00494194((int)param_1);
      *(undefined1 *)((int)param_1 + 0xd9) = 0;
    }
  }
  param_1[7] = 0;
  iVar3 = DAT_0030d0f8;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0x3d] = iVar3;
  if ((char)param_1[0x4b] != '\0') {
    iVar3 = param_1[0x44];
    if (iVar3 != 0) {
      param_1[0x44] = 0;
      func_0010F1F8(param_1 + 0x41,in_s0);
      *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + -1;
    }
    *(undefined1 *)(param_1 + 0x4b) = 0;
  }
  puVar2 = func_004A1520(param_1 + 0x3d);
  puVar2 = func_0036746C(puVar2 + -0x18);
  func_002E1B70(puVar2 + -0x19);
  func_002E1B70(puVar2 + -0x1b);
  puVar2 = func_004A1520(puVar2 + -0x22);
  piVar1 = func_004941CC(puVar2 + -3);
  return piVar1;
}

