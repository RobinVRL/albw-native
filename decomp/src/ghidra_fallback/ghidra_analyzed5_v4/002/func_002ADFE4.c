#include "ghidra_types.h"

extern undefined8 func_00110D44(undefined4 *param_1,byte *param_2,uint param_3);
extern int func_002AFA70(int param_1,undefined4 *param_2,int param_3,int param_4);
extern int DAT_002ae088;

// USA 002ADFE4 <- EU 002ADFC0 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// GLOBAL DAT_002ae088 int

void func_002ADFE4(int param_1,int param_2,undefined1 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define auStack_60 ((undefined4 *)(albw_frame + 0x0))
  #define local_3c (*(undefined1 *)(albw_frame + 0x24))
  #define local_3b (*(undefined1 *)(albw_frame + 0x25))
  #define local_36 (*(undefined1 *)(albw_frame + 0x2a))
  func_00110D44(auStack_60,(byte *)(param_1 + 0xec),0x44);
  local_36 = (*(uint *)(*(int *)(param_1 + 0x34) + 0x5a0) & 0x80) == 0;
  *(uint *)(*(int *)(param_1 + 0x34) + 0x5a0) = *(uint *)(*(int *)(param_1 + 0x34) + 0x5a0) | 0x80;
  local_3c = param_3;
  local_3b = (undefined1)param_4;
  (**(code **)(**(int **)(param_1 + 0x34) + 0x60))(*(int **)(param_1 + 0x34),param_2,auStack_60);
  iVar1 = *(int *)(param_1 + 0x34);
  if (param_2 == 0) {
    *(undefined1 *)(iVar1 + 0x89c) = 0;
  }
  else if (*(short *)(DAT_002ae088 + iVar1) < 1) {
    *(undefined1 *)(iVar1 + 0x89c) = 1;
  }
  func_002AFA70(param_1,auStack_60,1,param_5);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(*(int *)(param_1 + 0x34) + 0x4cc);
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(*(int *)(param_1 + 0x34) + 0x58c);
  return;
}

