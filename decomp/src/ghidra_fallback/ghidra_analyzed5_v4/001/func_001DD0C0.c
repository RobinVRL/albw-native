#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_002D4194(int param_1,int param_2);
extern int func_004CE7F4(int param_1,int param_2);
extern void func_004CE804(int param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_004D012C(int param_1,int param_2);
extern int func_0052FBA0(int param_1,uint param_2);
extern int *DAT_001dd1c8;
extern uint *DAT_001dd1cc;
extern undefined4 *DAT_001dd1d0;
extern undefined4 DAT_001dd1d4;

// USA 001DD0C0 <- EU 001DD0C0 (Ghidra, non-matching)
// GLOBAL DAT_001dd1c8 int *
// GLOBAL DAT_001dd1cc uint *
// GLOBAL DAT_001dd1d0 undefined4 *
// GLOBAL DAT_001dd1d4 undefined4

undefined4 func_001DD0C0(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  float in_s0;
  
  iVar1 = *(int *)(param_1 + 0x10);
  func_004CE7F4(*(int *)(iVar1 + 0x600),param_2);
  iVar4 = *(int *)(*(int *)(iVar1 + 0x604) + 0x28);
  func_004CE804(*(int *)(iVar4 + 8),param_3,0,0,in_s0);
  func_004D012C(iVar4,param_4);
  iVar4 = 0;
  do {
    iVar2 = *(int *)(iVar1 + iVar4 * 4 + 0x630);
    if (iVar2 != 0) {
      func_002D4194(iVar2,param_2);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x19);
  piVar3 = (int *)func_0052FBA0(*DAT_001dd1c8 + 0x3dbbc,*(uint *)(iVar1 + 0x620));
  if (((*DAT_001dd1cc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_001dd1cc), iVar1 != 0)) {
    *DAT_001dd1d0 = DAT_001dd1d4;
  }
  if ((piVar3 == (int *)0x0) || (iVar1 = (**(code **)*piVar3)(piVar3,DAT_001dd1d0), iVar1 == 0)) {
    piVar3 = (int *)0x0;
  }
  if (piVar3 == (int *)0x0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x001dd1c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  return (**(code **)(*piVar3 + 0x68))(piVar3);
}

