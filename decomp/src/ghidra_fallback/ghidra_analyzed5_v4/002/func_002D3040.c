#include "ghidra_types.h"

extern int func_002D1C78(int param_1,int param_2,int param_3);
extern int func_00504BC4(undefined4 *param_1,int param_2);
extern int func_00504D48(int param_1,int param_2);
extern int *DAT_002d30e0;
extern int DAT_002d30e4;
extern int *DAT_002d30e8;

// USA 002D3040 <- EU 002D301C (Ghidra, non-matching)
// GLOBAL DAT_002d30e0 int *
// GLOBAL DAT_002d30e4 int
// GLOBAL DAT_002d30e8 int *

undefined4 func_002D3040(int param_1)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define auStack_60 ((undefined4 *)(albw_frame + 0x0))
  #define local_2b (*(undefined1 *)(albw_frame + 0x35))
  #define local_2a (*(undefined1 *)(albw_frame + 0x36))
  #define local_14 (*(undefined1 *)(albw_frame + 0x4c))
  *(undefined1 *)(param_1 + 0xc9) = 0xff;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  if (*(char *)(*DAT_002d30e0 + 0x18) != '\x0e' && *(char *)(*DAT_002d30e0 + 0x18) != '\x14') {
    return 0;
  }
  if (*(char *)(param_1 + 200) == '\0') {
    uVar1 = 1;
  }
  else {
    if (*(char *)(param_1 + 200) != '\x01') goto LAB_002d3084;
    uVar1 = 2;
  }
  *(undefined1 *)(param_1 + 0xc9) = uVar1;
LAB_002d3084:
  if (*(char *)(param_1 + 0xc9) == -1) {
    return 0;
  }
  func_00504BC4(auStack_60,DAT_002d30e4 + *(char *)(param_1 + 0xc9) * 8);
  local_2b = 0xff;
  local_2a = 10;
  local_14 = 0;
  puVar2 = func_00504D48(*DAT_002d30e8,(int)auStack_60);
  return func_002D1C78(param_1,(int)puVar2,1);
}

