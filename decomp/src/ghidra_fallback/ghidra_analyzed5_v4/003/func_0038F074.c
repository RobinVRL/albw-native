#include "ghidra_types.h"

extern int func_00291CB4(int param_1,undefined1 param_2);
extern int func_002D5D3C(void *param_1);
extern int func_002E3608(int param_1,undefined1 param_2,uint param_3);
extern int func_002FCC34(int param_1);
extern int func_0051D188(int *param_1,int param_2,int param_3);
extern int func_0068C690(float *param_1);
extern undefined4 DAT_0038f130;
extern undefined4 DAT_0038f134;
extern int *DAT_0038f138;

// USA 0038F074 <- EU 0038F050 (Ghidra, non-matching)
// GLOBAL DAT_0038f130 undefined4
// GLOBAL DAT_0038f134 undefined4
// GLOBAL DAT_0038f138 int *

undefined4 func_0038F074(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar3 = DAT_0038f130;
  *param_1 = DAT_0038f134;
  *(undefined4 *)(param_1[0x13] + 0x100) = uVar3;
  *(undefined1 *)(param_1[0x14] + 0x166) = 1;
  func_002E3608(*DAT_0038f138,1,0xb);
  if (*(char *)((int)param_1 + 0x71) != '\0') {
    iVar1 = func_0068C690((float *)(param_1 + 0x1f));
    iVar2 = param_1[10];
    uVar3 = param_1[0x20];
    uVar4 = param_1[0x21];
    *(undefined4 *)(iVar2 + 0x5b4) = param_1[0x1f];
    *(undefined4 *)(iVar2 + 0x5b8) = uVar3;
    *(undefined4 *)(iVar2 + 0x5bc) = uVar4;
    *(undefined4 *)(param_1[10] + 0x5c0) = param_1[0x25];
    if (*(char *)(param_1[0xb] + 0x161) == '\0') {
      uVar3 = func_0051D188((int *)param_1[0xf],iVar1,*(int *)param_1[0xf]);
      *(char *)param_1[0x10] = (char)uVar3;
    }
    else {
      *(bool *)param_1[0x10] = *(char *)(param_1[0xb] + 0x161) == '\x01';
    }
  }
  if (*(short *)(param_1[0xb] + 0x42) == 0x6a) {
    func_00291CB4(param_1[0xb],0);
  }
  if (*(int *)(param_1[0xb] + 100) != 0) {
    func_002FCC34(*(int *)(param_1[0xb] + 100));
  }
  return func_002D5D3C(param_1);
}

