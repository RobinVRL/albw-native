#include "ghidra_types.h"

extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_0036D0C8(int *param_1,int param_2);
extern int func_004C081C(int param_1,int param_2,int param_3,int *param_4,int param_5,undefined4 param_6);
extern undefined4 *DAT_004c1894;

// USA 004C1820 <- EU 004C17F8 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:8 undefined8
// GLOBAL DAT_004c1894 undefined4 *

undefined4 func_004C1820(int param_1,int param_2,int param_3,int *param_4,undefined8 param_5)

{
  undefined4 *puVar1;
  int iVar2;
  
  func_0036D0C8((int *)(param_1 + 0x868),0);
  puVar1 = DAT_004c1894;
  iVar2 = *(int *)(param_1 + 0x868);
  if (iVar2 == 0) {
    iVar2 = 1;
  }
  else {
    iVar2 = func_0010983C(*DAT_004c1894,iVar2);
  }
  func_004C081C(param_1,param_2,param_3,param_4,(int)param_5,(int)((ulonglong)param_5 >> 0x20));
  if (iVar2 == 1) {
    return 0;
  }
  return func_0010983C(*puVar1,iVar2);
}

