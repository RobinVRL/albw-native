#include "ghidra_types.h"

extern int func_002AF5FC(int param_1,undefined2 param_2,int param_3);
extern int func_004F88A0(int *param_1,undefined2 *param_2);
extern int func_004F9554(int param_1,ushort param_2,ushort param_3,int param_4);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_0058A3E0(uint param_1);

// USA 0012B8FC <- EU 0012B8FC (Ghidra, non-matching)

undefined4 func_0012B8FC(int *param_1,int param_2,uint param_3)

{
  uint uVar1;
  
  if ((undefined2 *)param_1[0xe8] == (undefined2 *)param_1[0xe9]) {
    if (((param_2 == 6) || (uVar1 = func_0058A3E0(param_3), uVar1 != 0)) ||
       (*(char *)(param_3 + 0x24) == '\x0f')) {
      func_004F88A0(param_1,(undefined2 *)param_1[0x238]);
      func_004F9554(param_1[0x10c],0,0,1);
      func_004F9554(param_1[0x10d],0,0,1);
      return func_004FABDC((int)param_1,1,0xffffffff,0);
    }
  }
  else {
    if (param_2 == 6) {
      func_004F88A0(param_1,(undefined2 *)param_1[0xe9]);
      return func_004FABDC((int)param_1,4,0xffffffff,0);
    }
    uVar1 = func_0058A3E0(param_3);
    if (uVar1 != 0) {
      return func_002AF5FC((int)param_1,6,0);
    }
  }
  return 0;
}

