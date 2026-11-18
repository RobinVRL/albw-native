#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_003ABB24(int *param_1,uint param_2,int param_3);
extern int func_003B147C(int *param_1,undefined4 param_2,undefined4 param_3);
extern int func_0052FBA0(int param_1,uint param_2);
extern float DAT_003b1f8c;
extern int *DAT_003b1f90;
extern uint *DAT_003b1f94;
extern undefined4 *DAT_003b1f98;
extern undefined4 DAT_003b1f9c;

// USA 003B1E64 <- EU 003B1E40 (Ghidra, non-matching)
// GLOBAL DAT_003b1f8c float
// GLOBAL DAT_003b1f90 int *
// GLOBAL DAT_003b1f94 uint *
// GLOBAL DAT_003b1f98 undefined4 *
// GLOBAL DAT_003b1f9c undefined4

undefined4 func_003B1E64(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)(*(int *)(param_1[0x12] + 0x8dc) + 0x14);
  if (*(char *)(iVar1 + 0x1c) == '\0') {
    if (*(float *)(iVar1 + 0x10) < DAT_003b1f8c) {
      if (DAT_003b1f8c < *(float *)(iVar1 + 8)) {
        return 0;
      }
    }
    else if (*(float *)(iVar1 + 8) != *(float *)(iVar1 + 0x14)) {
      return 0;
    }
    piVar2 = (int *)func_0052FBA0(*DAT_003b1f90 + 0x3dbbc,param_1[0x24]);
    if (((*DAT_003b1f94 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_003b1f94), iVar1 != 0)) {
      *DAT_003b1f98 = DAT_003b1f9c;
    }
    if ((piVar2 == (int *)0x0) || (iVar1 = (**(code **)*piVar2)(piVar2,DAT_003b1f98), iVar1 == 0)) {
      piVar2 = (int *)0x0;
    }
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x58))(piVar2,*(undefined4 *)(param_1[0x12] + 0x2cc));
                    /* WARNING: Could not recover jumptable at 0x003b1f4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      return (**(code **)(*param_1 + 0x138))(param_1,0xb,1);
    }
    piVar2 = *(int **)(param_1[0x12] + 0x93c);
    iVar1 = func_003ABB24(piVar2,1,1);
    if (iVar1 != 0) {
      return func_003B147C((int *)piVar2[1],1,1);
    }
  }
  return 0;
}

