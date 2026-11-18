#include "ghidra_types.h"

extern int func_004CF5DC(int param_1,int param_2,int param_3,undefined4 *param_4);
extern int func_00584CA8(int param_1,int param_2,int param_3);
extern int func_00588C14(int param_1,int param_2,uint param_3);

// USA 0027E7E4 <- EU 0027E80C (Ghidra, non-matching)

undefined4 func_0027E7E4(int param_1,char param_2)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(undefined4 *)(albw_frame + 0x0))
  puVar2 = (undefined4 *)func_00584CA8(*(int *)(param_1 + 0x41c),*(int *)(param_1 + 0x43c),3);
  local_10 = *puVar2;
  *(char *)(param_1 + 0x418) = param_2;
  if (param_2 == '\0') {
    func_00588C14(param_1,0,0);
    uVar1 = 0xff;
  }
  else {
    if (param_2 != '\x01') goto LAB_0027e874;
    func_00588C14(param_1,0,1);
    uVar1 = 0;
  }
  local_10 = CONCAT13(uVar1,(undefined3)local_10);
LAB_0027e874:
  uVar3 = func_004CF5DC(*(int *)(param_1 + 0x41c),*(int *)(param_1 + 0x43c),3,&local_10);
  return uVar3;
}

