#include "ghidra_types.h"

extern int func_0019B04C(uint param_1);
extern int func_002DFF7C(undefined4 *param_1);
extern int func_004C4AF4(int param_1,int *param_2,int param_3);
extern int func_00581D60(int param_1);
extern uint *DAT_004e717c;
extern int *DAT_004e7180;
extern int *DAT_004e7184;

// USA 004E712C <- EU 004E7104 (Ghidra, non-matching)
// GLOBAL DAT_004e717c uint *
// GLOBAL DAT_004e7180 int *
// GLOBAL DAT_004e7184 int *

int * func_004E712C(void)

{
  undefined4 uVar1;
  int *piVar2;
  _Alignas(8) unsigned char albw_frame[0x2d0];
  #define local_2c8 ((int *)(albw_frame + 0x8))
  #define local_2ac (*(undefined4 *)(albw_frame + 0x24))
  #define local_2a8 (*(undefined4 *)(albw_frame + 0x28))
  #define local_2a4 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_29e (*(undefined2 *)(albw_frame + 0x32))
  #define local_29a (*(undefined2 *)(albw_frame + 0x36))
  #define local_280 (*(undefined4 *)(albw_frame + 0x50))
  #define local_27c (*(undefined4 *)(albw_frame + 0x54))
  #define local_278 (*(undefined2 *)(albw_frame + 0x58))
  #define local_8 (*(undefined4 *)(albw_frame + 0x2c8))
  local_2a8 = 0;
  local_2a4 = 0;
  local_2ac = 0;
  local_280 = 0;
  local_27c = 0;
  local_8 = 0;
  func_002DFF7C(local_2c8);
  local_2c8[0] = func_0019B04C(*DAT_004e717c);
  uVar1 = func_00581D60(*DAT_004e7180);
  local_278 = (undefined2)uVar1;
  local_29e = 3;
  local_29a = 0xffff;
  piVar2 = func_004C4AF4(*DAT_004e7184,local_2c8,0);
  return piVar2;
}

