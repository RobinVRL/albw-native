#include "ghidra_types.h"

extern int func_0031B6A0(int param_1,int param_2,int param_3);
extern int func_00479548(int param_1,uint param_2);
extern int func_0047A8C4(undefined4 param_1);
extern int func_0066BF2C(undefined4 *param_1,char param_2);
extern int func_0066BFFC(undefined4 *param_1,char param_2);
extern int func_0066E7A0(undefined4 *param_1,char param_2);

// USA 00477584 <- EU 0047755C (Ghidra, non-matching)

undefined4 func_00477584(int param_1)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  undefined1 uVar9;
  int iVar10;
  
  iVar7 = *(int *)(param_1 + 0x200);
  if (*(char *)(iVar7 + 0x24) != '\x04') {
    return 0;
  }
  bVar3 = false;
  bVar2 = false;
  uVar9 = 0xff;
  if (*(char *)(param_1 + 0x308) == '\x14') {
    cVar1 = *(char *)(*(int *)(param_1 + 500) + 0xe4);
    iVar4 = (int)cVar1;
    if (iVar4 != *(char *)(iVar7 + 0xb4)) {
      iVar10 = *(int *)(param_1 + 0x1f8);
      if ((int)*(char *)(iVar10 + 0xe4) == (int)*(char *)(iVar7 + 0xb4)) {
        func_0031B6A0(iVar10 + 0x60,iVar4,1);
        *(char *)(iVar10 + 0xe4) = cVar1;
      }
      else if (iVar4 != -1) {
        uVar5 = func_0047A8C4(iVar4);
        uVar9 = (undefined1)uVar5;
      }
      iVar7 = *(int *)(param_1 + 500);
      cVar1 = *(char *)(*(int *)(param_1 + 0x200) + 0xb4);
      func_0031B6A0(iVar7 + 0x60,(int)cVar1,0);
      *(char *)(iVar7 + 0xe4) = cVar1;
      if ('\a' < *(char *)(*(int *)(param_1 + 500) + 0x3c)) {
        func_0066BFFC((undefined4 *)(*(int *)(param_1 + 500) + 0x38),'\v');
      }
      bVar2 = true;
      goto LAB_004776c0;
    }
  }
  if (*(char *)(param_1 + 0x308) == '\x15') {
    cVar1 = *(char *)(*(int *)(param_1 + 0x1f8) + 0xe4);
    iVar4 = (int)cVar1;
    if (iVar4 != *(char *)(iVar7 + 0xb4)) {
      iVar10 = *(int *)(param_1 + 500);
      if ((int)*(char *)(iVar10 + 0xe4) == (int)*(char *)(iVar7 + 0xb4)) {
        func_0031B6A0(iVar10 + 0x60,iVar4,1);
        *(char *)(iVar10 + 0xe4) = cVar1;
      }
      else if (iVar4 != -1) {
        uVar5 = func_0047A8C4(iVar4);
        uVar9 = (undefined1)uVar5;
      }
      iVar7 = *(int *)(param_1 + 0x1f8);
      cVar1 = *(char *)(*(int *)(param_1 + 0x200) + 0xb4);
      func_0031B6A0(iVar7 + 0x60,(int)cVar1,0);
      *(char *)(iVar7 + 0xe4) = cVar1;
      if ('\a' < *(char *)(*(int *)(param_1 + 0x1f8) + 0x3c)) {
        func_0066BFFC((undefined4 *)(*(int *)(param_1 + 0x1f8) + 0x38),'\v');
      }
      bVar3 = true;
    }
  }
LAB_004776c0:
  uVar6 = (uint)*(char *)(param_1 + 0x30a);
  if (uVar6 == 0x14 || uVar6 == 0x15) {
    cVar1 = *(char *)(*(int *)(param_1 + 0x200) + 0xb4);
    if (cVar1 != -1) {
      uVar6 = 0;
      do {
        piVar8 = (int *)(param_1 + 0x168);
        if (uVar6 < 0x14) {
          piVar8 = piVar8 + uVar6;
        }
        if (*(char *)(*piVar8 + 0xe0) == cVar1) goto LAB_00477710;
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < 0x14);
    }
    uVar6 = 0xffffffff;
  }
LAB_00477710:
  *(char *)(param_1 + 0x308) = (char)uVar6;
  func_00479548(param_1,0xffffffff);
  *(undefined1 *)(param_1 + 0x30a) = uVar9;
  if (bVar2 || bVar3) {
    func_0066BF2C((undefined4 *)(*(int *)(param_1 + 0x200) + 0x20),'\0');
    return func_0066E7A0((undefined4 *)(param_1 + 0xf0),'\x04');
  }
  return func_0066E7A0((undefined4 *)(param_1 + 0xf0),'\x05');
}

