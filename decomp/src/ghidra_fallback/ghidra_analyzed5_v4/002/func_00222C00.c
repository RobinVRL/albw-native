#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_004F68AC();
extern int func_004FACD4(int param_1,int *param_2,undefined4 param_3,int *param_4);
extern int func_00588C3C(void);
extern int *DAT_00222cc4;
extern uint *DAT_00222cc8;
extern undefined4 *DAT_00222ccc;
extern undefined4 DAT_00222cd0;

// USA 00222C00 <- EU 00222C00 (Ghidra, non-matching)
// GLOBAL DAT_00222cc4 int *
// GLOBAL DAT_00222cc8 uint *
// GLOBAL DAT_00222ccc undefined4 *
// GLOBAL DAT_00222cd0 undefined4

undefined4 func_00222C00(int param_1,int param_2,undefined *param_3,float *param_4)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  func_004F68AC(param_1,param_2,param_3,param_4);
  if ((param_2 != 0) && (bVar1 = func_00588C3C(), !bVar1)) {
    return 0;
  }
  piVar3 = *(int **)(*DAT_00222cc4 + 0x44);
  if (((*DAT_00222cc8 & 1) == 0) && (iVar2 = func_00100174((int *)DAT_00222cc8), iVar2 != 0)) {
    *DAT_00222ccc = DAT_00222cd0;
  }
  if (piVar3 != (int *)0x0) {
    param_3 = *(undefined **)(*piVar3 + 8);
    iVar2 = (*(code *)param_3)(piVar3,DAT_00222ccc);
    if (iVar2 != 0) goto LAB_00222c94;
  }
  piVar3 = (int *)0x0;
LAB_00222c94:
  if ((piVar3 == (int *)0x0) && (bVar1 = func_00588C3C(), !bVar1)) {
    return 0;
  }
  return func_004FACD4(param_1,(int *)0x1,param_3,(int *)param_4);
}

