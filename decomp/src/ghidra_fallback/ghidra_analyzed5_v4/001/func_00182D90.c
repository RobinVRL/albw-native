#include "ghidra_types.h"

extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_004BC8D8(int param_1);
extern int func_004C06FC(int param_1,int param_2,int param_3);

// USA 00182D90 <- EU 00182D90 (Ghidra, non-matching)

void func_00182D90(int param_1)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  uint in_fpscr;
  float fparam_0;
  
  piVar4 = (int *)(*(char *)(param_1 + 0x964) * 8 + 4);
  uVar1 = *(uint *)(*(int *)(param_1 + 0x97c) + (int)piVar4);
  pcVar3 = *(code **)(*(int *)(param_1 + 0x97c) + *(char *)(param_1 + 0x964) * 8);
  if ((uVar1 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(int *)(*(int *)(param_1 + 0x974) + ((int)uVar1 >> 1)));
  }
  (*pcVar3)((int)(*(int *)(param_1 + 0x974)) + ((int)uVar1 >> 1));
  iVar2 = *(int *)(param_1 + 0x960) + 1;
  *(int *)(param_1 + 0x960) = iVar2;
  if (*(int *)(param_1 + 0x970) != 0) {
    fparam_0 = (float)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
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

