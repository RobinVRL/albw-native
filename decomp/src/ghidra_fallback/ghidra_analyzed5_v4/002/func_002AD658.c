#include "ghidra_types.h"

extern undefined8 func_00110D44(undefined4 *param_1,byte *param_2,uint param_3);
extern int func_004F95A0(int param_1,int param_2);

// USA 002AD658 <- EU 002AD634 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:1 undefined1
// PARAM param_6 Stack[0x4]:4 int

void func_002AD658(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined1 param_5,int param_6)

{
  _Alignas(8) unsigned char albw_frame[0x60];
  #define auStack_60 ((undefined4 *)(albw_frame + 0x0))
  #define local_3c (*(undefined1 *)(albw_frame + 0x24))
  #define local_3b (*(undefined1 *)(albw_frame + 0x25))
  func_00110D44(auStack_60,(byte *)(param_1 + 0xec),0x44);
  local_3b = param_5;
  local_3c = (undefined1)param_4;
  (**(code **)(**(int **)(param_1 + 0x34) + 100))(*(int **)(param_1 + 0x34),param_2,auStack_60);
  if (param_6 != 0) {
    func_004F95A0(*(int *)(param_1 + 0x34),1);
  }
  return;
}

