#include "ghidra_types.h"

extern int func_004CF5DC(int param_1,int param_2,int param_3,undefined4 *param_4);
extern int func_00584CA8(int param_1,int param_2,int param_3);
extern int func_00588C14(int param_1,int param_2,uint param_3);

// USA 001C4388 <- EU 001C4388 (Ghidra, non-matching)

undefined4 func_001C4388(int param_1,undefined1 param_2)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(undefined4 *)(albw_frame + 0x0))
  *(undefined1 *)(param_1 + 0x40c) = param_2;
  puVar2 = (undefined4 *)func_00584CA8(*(int *)(param_1 + 0x42c),*(int *)(param_1 + 0x44c),3);
  local_10 = *puVar2;
  if (*(char *)(param_1 + 0x40c) == '\0') {
    func_00588C14(param_1,0,0);
    uVar1 = 0;
  }
  else {
    if (*(char *)(param_1 + 0x40c) != '\x01') goto LAB_001c43f8;
    func_00588C14(param_1,0,1);
    uVar1 = 0xff;
  }
  local_10 = CONCAT13(uVar1,(undefined3)local_10);
LAB_001c43f8:
  return func_004CF5DC(*(int *)(param_1 + 0x42c),*(int *)(param_1 + 0x44c),3,&local_10);
}

