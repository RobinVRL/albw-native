#include "ghidra_types.h"

extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_004BC8D8(int param_1);
extern int func_0052FBDC(int param_1,int param_2,int param_3);
extern int func_00588BE4(int param_1);
extern int *DAT_0065270c;
extern int *DAT_00652710;

// USA 00652624 <- EU 006525FC (Ghidra, non-matching)
// GLOBAL DAT_0065270c int *
// GLOBAL DAT_00652710 int *

void func_00652624(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint in_fpscr;
  float fparam_0;
  
  uVar1 = *(uint *)(*(int *)(param_1 + 0x97c) + *(char *)(param_1 + 0x964) * 8 + 4);
  pcVar4 = *(code **)(*(int *)(param_1 + 0x97c) + *(char *)(param_1 + 0x964) * 8);
  if ((uVar1 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(int *)(*(int *)(param_1 + 0x974) + ((int)uVar1 >> 1)));
  }
  (*pcVar4)((int)(*(int *)(param_1 + 0x974)) + ((int)uVar1 >> 1));
  iVar2 = *(int *)(param_1 + 0x960) + 1;
  *(int *)(param_1 + 0x960) = iVar2;
  if (*(int *)(param_1 + 0x970) != 0) {
    fparam_0 = (float)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(*(int *)(param_1 + 0x970),1,fparam_0);
  }
  func_004BC8D8(param_1);
  if (*(char *)(param_1 + 0x9d3) == '\x01') {
    *(undefined1 *)(param_1 + 0x9d3) = 2;
    if (((0 < *(short *)(param_1 + 0x5e)) &&
        (iVar2 = func_0052FBDC(*DAT_0065270c + 0x3dbbc,(int)*(short *)(param_1 + 0x5e),0),
        iVar2 != 0)) && (iVar3 = func_00588BE4(iVar2), iVar3 == *DAT_00652710)) {
      uVar5 = *(undefined4 *)(param_1 + 0x9c4);
      uVar6 = *(undefined4 *)(param_1 + 0x9c8);
      *(undefined4 *)(iVar2 + 0x368) = *(undefined4 *)(param_1 + 0x9c0);
      *(undefined4 *)(iVar2 + 0x36c) = uVar5;
      *(undefined4 *)(iVar2 + 0x370) = uVar6;
      uVar5 = *(undefined4 *)(param_1 + 0x9c4);
      uVar6 = *(undefined4 *)(param_1 + 0x9c8);
      *(undefined4 *)(iVar2 + 0x3d0) = *(undefined4 *)(param_1 + 0x9c0);
      *(undefined4 *)(iVar2 + 0x3d4) = uVar5;
      *(undefined4 *)(iVar2 + 0x3d8) = uVar6;
    }
    *(undefined1 *)(param_1 + 0x476) = 1;
  }
  return;
}

