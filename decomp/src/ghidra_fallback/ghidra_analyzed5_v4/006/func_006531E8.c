#include "ghidra_types.h"

extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_004BC8D8(int param_1);
extern int func_004BEA40(int param_1,int param_2,undefined4 param_3,int *param_4);
extern int func_0052FBDC(int param_1,int param_2,int param_3);
extern int func_00588BE4(int param_1);
extern int *DAT_006532dc;
extern int *DAT_006532e0;

// USA 006531E8 <- EU 006531C0 (Ghidra, non-matching)
// GLOBAL DAT_006532dc int *
// GLOBAL DAT_006532e0 int *

void func_006531E8(int param_1)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 uVar7;
  uint in_fpscr;
  float fparam_0;
  
  piVar6 = (int *)(*(char *)(param_1 + 0x964) * 8 + 4);
  uVar1 = *(uint *)(*(int *)(param_1 + 0x97c) + (int)piVar6);
  pcVar3 = *(code **)(*(int *)(param_1 + 0x97c) + *(char *)(param_1 + 0x964) * 8);
  if ((uVar1 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(int *)(*(int *)(param_1 + 0x974) + ((int)uVar1 >> 1)));
  }
  (*pcVar3)((int)(*(int *)(param_1 + 0x974)) + ((int)uVar1 >> 1));
  iVar4 = *(int *)(param_1 + 0x970);
  iVar2 = *(int *)(param_1 + 0x960) + 1;
  *(int *)(param_1 + 0x960) = iVar2;
  if (iVar4 != 0) {
    fparam_0 = (float)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(iVar4,1,fparam_0);
  }
  func_004BC8D8(param_1);
  func_004BEA40(param_1,0,iVar4,piVar6);
  if (*(char *)(param_1 + 0x9d3) == '\x01') {
    *(undefined1 *)(param_1 + 0x9d3) = 2;
    if (((0 < *(short *)(param_1 + 0x5e)) &&
        (iVar2 = func_0052FBDC(*DAT_006532dc + 0x3dbbc,(int)*(short *)(param_1 + 0x5e),0),
        iVar2 != 0)) && (iVar4 = func_00588BE4(iVar2), iVar4 == *DAT_006532e0)) {
      uVar5 = *(undefined4 *)(param_1 + 0x9c4);
      uVar7 = *(undefined4 *)(param_1 + 0x9c8);
      *(undefined4 *)(iVar2 + 0x368) = *(undefined4 *)(param_1 + 0x9c0);
      *(undefined4 *)(iVar2 + 0x36c) = uVar5;
      *(undefined4 *)(iVar2 + 0x370) = uVar7;
      uVar5 = *(undefined4 *)(param_1 + 0x9c4);
      uVar7 = *(undefined4 *)(param_1 + 0x9c8);
      *(undefined4 *)(iVar2 + 0x3d0) = *(undefined4 *)(param_1 + 0x9c0);
      *(undefined4 *)(iVar2 + 0x3d4) = uVar5;
      *(undefined4 *)(iVar2 + 0x3d8) = uVar7;
    }
    *(undefined1 *)(param_1 + 0x476) = 1;
  }
  return;
}

