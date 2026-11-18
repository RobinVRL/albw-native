#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_0036C058(int param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4);
extern int func_0036C2B8(undefined4 param_1,undefined4 param_2);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_0053A554(int param_1,float *param_2,float *param_3);
extern int func_00588F08(int param_1);
extern undefined4 DAT_00268844;
extern int *DAT_00268848;
extern undefined4 *DAT_0026884c;
extern undefined4 *DAT_00268850;
extern float *DAT_00268854;

// USA 00268740 <- EU 00268768 (Ghidra, non-matching)
// GLOBAL DAT_00268844 undefined4
// GLOBAL DAT_00268848 int *
// GLOBAL DAT_0026884c undefined4 *
// GLOBAL DAT_00268850 undefined4 *
// GLOBAL DAT_00268854 float *

undefined4 func_00268740(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float *pfVar5;
  
  uVar3 = DAT_00268844;
  *(undefined4 *)(param_1 + 0x3dc) = DAT_00268844;
  *(undefined4 *)(param_1 + 0x3e0) = uVar3;
  *(undefined4 *)(param_1 + 0x3e4) = uVar3;
  *(undefined1 *)(param_1 + 0xbab) = 1;
  if (*(char *)(param_1 + 0xbac) != '\0') {
    return func_004FABDC(param_1,0x10,0xffffffff,0);
  }
  puVar1 = (undefined4 *)func_00588F08(*DAT_00268848);
  uVar3 = *puVar1;
  uVar4 = puVar1[1];
  *(undefined4 *)(param_1 + 0xabc) = puVar1[2];
  *(undefined4 *)(param_1 + 0xab4) = uVar3;
  *(undefined4 *)(param_1 + 0xab8) = uVar4;
  *(undefined1 *)(param_1 + 0xaa0) = 2;
  iVar2 = param_1 + 0x9ac;
  *(undefined4 **)(param_1 + 0x9d4) = (undefined4 *)(param_1 + 0xab4);
  func_0036C058(iVar2,0xffffffff,0xffffffff,0);
  func_0036C2B8(iVar2,*DAT_0026884c);
  func_0036C2B8(iVar2,*DAT_00268850);
  pfVar5 = (float *)(param_1 + 0x984);
  func_0053A554(param_1,pfVar5,DAT_00268854);
  return func_00115C54(pfVar5,pfVar5,(float *)(param_1 + 0x3d0));
}

