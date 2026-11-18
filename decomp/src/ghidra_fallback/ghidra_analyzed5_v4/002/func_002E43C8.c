#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_004F68AC();
extern int func_004FACD4(int param_1,int *param_2,undefined4 param_3,int *param_4);
extern int func_00588C3C(void);
extern int *DAT_002e4468;
extern uint *DAT_002e446c;
extern undefined4 *DAT_002e4470;
extern undefined4 DAT_002e4474;

// USA 002E43C8 <- EU 002E43A4 (Ghidra, non-matching)
// GLOBAL DAT_002e4468 int *
// GLOBAL DAT_002e446c uint *
// GLOBAL DAT_002e4470 undefined4 *
// GLOBAL DAT_002e4474 undefined4

undefined4 func_002E43C8(int param_1,int param_2,undefined *param_3,float *param_4)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  func_004F68AC(param_1,param_2,param_3,param_4);
  if ((param_2 != 0) && (bVar1 = func_00588C3C(), !bVar1)) {
    return 0;
  }
  piVar3 = *(int **)(*DAT_002e4468 + 0x44);
  if (((*DAT_002e446c & 1) == 0) && (iVar2 = func_00100174((int *)DAT_002e446c), iVar2 != 0)) {
    *DAT_002e4470 = DAT_002e4474;
  }
  if (piVar3 != (int *)0x0) {
    param_3 = *(undefined **)(*piVar3 + 8);
    iVar2 = (*(code *)param_3)(piVar3,DAT_002e4470);
    if (iVar2 != 0) goto LAB_002e4438;
  }
  piVar3 = (int *)0x0;
LAB_002e4438:
  if ((piVar3 == (int *)0x0) && (bVar1 = func_00588C3C(), !bVar1)) {
    return 0;
  }
  return func_004FACD4(param_1,(int *)0x1,param_3,(int *)param_4);
}

