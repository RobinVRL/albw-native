#include "ghidra_types.h"

extern int func_004A8F40(int param_1,int *param_2,uint param_3);
extern uint DAT_00362168;
extern int *DAT_0036216c;
extern int DAT_00362170;

// USA 00362104 <- EU 003620E0 (Ghidra, non-matching)
// GLOBAL DAT_00362168 uint
// GLOBAL DAT_0036216c int *
// GLOBAL DAT_00362170 int

int func_00362104(int param_1,uint param_2)

{
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(int *)(albw_frame + 0x0))
  #define local_2c (*(int *)(albw_frame + 0x4))
  #define local_28 (*(undefined4 *)(albw_frame + 0x8))
  #define local_24 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_20 (*(uint *)(albw_frame + 0x10))
  #define local_1c (*(undefined4 *)(albw_frame + 0x14))
  #define local_18 (*(undefined4 *)(albw_frame + 0x18))
  #define local_14 (*(int *)(albw_frame + 0x1c))
  #define local_10 (*(undefined1 *)(albw_frame + 0x20))
  uStack_20 = DAT_00362168;
  *(undefined1 *)(param_1 + 0x5d2) = 0;
  uStack_20 = uStack_20 | param_2 & 0xffff0000;
  local_30 = 0;
  local_28 = 0;
  local_1c = 0xff;
  local_14 = param_1 + 0x130;
  local_18 = 0;
  local_10 = 0;
  local_24 = *(undefined4 *)(param_1 + 0x278);
  local_2c = param_1 + 900;
  func_004A8F40(*DAT_0036216c,&local_30,0x2000);
  return (int)*(char *)(DAT_00362170 + param_1);
}

