#include "ghidra_types.h"

extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_005228A4(int param_1,int param_2);
extern int func_0066E7A0(undefined4 *param_1,char param_2);
extern int *DAT_0047c058;

// USA 0047BF90 <- EU 0047BF68 (Ghidra, non-matching)
// GLOBAL DAT_0047c058 int *

undefined4 func_0047BF90(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  char cVar4;
  int *piVar5;
  uint in_fpscr;
  float fparam_0;
  
  if ((*(char *)(param_1 + 0xf4) != '\v') &&
     (iVar1 = func_005228A4(*DAT_0047c058,*(int *)(param_1 + 0x10)), iVar1 == 0)) {
    if (*(char *)(param_1 + 0xd0) == '\x02') {
      cVar4 = '\v';
      puVar2 = (undefined4 *)(param_1 + 0xf0);
    }
    else {
      if ((4 < (int)*(char *)(*(int *)(param_1 + 500) + 0x3c) - 1U) &&
         (4 < (int)*(char *)(*(int *)(param_1 + 0x1f8) + 0x3c) - 1U)) goto LAB_0047bfe8;
      func_0066E7A0((undefined4 *)(param_1 + 0xf0),'\v');
      cVar4 = '\x02';
      puVar2 = (undefined4 *)(param_1 + 0xcc);
    }
    func_0066E7A0(puVar2,cVar4);
  }
LAB_0047bfe8:
  piVar5 = (int *)(*(int *)(param_1 + 0x10c) + *(char *)(param_1 + 0xf4) * 8);
  uVar3 = *(uint *)(*(int *)(param_1 + 0x10c) + *(char *)(param_1 + 0xf4) * 8 + 4);
  if ((uVar3 & 1) != 0) {
    piVar5 = (int *)(*piVar5 + *(int *)(*(int *)(param_1 + 0x104) + ((int)uVar3 >> 1)));
  }
  (*(code *)*piVar5)();
  iVar1 = *(int *)(param_1 + 0xf0) + 1;
  *(int *)(param_1 + 0xf0) = iVar1;
  if (*(int *)(param_1 + 0x100) == 0) {
    return 0;
  }
  fparam_0 = (float)VectorUnsignedToFloat(iVar1,(byte)(in_fpscr >> 0x15) & 3);
  return func_00352210(*(int *)(param_1 + 0x100),1,fparam_0);
}

