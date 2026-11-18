#include "ghidra_types.h"

extern int func_003CE91C(int param_1,int param_2);
extern int func_003D11D0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5);
extern int DAT_00563ea4;
extern int DAT_00563ea8;

// USA 00563E58 <- EU 00563E30 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 undefined4
// PARAM param_6 Stack[0x4]:4 undefined4
// GLOBAL DAT_00563ea4 int
// GLOBAL DAT_00563ea8 int

int func_00563E58(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = DAT_00563ea8;
  iVar1 = DAT_00563ea4;
  iVar4 = 0;
  do {
    iVar3 = func_003D11D0(param_2,param_3,param_4,param_5,param_6);
    if (iVar3 != iVar1) {
      return iVar3;
    }
    func_003CE91C(1,0);
    iVar4 = iVar4 + 1;
    *(undefined1 *)(iVar2 + 1) = 1;
  } while (iVar4 < 3);
  return iVar3;
}

