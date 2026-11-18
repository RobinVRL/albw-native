#include "ghidra_types.h"

extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_004CEAF0(int param_1);

// USA 0024E934 <- EU 0024E934 (Ghidra, non-matching)

undefined4 func_0024E934(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 extraout_r1;
  int *piVar4;
  uint in_fpscr;
  float fparam_0;
  
  iVar2 = *(int *)(param_1 + 0x40c);
  cVar1 = '\0';
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + 0x30);
  }
  if (iVar2 != 0 && cVar1 != '\0') {
    if (*(int **)(param_1 + 0x410) != (int *)0x0) {
      func_00169A80(*(int **)(param_1 + 0x410),param_2,param_3,param_4);
      param_3 = 0;
      func_00168E9C(*(int **)(param_1 + 0x410),*(int *)(param_1 + 0x40c),(int *)0x0);
      param_2 = extraout_r1;
    }
    if (*(int **)(param_1 + 0x414) != (int *)0x0) {
      func_00169A80(*(int **)(param_1 + 0x414),param_2,param_3,param_4);
      func_00168E9C(*(int **)(param_1 + 0x414),*(int *)(param_1 + 0x40c),(int *)0x0);
    }
    func_004CEAF0(*(int *)(param_1 + 0x40c));
  }
  piVar4 = (int *)(*(int *)(param_1 + 0x438) + *(char *)(param_1 + 0x420) * 8);
  uVar3 = *(uint *)(*(int *)(param_1 + 0x438) + *(char *)(param_1 + 0x420) * 8 + 4);
  if ((uVar3 & 1) != 0) {
    piVar4 = (int *)(*piVar4 + *(int *)(*(int *)(param_1 + 0x430) + ((int)uVar3 >> 1)));
  }
  (*(code *)*piVar4)();
  iVar2 = *(int *)(param_1 + 0x41c) + 1;
  *(int *)(param_1 + 0x41c) = iVar2;
  if (*(int *)(param_1 + 0x42c) == 0) {
    return 0;
  }
  fparam_0 = (float)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
  return func_00352210(*(int *)(param_1 + 0x42c),1,fparam_0);
}

