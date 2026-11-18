#include "ghidra_types.h"

extern int func_0014E2A0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5 ,int param_6);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_0052FBDC(int param_1,int param_2,int param_3);
extern int *DAT_001c0d1c;

// USA 001C0C34 <- EU 001C0C34 (Ghidra, non-matching)
// GLOBAL DAT_001c0d1c int *

void func_001C0C34(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  uint in_fpscr;
  float fparam_0;
  
  func_0014E2A0(param_1,*(undefined4 *)(param_1 + 0x434),0,0x1200,0,0);
  uVar1 = *(uint *)(*(int *)(param_1 + 0x428) + *(char *)(param_1 + 0x410) * 8 + 4);
  piVar3 = (int *)(*(int *)(param_1 + 0x428) + *(char *)(param_1 + 0x410) * 8);
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
  if (*(char *)(param_1 + 0x478) == '\0') {
    *(undefined1 *)(param_1 + 0x478) = 1;
    if (0 < *(short *)(param_1 + 0x5e)) {
      iVar2 = func_0052FBDC(*DAT_001c0d1c + 0x3dbbc,(int)*(short *)(param_1 + 0x5e),0);
      if (iVar2 == 0) {
        *(undefined1 *)(param_1 + 0x478) = 0;
      }
      else {
        *(undefined4 *)(param_1 + 0x474) = *(undefined4 *)(iVar2 + 0x2cc);
      }
    }
  }
  return;
}

