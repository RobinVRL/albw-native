#include "ghidra_types.h"

extern int func_005822A0(int param_1,uint param_2,undefined4 param_3);
extern int *DAT_00547604;
extern int *DAT_00547608;
extern int *DAT_0054760c;
extern int *DAT_00547610;
extern int *DAT_00547614;

// USA 00547578 <- EU 00547550 (Ghidra, non-matching)
// GLOBAL DAT_00547604 int *
// GLOBAL DAT_00547608 int *
// GLOBAL DAT_0054760c int *
// GLOBAL DAT_00547610 int *
// GLOBAL DAT_00547614 int *

byte func_00547578(int *param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  
  piVar1 = DAT_00547604;
  if (param_1[0x12] != 3) {
    bVar2 = func_005822A0(*DAT_00547604,(uint)*(ushort *)((int)param_1 + 0x3a),
                          (uint)*(byte *)((int)param_1 + 0x37));
    if (bVar2) {
      return 1;
    }
    if ((param_1[0x12] != 7) ||
       ((((iVar3 = *(int *)(*param_1 + 8), iVar3 != *DAT_00547608 && (iVar3 != *DAT_0054760c)) &&
         (iVar3 != *DAT_00547610)) && (iVar3 != *DAT_00547614)))) {
      if (*(ushort *)(param_1 + 0xe) == 0) {
        bVar2 = true;
      }
      else {
        bVar2 = func_005822A0(*piVar1,(uint)*(ushort *)(param_1 + 0xe),
                              (uint)*(byte *)((int)param_1 + 0x36));
      }
      return bVar2 ^ 1;
    }
  }
  return 0;
}

