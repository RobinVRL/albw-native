#include "ghidra_types.h"

extern int func_0019B04C(uint param_1);
extern int func_002DFF7C(undefined4 *param_1);
extern int func_004C4AF4(int param_1,int *param_2,int param_3);
extern uint *DAT_0018bd04;
extern float DAT_0018bd08;
extern int *DAT_0018bd0c;

// USA 0018BC14 <- EU 0018BC14 (Ghidra, non-matching)
// GLOBAL DAT_0018bd04 uint *
// GLOBAL DAT_0018bd08 float
// GLOBAL DAT_0018bd0c int *

void func_0018BC14(int param_1)

{
  int *piVar1;
  _Alignas(8) unsigned char albw_frame[0x2d0];
  #define local_2d0 (*(int *)(albw_frame + 0x0))
  #define local_2cc (*(undefined4 *)(albw_frame + 0x4))
  #define local_2c8 (*(float *)(albw_frame + 0x8))
  #define local_2c4 (*(undefined4 *)(albw_frame + 0xc))
  #define local_2b4 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_2b0 (*(undefined4 *)(albw_frame + 0x20))
  #define local_2ac (*(undefined4 *)(albw_frame + 0x24))
  #define local_2a8 (*(undefined2 *)(albw_frame + 0x28))
  #define local_28c (*(undefined4 *)(albw_frame + 0x44))
  #define local_288 (*(undefined4 *)(albw_frame + 0x48))
  #define local_284 (*(undefined4 *)(albw_frame + 0x4c))
  #define local_10 (*(uint *)(albw_frame + 0x2c0))
  if (*(char *)(param_1 + 0x53a) == '\0') {
    local_2b0 = 0;
    local_2ac = 0;
    local_2b4 = 0;
    local_288 = 0;
    local_284 = 0;
    local_10 = 0;
    func_002DFF7C(&local_2d0);
    local_2d0 = func_0019B04C(*DAT_0018bd04);
    local_2cc = *(undefined4 *)(param_1 + 0x3d0);
    local_2c8 = *(float *)(param_1 + 0x3d4) + DAT_0018bd08;
    local_2c4 = *(undefined4 *)(param_1 + 0x3d8);
    local_2b0 = *(undefined4 *)(param_1 + 1000);
    local_284 = *(undefined4 *)(param_1 + 0x50c);
    if (*(char *)(param_1 + 0x4ec) == '\0') {
      local_2a8 = 1;
    }
    else {
      local_2a8 = 2;
    }
    local_28c = *(undefined4 *)(param_1 + 0x48);
    local_10 = local_10 | 1;
    piVar1 = func_004C4AF4(*DAT_0018bd0c,&local_2d0,0);
    if ((piVar1 != (int *)0x0) && ((*(uint *)(param_1 + 0x2e0) & 2) != 0)) {
      piVar1[0xb8] = piVar1[0xb8] | 2;
    }
    *(undefined1 *)(param_1 + 0x2d7) = 1;
  }
  return;
}

