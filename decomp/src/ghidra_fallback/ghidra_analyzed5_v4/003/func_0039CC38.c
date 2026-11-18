#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern undefined4 func_00151148(int param_1,int param_2);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_0039CAF0(int param_1);

// USA 0039CC38 <- EU 0039CC14 (Ghidra, non-matching)

void func_0039CC38(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  uint in_fpscr;
  float fparam_0;
  
  func_00151148(*(int *)(param_1 + 0x43c),0);
  piVar3 = (int *)(*(int *)(param_1 + 0x428) + *(char *)(param_1 + 0x410) * 8);
  uVar1 = *(uint *)(*(int *)(param_1 + 0x428) + *(char *)(param_1 + 0x410) * 8 + 4);
  if ((uVar1 & 1) != 0) {
    piVar3 = (int *)(*piVar3 + *(int *)(*(int *)(param_1 + 0x420) + ((int)uVar1 >> 1)));
  }
  (*(code *)*piVar3)();
  iVar2 = *(int *)(param_1 + 0x40c) + 1;
  *(int *)(param_1 + 0x40c) = iVar2;
  if (*(int *)(param_1 + 0x41c) != 0) {
    fparam_0 = (float)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(*(int *)(param_1 + 0x41c),1,fparam_0);
  }
  func_00115C54((float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3dc));
  func_0039CAF0(param_1);
  iVar2 = *(int *)(param_1 + 0x438);
  *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(param_1 + 0x3d0);
  *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(param_1 + 0x3d4);
  *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(param_1 + 0x3d8);
  piVar3 = *(int **)(param_1 + 0x438);
  if ((char)piVar3[0xc] == '\0') {
    *(undefined1 *)(piVar3 + 0xc) = 1;
    piVar3[7] = piVar3[1];
    piVar3[8] = piVar3[2];
    piVar3[9] = piVar3[3];
  }
  piVar3[4] = piVar3[7];
  piVar3[5] = piVar3[8];
  piVar3[6] = piVar3[9];
  (**(code **)(*piVar3 + 0x10))(piVar3);
  piVar3[7] = piVar3[1];
  piVar3[8] = piVar3[2];
  piVar3[9] = piVar3[3];
  return;
}

