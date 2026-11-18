#include "ghidra_types.h"

extern int func_0014FD6C(int param_1,float *param_2,undefined4 param_3);
extern int func_004A8F40(int param_1,int *param_2,uint param_3);
extern int func_006597CC(undefined4 *param_1,undefined1 param_2);
extern uint DAT_00191540;
extern int *DAT_00191544;
extern float DAT_00191548;
extern undefined4 DAT_0019154c;

// USA 00191494 <- EU 00191494 (Ghidra, non-matching)
// GLOBAL DAT_00191540 uint
// GLOBAL DAT_00191544 int *
// GLOBAL DAT_00191548 float
// GLOBAL DAT_0019154c undefined4

void func_00191494(int param_1,uint param_2)

{
  uint uVar1;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 ((int *)(albw_frame + 0x8))
  #define uStack_28 (*(uint *)(albw_frame + 0x18))
  #define local_24 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_20 (*(undefined4 *)(albw_frame + 0x20))
  #define local_1c (*(undefined4 *)(albw_frame + 0x24))
  #define local_18 (*(undefined1 *)(albw_frame + 0x28))
  #define local_14 (*(float *)(albw_frame + 0x2c))
  #define uStack_10 (*(undefined4 *)(albw_frame + 0x30))
  #define local_c (*(float *)(albw_frame + 0x34))
  uStack_28 = DAT_00191540 | param_2 & 0xffff0000;
  local_38[0] = 0;
  local_38[1] = 0;
  local_38[2] = 0;
  local_24 = 0xff;
  local_20 = 0;
  local_18 = 0;
  local_38[3] = *(undefined4 *)(param_1 + 0x2cc);
  local_1c = *(undefined4 *)(param_1 + 0x51c);
  uVar1 = func_004A8F40(*DAT_00191544,local_38,0x1200);
  if (uVar1 != 0) {
    func_006597CC((undefined4 *)(param_1 + 0x4f8),5);
    local_14 = DAT_00191548;
    uStack_10 = DAT_0019154c;
    local_c = DAT_00191548;
    func_0014FD6C(param_1,&local_14,*(undefined4 *)(param_1 + 1000));
  }
  return;
}

