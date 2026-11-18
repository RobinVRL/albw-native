// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00187490(int param_1);
extern int func_00187714(int *param_1);
extern int func_00187C38(int param_1);
extern int func_00188824(int *param_1);
extern int func_00189040(int param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_001E47F4(int param_1,int param_2);
extern int func_00556D04(int param_1);
extern int func_00556D48(int param_1);
extern int func_00556D7C(int param_1);
extern int func_00556DC0(int param_1);
extern int *DAT_00187e74;

// USA 00187DA4 <- EU 00187DA4 (Ghidra, non-matching)
// GLOBAL DAT_00187e74 int *

undefined4 func_00187DA4(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 extraout_r1;
  int *piVar3;
  
  piVar3 = DAT_00187e74;
  if (param_2 == 0) {
    iVar2 = func_00556D48(*DAT_00187e74);
    if ((((iVar2 != 0) || (iVar2 = func_00556D7C(*piVar3), iVar2 != 0)) ||
        (cVar1 = func_00556DC0(*piVar3), cVar1 != '\0')) ||
       (iVar2 = func_00556D04(*piVar3), iVar2 != 0)) {
      iVar2 = param_1[0xf5];
      piVar3 = (int *)param_1[0xf6];
      param_1[0xda] = param_1[0xf4];
      param_1[0xdb] = iVar2;
      param_1[0xdc] = (int)piVar3;
      if ((char)param_1[0x140] == '\x03') {
        func_00188824(param_1);
      }
      else if ((char)param_1[0x140] == '\x02') {
        func_00187714(param_1);
      }
      else {
        func_00187C38((int)param_1);
      }
      func_00187490((int)param_1);
      func_00189040((int)param_1,extraout_r1,iVar2,piVar3);
    }
  }
  return func_001E47F4((int)param_1,param_2);
}

