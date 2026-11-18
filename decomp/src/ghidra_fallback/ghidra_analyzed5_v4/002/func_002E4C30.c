#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004A2F38(int param_1,undefined4 *param_2);
extern uint *DAT_002e4c80;
extern undefined4 DAT_002e4c84;
extern int DAT_002e4c88;

// USA 002E4C30 <- EU 002E4C0C (Ghidra, non-matching)
// GLOBAL DAT_002e4c80 uint *
// GLOBAL DAT_002e4c84 undefined4
// GLOBAL DAT_002e4c88 int

undefined4 func_002E4C30(int *param_1)

{
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(undefined4 *)(albw_frame + 0xc))
  #define local_10 (*(int *)(albw_frame + 0x10))
  #define iStack_c (*(int *)(albw_frame + 0x14))
  if (param_1[0xd1] == 0) {
    iStack_c = 0;
    local_10 = 0;
  }
  else {
    func_004A1B9C(&local_10,param_1[0xd1],DAT_002e4c80);
  }
  if ((local_10 != 0) && (*(int *)(local_10 + 0x1c) == iStack_c)) {
    func_004A2F38(local_10,param_1 + 0xf4);
  }
  local_14 = DAT_002e4c84;
  local_18 = DAT_002e4c88;
  return func_00150A84(param_1,&local_18,0);
}

