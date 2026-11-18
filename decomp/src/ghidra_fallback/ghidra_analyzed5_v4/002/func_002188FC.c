#include "ghidra_types.h"

extern int func_0019B04C(uint param_1);
extern int func_002DFF7C(undefined4 *param_1);
extern int func_004C4AF4(int param_1,int *param_2,int param_3);
extern int func_00581D60(int param_1);
extern uint *DAT_002189a8;
extern int *DAT_002189ac;
extern int *DAT_002189b0;

// USA 002188FC <- EU 002188FC (Ghidra, non-matching)
// GLOBAL DAT_002189a8 uint *
// GLOBAL DAT_002189ac int *
// GLOBAL DAT_002189b0 int *

undefined4 func_002188FC(int param_1)

{
  char cVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  _Alignas(8) unsigned char albw_frame[0x2e0];
  #define iStack_2d8 (*(int *)(albw_frame + 0x8))
  #define uStack_2d4 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_2d0 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_2cc (*(undefined4 *)(albw_frame + 0x14))
  #define uStack_2bc (*(undefined4 *)(albw_frame + 0x24))
  #define uStack_2b8 (*(undefined4 *)(albw_frame + 0x28))
  #define uStack_2b4 (*(undefined4 *)(albw_frame + 0x2c))
  #define uStack_2ae (*(undefined2 *)(albw_frame + 0x32))
  #define uStack_2ac (*(ushort *)(albw_frame + 0x34))
  #define uStack_290 (*(undefined4 *)(albw_frame + 0x50))
  #define uStack_28c (*(undefined4 *)(albw_frame + 0x54))
  #define uStack_288 (*(undefined2 *)(albw_frame + 0x58))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x2c8))
  uVar2 = *(undefined2 *)(param_1 + 0x2c);
  cVar1 = *(char *)(param_1 + 0x330);
  uStack_2b8 = 0;
  uStack_2b4 = 0;
  uStack_2bc = 0;
  uStack_290 = 0;
  uStack_28c = 0;
  uStack_18 = 0;
  func_002DFF7C(&iStack_2d8);
  iStack_2d8 = func_0019B04C(*DAT_002189a8);
  uVar3 = func_00581D60(*DAT_002189ac);
  uStack_288 = (undefined2)uVar3;
  uStack_2d4 = *(undefined4 *)(param_1 + 800);
  uStack_2d0 = *(undefined4 *)(param_1 + 0x324);
  uStack_2cc = *(undefined4 *)(param_1 + 0x328);
  uStack_2ac = (short)cVar1 | 2;
  uStack_2ae = uVar2;
  return func_004C4AF4(*DAT_002189b0,&iStack_2d8,0);
}

