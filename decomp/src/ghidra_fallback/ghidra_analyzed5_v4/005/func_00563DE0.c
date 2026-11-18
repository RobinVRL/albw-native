#include "ghidra_types.h"

extern int func_003CE91C(int param_1,int param_2);
extern int func_003D1168(undefined4 param_1,int param_2,undefined4 *param_3,undefined4 param_4, undefined4 param_5,undefined4 param_6);
extern int DAT_00563e28;
extern int DAT_00563e2c;

// USA 00563DE0 <- EU 00563DB8 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 undefined4
// PARAM param_6 Stack[0x4]:4 undefined4
// PARAM param_7 Stack[0x8]:4 undefined4
// GLOBAL DAT_00563e28 int
// GLOBAL DAT_00563e2c int

int func_00563DE0(undefined4 param_1,undefined4 param_2,int param_3,undefined4 *param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = DAT_00563e2c;
  iVar1 = DAT_00563e28;
  iVar4 = 0;
  do {
    iVar3 = func_003D1168(param_2,param_3,param_4,param_5,param_6,param_7);
    if (iVar3 != iVar1) {
      return iVar3;
    }
    func_003CE91C(1,0);
    iVar4 = iVar4 + 1;
    *(undefined1 *)(iVar2 + 1) = 1;
  } while (iVar4 < 3);
  return iVar3;
}

