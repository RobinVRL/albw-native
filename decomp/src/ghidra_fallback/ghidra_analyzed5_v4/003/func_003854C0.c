#include "ghidra_types.h"

extern int func_00385EE0(uint param_1);
extern int func_004A8BFC(int param_1,int param_2,uint param_3);
extern int func_004A9120(undefined4 param_1,int param_2);
extern int DAT_003855f4;
extern int *DAT_003855f8;

// USA 003854C0 <- EU 0038549C (Ghidra, non-matching)
// GLOBAL DAT_003855f4 int
// GLOBAL DAT_003855f8 int *

void func_003854C0(uint param_1)

{
  int *piVar1;
  int iVar2;
  ushort uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  float fVar8;
  
  if (0 < *(int *)(param_1 + 300)) {
    *(int *)(param_1 + 300) = *(int *)(param_1 + 300) + -1;
  }
  iVar2 = DAT_003855f4;
  iVar4 = *(int *)(*(int *)(*(int *)(param_1 + 4) + 0x8dc) + 0x14);
  fVar8 = *(float *)(iVar4 + 8) / *(float *)(iVar4 + 0x14);
  *(float *)(param_1 + 0x118) = fVar8;
  iVar2 = iVar2 + *(char *)(param_1 + 0x3a) * 0x20;
  bVar7 = fVar8 <= *(float *)(iVar2 + 8);
  if (!bVar7 || *(float *)(iVar2 + 8) == fVar8) {
    bVar7 = *(float *)(iVar2 + 0xc) <= fVar8;
  }
  if (bVar7) {
    if (*(float *)(iVar2 + 0xc) < fVar8) {
      fVar8 = *(float *)(iVar2 + 0xc);
    }
    *(float *)(param_1 + 0x118) = fVar8;
  }
  else {
    *(uint *)(param_1 + 300) = (uint)*(byte *)(iVar2 + 0x10);
  }
  piVar1 = DAT_003855f8;
  if (((*(char *)(param_1 + 0x35) == '\0') && (iVar2 = func_00385EE0(param_1), iVar2 != 0)) &&
     (*(char *)(param_1 + 0x37) == '\0')) {
    if (*(char *)(param_1 + 0x34) == '\0') {
      *(undefined1 *)(param_1 + 0x34) = 1;
      func_004A8BFC(*piVar1,param_1 + 0xb4,3);
      iVar2 = *(int *)(param_1 + 4);
      uVar5 = *(undefined4 *)(iVar2 + 0x958);
      uVar6 = *(undefined4 *)(iVar2 + 0x95c);
      *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(iVar2 + 0x960);
      *(undefined4 *)(param_1 + 0xd8) = uVar5;
      *(undefined4 *)(param_1 + 0xdc) = uVar6;
    }
  }
  else if (*(char *)(param_1 + 0x34) != '\0') {
    *(undefined1 *)(param_1 + 0x34) = 0;
    func_004A9120(*piVar1,param_1 + 0xb4);
  }
  if (*(char *)(param_1 + 0x3a) == -1) {
    *(undefined2 *)(param_1 + 0xe4) = 0;
  }
  else {
    uVar3 = (ushort)*(byte *)(param_1 + 0x3b);
    bVar7 = uVar3 == 3;
    if (bVar7) {
      uVar3 = 2;
    }
    if (!bVar7 && uVar3 != 4) {
      if (uVar3 == 5) {
        uVar3 = 6;
      }
      else {
        if (uVar3 != 6) {
          return;
        }
        uVar3 = 8;
      }
    }
    *(ushort *)(param_1 + 0xe4) = uVar3;
  }
  return;
}

