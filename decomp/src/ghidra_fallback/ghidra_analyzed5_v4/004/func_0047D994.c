#include "ghidra_types.h"

extern int func_00178B54(int *param_1);
extern int func_001B6C04(int param_1);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_00428974(int *param_1);
extern int func_004289DC(int *param_1,int *param_2,int *param_3);
extern float DAT_0047da08;
extern int DAT_0047da0c;
extern int *DAT_0047da10;

// USA 0047D994 <- EU 0047D96C (Ghidra, non-matching)
// GLOBAL DAT_0047da08 float
// GLOBAL DAT_0047da0c int
// GLOBAL DAT_0047da10 int *

undefined4 func_0047D994(int param_1)

{
  int iVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(undefined4 *)(albw_frame + 0x4))
  iVar2 = *(int *)(param_1 + 0x54);
  for (iVar1 = *(int *)(param_1 + 0x4c) - iVar2;
      iVar1 != (param_1 + 0x48) - *(int *)(param_1 + 0x54);
      iVar1 = *(int *)(iVar1 + iVar2 + 4) - iVar2) {
    *(undefined1 *)(iVar1 + 0xe) = 1;
  }
  func_001B6C04(param_1);
  func_002317C0((undefined2 *)(param_1 + 0x74),DAT_0047da08);
  local_c = *(undefined4 *)(*(int *)(param_1 + 0x80) + 0xa8);
  local_10 = DAT_0047da0c;
  func_004289DC(*(int **)(param_1 + 0x84),DAT_0047da10,&local_10);
  func_00178B54(*(int **)(param_1 + 0x84));
  return func_00428974(*(int **)(param_1 + 0x84));
}

