#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_004F68AC();
extern int func_004FACD4(int param_1,int *param_2,undefined4 param_3,int *param_4);
extern int func_00588C3C(void);
extern int *DAT_001b00d4;
extern uint *DAT_001b00d8;
extern undefined4 *DAT_001b00dc;
extern undefined4 DAT_001b00e0;

// USA 001B0010 <- EU 001B0010 (Ghidra, non-matching)
// GLOBAL DAT_001b00d4 int *
// GLOBAL DAT_001b00d8 uint *
// GLOBAL DAT_001b00dc undefined4 *
// GLOBAL DAT_001b00e0 undefined4

undefined4 func_001B0010(int param_1,int param_2,undefined *param_3,float *param_4)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  func_004F68AC(param_1,param_2,param_3,param_4);
  if ((param_2 != 0) && (bVar1 = func_00588C3C(), !bVar1)) {
    return 0;
  }
  piVar3 = *(int **)(*DAT_001b00d4 + 0x44);
  if (((*DAT_001b00d8 & 1) == 0) && (iVar2 = func_00100174((int *)DAT_001b00d8), iVar2 != 0)) {
    *DAT_001b00dc = DAT_001b00e0;
  }
  if (piVar3 != (int *)0x0) {
    param_3 = *(undefined **)(*piVar3 + 8);
    iVar2 = (*(code *)param_3)(piVar3,DAT_001b00dc);
    if (iVar2 != 0) goto LAB_001b00a4;
  }
  piVar3 = (int *)0x0;
LAB_001b00a4:
  if ((piVar3 == (int *)0x0) && (bVar1 = func_00588C3C(), !bVar1)) {
    return 0;
  }
  return func_004FACD4(param_1,(int *)0x1,param_3,(int *)param_4);
}

