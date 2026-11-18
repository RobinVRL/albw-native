#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_00400254(undefined4 *param_1,int param_2,float *param_3);
extern int func_00404138(undefined4 param_1,undefined1 param_2);
extern int func_004066B4(undefined4 *param_1,char *param_2,int *param_3);
extern int func_004073FC(int param_1,int param_2,uint param_3);
extern int func_004074A4(byte *param_1,uint param_2);
extern int func_00407524(undefined1 *param_1);
extern undefined4 DAT_004055ec;
extern undefined *DAT_004055f0;

// USA 004054E4 <- EU 004054C4 (Ghidra, non-matching)
// GLOBAL DAT_004055ec undefined4
// GLOBAL DAT_004055f0 undefined *

byte * func_004054E4(undefined4 *param_1,int param_2,int param_3,float *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  
  puVar1 = func_00400254(param_1,param_2,param_4);
  *puVar1 = DAT_004055ec;
  iVar2 = func_00100118((int)(puVar1 + 0x2a),DAT_004055f0,4,4);
  pbVar3 = func_00407524((undefined1 *)(iVar2 + 0x10));
  if (param_3 == 0) {
    piVar7 = (int *)ALBW_PTR_BITS(param_4[7]);
    param_3 = param_2;
  }
  else {
    piVar7 = (int *)ALBW_PTR_BITS(param_4[8]);
  }
  uVar8 = (uint)*(byte *)(param_3 + 0x66);
  if (3 < uVar8) {
    uVar8 = 3;
  }
  if (uVar8 != 0) {
    func_004074A4(pbVar3,uVar8);
  }
  uVar4 = 0;
  do {
    iVar2 = uVar4 * 4;
    iVar5 = uVar4 * 4;
    uVar4 = uVar4 + 1;
    *(undefined4 *)(pbVar3 + -0xb8 + iVar5 + 0xa8) = *(undefined4 *)(param_3 + iVar2 + 0x54);
  } while ((int)uVar4 < 4);
  if (uVar8 != 0) {
    uVar4 = (uint)*pbVar3;
  }
  if (uVar8 != 0 && uVar4 != 0) {
    func_004073FC((int)pbVar3,param_3 + 0x68,uVar8);
  }
  iVar6 = piVar7[2];
  iVar5 = *(int *)(iVar6 + 0xc + (uint)*(ushort *)(param_3 + 100) * 4);
  puVar1 = (undefined4 *)func_00404138(0xa0,4);
  iVar2 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = func_004066B4(puVar1,(char *)(iVar6 + iVar5),piVar7);
  }
  *(int *)(pbVar3 + -0x14) = iVar2;
  return pbVar3 + -0xb8;
}

