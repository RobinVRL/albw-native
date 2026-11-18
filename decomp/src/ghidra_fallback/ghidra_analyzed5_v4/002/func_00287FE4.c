#include "ghidra_types.h"

extern int func_003615E8(int param_1,float fparam_0,float fparam_1,float fparam_2,float fparam_3);
extern int func_00547514(int param_1);
extern int func_00556BE0(int param_1);
extern int *DAT_00288044;

// USA 00287FE4 <- EU 0028800C (Ghidra, non-matching)
// GLOBAL DAT_00288044 int *

void func_00287FE4(int param_1)

{
  int *piVar1;
  int iVar2;
  float in_s0;
  float in_s1;
  float in_s2;
  float in_s3;
  
  piVar1 = DAT_00288044;
  iVar2 = func_00556BE0(*DAT_00288044);
  if (iVar2 == 0) {
    func_003615E8(*piVar1,in_s0,in_s1,in_s2,in_s3);
    func_00547514(param_1 + 4);
    *(undefined1 *)(param_1 + 0x2d7) = 1;
  }
  return;
}

