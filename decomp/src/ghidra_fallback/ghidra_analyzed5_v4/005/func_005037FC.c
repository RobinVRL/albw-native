#include "ghidra_types.h"

extern int func_0012F4D4(undefined4 *param_1,int param_2,int param_3,float *param_4);
extern int func_0026E7D4(undefined4 *param_1,int param_2,undefined4 param_3,float *param_4);
extern int func_00404138(undefined4 param_1,undefined1 param_2);
extern int func_0040415C(undefined4 param_1,int param_2,int param_3,int param_4,float *param_5);
extern int DAT_00503870;

// USA 005037FC <- EU 005037D4 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 float *
// GLOBAL DAT_00503870 int

undefined4 func_005037FC(undefined4 param_1,int param_2,int param_3,int param_4,float *param_5)

{
  undefined4 *puVar1;
  
  if (DAT_00503870 + param_2 == 0) {
    puVar1 = (undefined4 *)func_00404138(0xc4,4);
    if (puVar1 != (undefined4 *)0x0) {
      return func_0026E7D4(puVar1,param_3,param_4,param_5);
    }
  }
  else if (DAT_00503870 + param_2 == 0x604) {
    puVar1 = (undefined4 *)func_00404138(0x14c,4);
    if (puVar1 != (undefined4 *)0x0) {
      return func_0012F4D4(puVar1,param_3,param_4,param_5);
    }
  }
  else {
    func_0040415C(param_1,param_2,param_3,param_4,param_5);
  }
  return 0;
}

