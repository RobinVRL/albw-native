// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00556A90();
extern int func_00588BE4(int param_1);
extern int *DAT_00148ac8;
extern int *DAT_00148acc;
extern int *DAT_00148ad0;
extern int *DAT_00148ad4;
extern int *DAT_00148ad8;
extern int *DAT_00148adc;
extern uint *DAT_00148ae0;
extern int *DAT_00148ae4;
extern undefined4 *DAT_00148ae8;
extern undefined4 DAT_00148aec;

// USA 00148978 <- EU 00148978 (Ghidra, non-matching)
// GLOBAL DAT_00148ac8 int *
// GLOBAL DAT_00148acc int *
// GLOBAL DAT_00148ad0 int *
// GLOBAL DAT_00148ad4 int *
// GLOBAL DAT_00148ad8 int *
// GLOBAL DAT_00148adc int *
// GLOBAL DAT_00148ae0 uint *
// GLOBAL DAT_00148ae4 int *
// GLOBAL DAT_00148ae8 undefined4 *
// GLOBAL DAT_00148aec undefined4

undefined4 func_00148978(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  piVar1 = DAT_00148ac8;
  iVar2 = func_0052FBA0(*DAT_00148ac8 + 0x3dbbc,*(uint *)(param_2 + 0x28));
  if (iVar2 != 0) {
    iVar2 = func_00588BE4(iVar2);
    if ((((iVar2 == *DAT_00148acc) || (iVar2 == *DAT_00148ad0)) || (iVar2 == *DAT_00148ad4)) ||
       (iVar2 == *DAT_00148ad8)) {
      *(undefined1 *)(param_1 + 0x4a1) = 0;
    }
    if (iVar2 == *DAT_00148adc) {
      iVar2 = 0;
      if (*(uint *)(param_1 + 0x4a8) == 0) {
        iVar2 = func_00556A90(*DAT_00148ae4);
      }
      else {
        puVar3 = (undefined4 *)func_0052FBA0(*piVar1 + 0x3dbbc,*(uint *)(param_1 + 0x4a8));
        if (((*DAT_00148ae0 & 1) == 0) && (iVar4 = func_00100174((int *)DAT_00148ae0), iVar4 != 0))
        {
          *DAT_00148ae8 = DAT_00148aec;
        }
        if ((puVar3 == (undefined4 *)0x0) ||
           (iVar4 = (**(code **)*puVar3)(puVar3,DAT_00148ae8), iVar4 == 0)) {
          puVar3 = (undefined4 *)0x0;
        }
        if (puVar3 == (undefined4 *)0x0) {
          return 0;
        }
      }
      if ((iVar2 != 0) && (iVar2 == *(int *)(param_2 + 0x28))) {
        *(undefined1 *)(param_1 + 0x4a1) = 0;
      }
    }
  }
  return 1;
}

