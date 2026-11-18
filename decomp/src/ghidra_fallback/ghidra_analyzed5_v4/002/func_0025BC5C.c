#include "ghidra_types.h"

extern int func_00407880(int param_1,int param_2);
extern int func_00587FCC(int param_1,int *param_2);
extern int *DAT_0025bcc8;
extern undefined4 DAT_0025bccc;
extern int DAT_0025bcd0;

// USA 0025BC5C <- EU 0025BC84 (Ghidra, non-matching)
// GLOBAL DAT_0025bcc8 int *
// GLOBAL DAT_0025bccc undefined4
// GLOBAL DAT_0025bcd0 int

void func_0025BC5C(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(undefined4 *)(albw_frame + 0xc))
  piVar1 = DAT_0025bcc8;
  func_00407880(*DAT_0025bcc8,param_1);
  local_14 = DAT_0025bccc;
  local_18 = DAT_0025bcd0;
  uVar2 = func_00587FCC(*piVar1,&local_18);
  *(undefined4 *)(param_1 + 0x7c) = uVar2;
  return;
}

