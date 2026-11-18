#include "ghidra_types.h"

extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_004BC8D8(int param_1);
extern int func_004BCAA8(int param_1);
extern int func_0053F9B8(int param_1);
extern int func_006177C0(int param_1,int param_2,undefined1 param_3);
extern undefined4 DAT_001cb778;
extern int *DAT_001cb77c;
extern int DAT_001cb780;

// USA 001CB680 <- EU 001CB680 (Ghidra, non-matching)
// GLOBAL DAT_001cb778 undefined4
// GLOBAL DAT_001cb77c int *
// GLOBAL DAT_001cb780 int

undefined4 func_001CB680(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  int *piVar6;
  uint in_fpscr;
  float fparam_0;
  
  *(undefined4 *)(param_1 + 0x838) = DAT_001cb778;
  piVar2 = (int *)(*(int *)(param_1 + 0x97c) + *(char *)(param_1 + 0x964) * 8);
  uVar4 = *(uint *)(*(int *)(param_1 + 0x97c) + *(char *)(param_1 + 0x964) * 8 + 4);
  piVar6 = (int *)(*(int *)(param_1 + 0x974) + ((int)uVar4 >> 1));
  if ((uVar4 & 1) == 0) {
    pcVar5 = (code *)*piVar2;
  }
  else {
    pcVar5 = *(code **)(*piVar2 + *piVar6);
  }
  (*pcVar5)(piVar6);
  iVar3 = *(int *)(param_1 + 0x960) + 1;
  *(int *)(param_1 + 0x960) = iVar3;
  if (*(int *)(param_1 + 0x970) != 0) {
    fparam_0 = (float)VectorUnsignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(*(int *)(param_1 + 0x970),1,fparam_0);
  }
  iVar3 = func_0053F9B8(*DAT_001cb77c);
  if (((iVar3 == 0) && (cVar1 = *(char *)(DAT_001cb780 + param_1), cVar1 != '\x05')) &&
     (cVar1 != '\x06')) {
    if (cVar1 == '\0') {
      func_006177C0(param_1,5,0);
    }
    else {
      func_006177C0(param_1,6,0);
    }
  }
  func_004BCAA8(param_1);
  return func_004BC8D8(param_1);
}

