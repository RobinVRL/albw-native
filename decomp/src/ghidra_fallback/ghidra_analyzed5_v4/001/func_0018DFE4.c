#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004A2F38(int param_1,undefined4 *param_2);
extern uint *DAT_0018e064;
extern undefined4 DAT_0018e068;
extern int DAT_0018e06c;

// USA 0018DFE4 <- EU 0018DFE4 (Ghidra, non-matching)
// GLOBAL DAT_0018e064 uint *
// GLOBAL DAT_0018e068 undefined4
// GLOBAL DAT_0018e06c int

undefined4 func_0018DFE4(int *param_1,undefined4 *param_2,undefined1 param_3)

{
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(undefined4 *)(albw_frame + 0x4))
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define iStack_14 (*(int *)(albw_frame + 0xc))
  if (param_1[0xd1] == 0) {
    iStack_14 = 0;
    local_18 = 0;
  }
  else {
    func_004A1B9C(&local_18,param_1[0xd1],DAT_0018e064);
  }
  if ((local_18 != 0) && (*(int *)(local_18 + 0x1c) == iStack_14)) {
    func_004A2F38(local_18,param_2);
  }
  local_20 = DAT_0018e06c;
  local_1c = DAT_0018e068;
  *(undefined1 *)((int)param_1 + 0x393) = param_3;
  return func_00150A84(param_1,&local_20,0);
}

