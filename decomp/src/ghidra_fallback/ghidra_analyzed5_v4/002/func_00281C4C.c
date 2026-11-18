#include "ghidra_types.h"

extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_004BC8D8(int param_1);
extern int func_004C06FC(int param_1,int param_2,int param_3);
extern int func_004C684C(int param_1,undefined4 param_2,int param_3);
extern int *DAT_00281d3c;

// USA 00281C4C <- EU 00281C74 (Ghidra, non-matching)
// GLOBAL DAT_00281d3c int *

void func_00281C4C(int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  uint in_fpscr;
  float fparam_0;
  
  if (((*(char *)(param_1 + 0x993) != '\0') && (*DAT_00281d3c != 0)) &&
     (iVar1 = func_004C684C(*DAT_00281d3c,param_1 + 0x99c,(int)*(short *)(param_1 + 0x32)),
     iVar1 != 0)) {
    *(undefined1 *)(param_1 + 0x993) = 0;
  }
  piVar4 = *(int **)(param_1 + 0x974);
  piVar3 = (int *)(*(int *)(param_1 + 0x97c) + *(char *)(param_1 + 0x964) * 8);
  uVar2 = *(uint *)(*(int *)(param_1 + 0x97c) + *(char *)(param_1 + 0x964) * 8 + 4);
  if ((uVar2 & 1) != 0) {
    piVar3 = (int *)(*piVar3 + *(int *)((int)piVar4 + ((int)uVar2 >> 1)));
  }
  (*(code *)*piVar3)();
  iVar1 = *(int *)(param_1 + 0x960) + 1;
  *(int *)(param_1 + 0x960) = iVar1;
  if (*(int *)(param_1 + 0x970) != 0) {
    fparam_0 = (float)VectorUnsignedToFloat(iVar1,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(*(int *)(param_1 + 0x970),1,fparam_0);
  }
  func_004BC8D8(param_1);
  if (*(int *)(param_1 + 0x7a4) != 0) {
    if ((*(int **)(param_1 + 0x7b8) != (int *)0x0) && (*(byte *)(param_1 + 0x917) != 0)) {
      func_00169A80(*(int **)(param_1 + 0x7b8),0,(uint)*(byte *)(param_1 + 0x917),piVar4);
      func_00168E9C(*(int **)(param_1 + 0x7b8),*(int *)(param_1 + 0x7a4),(int *)0x0);
    }
    func_004C06FC(param_1,*(int *)(param_1 + 0x7a4),*(int *)(param_1 + 0x8fc));
    *(undefined1 *)(param_1 + 0x912) = 2;
  }
  return;
}

