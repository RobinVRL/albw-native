#include "ghidra_types.h"

extern int func_0019B04C(uint param_1);
extern int func_002DFF7C(undefined4 *param_1);
extern int func_004C4AF4(int param_1,int *param_2,int param_3);
extern int func_00537B48(int param_1);
extern uint *DAT_001db84c;
extern int *DAT_001db850;

// USA 001DB784 <- EU 001DB784 (Ghidra, non-matching)
// GLOBAL DAT_001db84c uint *
// GLOBAL DAT_001db850 int *

undefined4 func_001DB784(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  _Alignas(8) unsigned char albw_frame[0x2e0];
  #define local_2d8 (*(int *)(albw_frame + 0x8))
  #define local_2d4 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_2d0 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_2cc (*(undefined4 *)(albw_frame + 0x14))
  #define local_2bc (*(undefined4 *)(albw_frame + 0x24))
  #define local_2b8 (*(undefined4 *)(albw_frame + 0x28))
  #define local_2b4 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_2b0 (*(undefined2 *)(albw_frame + 0x30))
  #define local_290 (*(undefined4 *)(albw_frame + 0x50))
  #define local_28c (*(undefined4 *)(albw_frame + 0x54))
  #define local_18 (*(undefined4 *)(albw_frame + 0x2c8))
  if (0x1e < *(int *)(*(int *)(param_1 + 0x614) + 0xa4)) {
    iVar1 = func_00537B48(param_1 + 0x40c);
    if (iVar1 != 0) {
      local_2b8 = 0;
      local_2b4 = 0;
      local_2bc = 0;
      local_290 = 0;
      local_28c = 0;
      local_18 = 0;
      func_002DFF7C(&local_2d8);
      local_2d8 = func_0019B04C(*DAT_001db84c);
      local_2d4 = *(undefined4 *)(param_1 + 0x3d0);
      uStack_2d0 = *(undefined4 *)(param_1 + 0x3d4);
      uStack_2cc = *(undefined4 *)(param_1 + 0x3d8);
      local_2b8 = *(undefined4 *)(param_1 + 1000);
      uVar2 = func_00537B48(param_1 + 0x40c);
      local_2b0 = (undefined2)uVar2;
      piVar3 = func_004C4AF4(*DAT_001db850,&local_2d8,0);
      if (piVar3 != (int *)0x0) {
        *(undefined4 *)(*(int *)(param_1 + 0x614) + 0xa4) = 0;
        return 1;
      }
    }
  }
  return 0;
}

