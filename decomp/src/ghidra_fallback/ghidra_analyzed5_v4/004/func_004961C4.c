#include "ghidra_types.h"

extern int func_005FF760(void);
extern int func_006003D8(undefined4 param_1,int *param_2);
extern int func_00601390(void);
extern int func_00601600(undefined4 param_1);
extern int func_006017F0(void);
extern undefined4 DAT_004961d8;

// USA 004961C4 <- EU 0049619C (Ghidra, non-matching)
// GLOBAL DAT_004961d8 undefined4

void func_004961C4(int param_1)

{
  undefined4 uVar1;
  int in_r3;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  local_10 = in_r3;
  func_00601390();
  func_006003D8(DAT_004961d8,&local_10);
  uVar1 = 0;
  if (local_10 != 0) {
    uVar1 = func_006017F0();
  }
  func_00601600(uVar1);
  func_005FF760();
  *(int *)(param_1 + 0x124) = 1 - *(int *)(param_1 + 0x124);
  return;
}

