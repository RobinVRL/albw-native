#include "ghidra_types.h"

extern int func_0040959C(int param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_004095FC(int param_1);
extern int func_0058FA08();
extern int func_0058FA5C();
extern int DAT_00495c7c;

// USA 00495C2C <- EU 00495C04 (Ghidra, non-matching)
// GLOBAL DAT_00495c7c int

undefined4 func_00495C2C(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  
  iVar1 = DAT_00495c7c;
  param_1[3] = DAT_00495c7c + 0x20;
  *param_1 = iVar1;
  if ((char)param_1[0x8b] != '\0') {
    func_0040959C((int)param_1,iVar1,param_3,param_4);
    *(undefined1 *)(param_1 + 0x8b) = 0;
  }
  if ((int *)param_1[0x88] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x88] + 0xc))((int *)param_1[0x88]);
    param_1[0x88] = 0;
  }
  if (param_1[0x89] != 0) {
    func_0058FA08(param_1[0x89]);
    param_1[0x89] = 0;
  }
  iVar1 = func_004095FC((int)param_1);
  return func_0058FA5C(iVar1);
}

