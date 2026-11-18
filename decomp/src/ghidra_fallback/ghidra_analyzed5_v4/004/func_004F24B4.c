#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_004F68AC();
extern int func_004FACD4(int param_1,int *param_2,undefined4 param_3,int *param_4);
extern int func_00588C3C(void);
extern int *DAT_004f2550;
extern uint *DAT_004f2554;
extern undefined4 *DAT_004f2558;
extern undefined4 DAT_004f255c;

// USA 004F24B4 <- EU 004F248C (Ghidra, non-matching)
// GLOBAL DAT_004f2550 int *
// GLOBAL DAT_004f2554 uint *
// GLOBAL DAT_004f2558 undefined4 *
// GLOBAL DAT_004f255c undefined4

undefined4 func_004F24B4(int param_1,int param_2,undefined *param_3,float *param_4)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  func_004F68AC(param_1,param_2,param_3,param_4);
  if ((param_2 != 0) && (bVar1 = func_00588C3C(), !bVar1)) {
    return 0;
  }
  piVar3 = *(int **)(*DAT_004f2550 + 0x44);
  if (((*DAT_004f2554 & 1) == 0) && (iVar2 = func_00100174((int *)DAT_004f2554), iVar2 != 0)) {
    *DAT_004f2558 = DAT_004f255c;
  }
  if (piVar3 != (int *)0x0) {
    param_3 = *(undefined **)(*piVar3 + 8);
    iVar2 = (*(code *)param_3)(piVar3,DAT_004f2558);
    if (iVar2 != 0) goto LAB_004f2520;
  }
  piVar3 = (int *)0x0;
LAB_004f2520:
  if ((piVar3 == (int *)0x0) && (bVar1 = func_00588C3C(), !bVar1)) {
    return 0;
  }
  return func_004FACD4(param_1,(int *)0x1,param_3,(int *)param_4);
}

