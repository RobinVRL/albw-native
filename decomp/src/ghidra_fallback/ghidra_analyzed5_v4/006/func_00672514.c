#include "ghidra_types.h"

extern int func_001509A4(int param_1,int *param_2,int param_3);
extern int func_002F8DE4(int *param_1,int param_2,uint param_3,int param_4);
extern int DAT_00672554;
extern undefined4 DAT_00672558;
extern int DAT_0067255c;

// USA 00672514 <- EU 006724EC (Ghidra, non-matching)
// GLOBAL DAT_00672554 int
// GLOBAL DAT_00672558 undefined4
// GLOBAL DAT_0067255c int

void func_00672514(int *param_1)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(undefined4 *)(albw_frame + 0x4))
  param_1[0x23d] = 0;
  *(undefined1 *)(param_1 + 0x242) = 0;
  func_002F8DE4(param_1,0,0xffffffff,0);
  local_c = DAT_00672558;
  iVar1 = DAT_00672554;
  param_1[0xf7] = DAT_00672554;
  local_10 = DAT_0067255c;
  param_1[0xf9] = iVar1;
  func_001509A4((int)param_1,&local_10,0);
  *(undefined1 *)((int)param_1 + 0x98f) = 1;
  return;
}

