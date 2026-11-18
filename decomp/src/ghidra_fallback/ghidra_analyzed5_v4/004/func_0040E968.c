#include "ghidra_types.h"

extern int func_00104248(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4,int param_5 ,uint param_6,undefined4 param_7,int param_8);
extern int func_0010A98C(uint param_1);
extern int func_0010DEB0(undefined4 *param_1);
extern int func_0040EA34(uint *param_1);
extern undefined4 DAT_0040ea04;
extern undefined4 DAT_0040ea08;
extern undefined4 DAT_0040ea0c;
extern undefined4 DAT_0040ea10;

// USA 0040E968 <- EU 0040E948 (Ghidra, non-matching)
// GLOBAL DAT_0040ea04 undefined4
// GLOBAL DAT_0040ea08 undefined4
// GLOBAL DAT_0040ea0c undefined4
// GLOBAL DAT_0040ea10 undefined4

void func_0040E968(uint *param_1,uint param_2,int *param_3)

{
  uint uVar1;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_2c (*(uint * *)(albw_frame + 0x4))
  #define iStack_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(undefined4 *)(albw_frame + 0xc))
  #define local_20 (*(undefined4 *)(albw_frame + 0x10))
  #define local_1c (*(undefined4 *)(albw_frame + 0x14))
  if (*(char *)((int)param_1 + 0x15) != '\0') {
    func_0040EA34(param_1);
  }
  *(undefined1 *)(param_1 + 5) = 0;
  func_0010DEB0(param_1 + 2);
  iStack_28 = 4;
  local_24 = DAT_0040ea08;
  local_20 = DAT_0040ea0c;
  local_1c = DAT_0040ea10;
  local_2c = param_1;
  uVar1 = func_00104248(param_1,&iStack_28,DAT_0040ea04,&local_2c,*param_3 + param_3[1],param_2,
                        0xfffffffe,0);
  if (((uVar1 & 0x7e00000) != 0x600000) && ((int)uVar1 < 0)) {
    func_0010A98C(uVar1);
  }
  if (-1 < (int)uVar1) {
    *(undefined1 *)((int)param_1 + 0x15) = 1;
  }
  return;
}

