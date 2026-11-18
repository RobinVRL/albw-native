#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_004F68AC();
extern int func_004FACD4(int param_1,int *param_2,undefined4 param_3,int *param_4);
extern int func_00588C3C(void);
extern int *DAT_001a7190;
extern uint *DAT_001a7194;
extern undefined4 *DAT_001a7198;
extern undefined4 DAT_001a719c;

// USA 001A70CC <- EU 001A70CC (Ghidra, non-matching)
// GLOBAL DAT_001a7190 int *
// GLOBAL DAT_001a7194 uint *
// GLOBAL DAT_001a7198 undefined4 *
// GLOBAL DAT_001a719c undefined4

undefined4 func_001A70CC(int param_1,int param_2,undefined *param_3,float *param_4)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  func_004F68AC(param_1,param_2,param_3,param_4);
  if ((param_2 != 0) && (bVar1 = func_00588C3C(), !bVar1)) {
    return 0;
  }
  piVar3 = *(int **)(*DAT_001a7190 + 0x44);
  if (((*DAT_001a7194 & 1) == 0) && (iVar2 = func_00100174((int *)DAT_001a7194), iVar2 != 0)) {
    *DAT_001a7198 = DAT_001a719c;
  }
  if (piVar3 != (int *)0x0) {
    param_3 = *(undefined **)(*piVar3 + 8);
    iVar2 = (*(code *)param_3)(piVar3,DAT_001a7198);
    if (iVar2 != 0) goto LAB_001a7160;
  }
  piVar3 = (int *)0x0;
LAB_001a7160:
  if ((piVar3 == (int *)0x0) && (bVar1 = func_00588C3C(), !bVar1)) {
    return 0;
  }
  return func_004FACD4(param_1,(int *)0x1,param_3,(int *)param_4);
}

