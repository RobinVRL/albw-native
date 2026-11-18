#include "ghidra_types.h"

extern int func_0036C058(int param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4);
extern int func_0036C2B8(undefined4 param_1,undefined4 param_2);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_0052FBDC(int param_1,int param_2,int param_3);
extern int func_00588F08(int param_1);
extern undefined4 *DAT_00209288;
extern int *DAT_0020928c;
extern int *DAT_00209290;
extern undefined4 DAT_00209294;

// USA 00209174 <- EU 00209174 (Ghidra, non-matching)
// GLOBAL DAT_00209288 undefined4 *
// GLOBAL DAT_0020928c int *
// GLOBAL DAT_00209290 int *
// GLOBAL DAT_00209294 undefined4

undefined4 func_00209174(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  
  *(undefined4 *)(param_1 + 0xd6c) = 0;
  *(undefined4 *)(param_1 + 0xd70) = 0;
  *(undefined1 *)(param_1 + 0xb70) = 3;
  *(int *)(param_1 + 0xaa8) = param_1 + 0xd5c;
  func_0036C058(param_1 + 0xa7c,0xffffffff,0xffffffff,0);
  func_0036C2B8(param_1 + 0xa7c,*DAT_00209288);
  piVar1 = DAT_0020928c;
  iVar7 = 0;
  if (*(char *)(param_1 + 0x5c) != '\0') {
    do {
      iVar4 = (int)*(short *)(param_1 + iVar7 * 6 + 0x5e);
      if ((0 < iVar4) && (iVar4 = func_0052FBDC(*piVar1 + 0x3dbbc,iVar4,0), iVar4 != 0)) {
        *(uint *)(iVar4 + 0x2e0) = *(uint *)(iVar4 + 0x2e0) | 2;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < (int)(uint)*(byte *)(param_1 + 0x5c));
  }
  puVar3 = (undefined4 *)func_00588F08(*DAT_00209290);
  uVar2 = DAT_00209294;
  uVar5 = *puVar3;
  uVar6 = puVar3[1];
  *(undefined4 *)(param_1 + 0xb8c) = puVar3[2];
  *(undefined4 *)(param_1 + 0xb84) = uVar5;
  *(undefined4 *)(param_1 + 0xb88) = uVar6;
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) & 0xffffffef;
  *(undefined4 *)(param_1 + 0x3dc) = uVar2;
  *(undefined4 *)(param_1 + 0x3e0) = uVar2;
  *(undefined4 *)(param_1 + 0x3e4) = uVar2;
  return func_004FABDC(param_1,7,6,0);
}

