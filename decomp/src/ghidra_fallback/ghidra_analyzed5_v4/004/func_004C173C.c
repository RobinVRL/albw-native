#include "ghidra_types.h"

extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_0036D0C8(int *param_1,int param_2);
extern int func_004BDCEC(int param_1,int param_2,int param_3,undefined4 param_4);
extern int func_004BE138(int *param_1,int param_2);
extern undefined4 *DAT_004c1794;

// USA 004C173C <- EU 004C1714 (Ghidra, non-matching)
// PARAM param_3 Stack[0x0]:4 undefined4
// GLOBAL DAT_004c1794 undefined4 *

undefined4 func_004C173C(int *param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  func_0036D0C8(param_1 + 0x219,0);
  puVar1 = DAT_004c1794;
  iVar2 = param_1[0x219];
  if (iVar2 == 0) {
    iVar2 = 1;
  }
  else {
    iVar2 = func_0010983C(*DAT_004c1794,iVar2);
  }
  func_004BDCEC((int)param_1,param_2,0,param_3);
  func_004BE138(param_1,0);
  if (iVar2 == 1) {
    return 0;
  }
  return func_0010983C(*puVar1,iVar2);
}

