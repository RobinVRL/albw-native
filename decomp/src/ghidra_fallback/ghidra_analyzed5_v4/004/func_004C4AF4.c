#include "ghidra_types.h"

extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_0010F1DC(int *param_1,int *param_2);
extern int func_0019B064(int param_1,int param_2,undefined4 param_3);
extern int func_002E01AC(uint param_1);
extern int func_004C4884(int param_1,int *param_2,undefined1 param_3);
extern int func_004C4C80(int param_1,int param_2);
extern undefined4 *DAT_004c4c54;

// USA 004C4AF4 <- EU 004C4ACC (Ghidra, non-matching)
// GLOBAL DAT_004c4c54 undefined4 *

int * func_004C4AF4(int param_1,int *param_2,int param_3)

{
  undefined4 *puVar1;
  byte bVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = *param_2;
  bVar2 = func_002E01AC(*(uint *)(iVar6 + 8));
  uVar3 = 0;
  if (bVar2 != 0) {
    do {
      if (*(int *)(iVar6 + 0x1c8 + uVar3 * 4) == 0) {
        func_0019B064(iVar6,0,0);
        break;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < bVar2);
  }
  piVar4 = (int *)func_004C4884(param_1,param_2,1);
  puVar1 = DAT_004c4c54;
  if (piVar4 != (int *)0x0) {
    if (*(char *)((int)piVar4 + 0x2d6) == '\0') {
      if (piVar4[0xb2] == 0) {
        iVar6 = 1;
      }
      else {
        iVar6 = func_0010983C(*DAT_004c4c54,piVar4[0xb2]);
      }
      iVar5 = piVar4[0xb3];
      *(int *)(param_1 + 0x3dbdc) = piVar4[1];
      *(int *)(param_1 + 0x3dbe0) = iVar5;
      (**(code **)(*piVar4 + 0x14))(piVar4);
      *(int *)(param_1 + 0x3dbdc) = 0;
      *(undefined4 *)(param_1 + 0x3dbe0) = 0;
      (**(code **)(*piVar4 + 8))(piVar4);
      if (iVar6 != 1) {
        func_0010983C(*puVar1,iVar6);
      }
    }
    if (*(char *)((int)piVar4 + 0x2d7) != '\0') {
      func_0010F1DC((int *)(param_1 + 0x3db9c),(int *)(*(int *)(param_1 + 0x3dba8) + (int)piVar4));
      *(int *)(param_1 + 0x3dba4) = *(int *)(param_1 + 0x3dba4) + 1;
      return (int *)0x0;
    }
    if (param_3 == 0) {
      func_0010F1DC((int *)(param_1 + 0x3db8c),(int *)(*(int *)(param_1 + 0x3db98) + (int)piVar4));
      *(int *)(param_1 + 0x3db94) = *(int *)(param_1 + 0x3db94) + 1;
    }
    else if (param_3 == 1) {
      func_004C4C80(param_1,(int)piVar4);
    }
  }
  return piVar4;
}

