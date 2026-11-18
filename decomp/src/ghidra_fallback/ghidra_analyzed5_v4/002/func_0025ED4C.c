#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern ulonglong func_0011624C(uint param_1,uint param_2,uint param_3,uint param_4);
extern int func_00232F40(int param_1);
extern int func_0049BCF4(uint param_1,uint param_2);
extern int *DAT_0025edec;
extern int *DAT_0025edf0;
extern uint *DAT_0025edf4;

// USA 0025ED4C <- EU 0025ED74 (Ghidra, non-matching)
// GLOBAL DAT_0025edec int *
// GLOBAL DAT_0025edf0 int *
// GLOBAL DAT_0025edf4 uint *

undefined4 func_0025ED4C(int param_1)

{
  int *piVar1;
  int iVar2;
  ulonglong uVar3;
  
  piVar1 = DAT_0025edec;
  if (*(char *)(param_1 + 0x8c) != '\0') {
    func_00232F40(*DAT_0025edec);
  }
  if (((piVar1[3] & 1U) == 0) && (iVar2 = func_00100174(DAT_0025edf0), iVar2 != 0)) {
    uVar3 = func_0011624C(*DAT_0025edf4,DAT_0025edf4[1],1000,0);
    *(ulonglong *)(piVar1 + 4) = uVar3;
  }
  return func_0049BCF4(piVar1[4],piVar1[5]);
}

