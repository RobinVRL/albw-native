#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004A2F38(int param_1,undefined4 *param_2);
extern uint *DAT_004f31a4;
extern undefined4 DAT_004f31a8;
extern int DAT_004f31ac;

// USA 004F3158 <- EU 004F3130 (Ghidra, non-matching)
// GLOBAL DAT_004f31a4 uint *
// GLOBAL DAT_004f31a8 undefined4
// GLOBAL DAT_004f31ac int

undefined4 func_004F3158(int *param_1)

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
    func_004A1B9C(&local_10,param_1[0xd1],DAT_004f31a4);
  }
  if ((local_10 != 0) && (*(int *)(local_10 + 0x1c) == iStack_c)) {
    func_004A2F38(local_10,param_1 + 0xf4);
  }
  local_14 = DAT_004f31a8;
  local_18 = DAT_004f31ac;
  return func_00150A84(param_1,&local_18,0);
}

