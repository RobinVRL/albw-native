#include "ghidra_types.h"

extern int func_001B8290(int param_1,int *param_2);
extern int func_00560EB0(int *param_1,undefined4 param_2,uint *param_3);
extern int func_00561114(int *param_1,int *param_2,uint *param_3);
extern int func_00689894(int param_1,int *param_2,uint param_3);
extern int *DAT_00387de0;
extern int DAT_00387de4;

// USA 00387D10 <- EU 00387CEC (Ghidra, non-matching)
// GLOBAL DAT_00387de0 int *
// GLOBAL DAT_00387de4 int

undefined4 func_00387D10(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(int *)(albw_frame + 0x0))
  #define local_2c (*(int *)(albw_frame + 0x4))
  #define local_28 ((int *)(albw_frame + 0x8))
  piVar1 = DAT_00387de0;
  *(undefined1 *)(param_1 + 0x57f) = 0;
  *(undefined1 *)(param_1 + 0x57c) = 0;
  (**(code **)(*piVar1 + 8))(piVar1);
  func_00560EB0(param_2,param_1 + 0x57c,(uint *)piVar1[1]);
  if (*(char *)(param_1 + 0x57c) != '\0') {
    *(undefined1 *)(param_1 + 0x57d) = 1;
    (**(code **)(piVar1[2] + 8))(piVar1 + 2);
    func_00560EB0(param_2,param_1 + 0x57f,(uint *)piVar1[3]);
    local_28[0] = 0;
    (**(code **)(piVar1[4] + 8))(piVar1 + 4);
    iVar2 = func_00561114(param_2,local_28,(uint *)piVar1[5]);
    if (iVar2 != 0) {
      local_2c = local_28[0];
      local_30 = DAT_00387de4;
      func_00689894(param_1 + 0x588,&local_30,0xffffffff);
    }
  }
  return func_001B8290(param_1,param_2);
}

