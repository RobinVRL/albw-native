#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_001E4090(int param_1,undefined4 param_2);
extern int func_003249B4(int param_1);
extern int func_004A8304(undefined4 param_1,int param_2);
extern int func_00588BE4(int param_1);
extern undefined4 *DAT_00305abc;
extern int *DAT_00305ac0;
extern int DAT_00305ac4;
extern undefined4 DAT_00305ac8;
extern undefined4 DAT_00305acc;

// USA 00305A48 <- EU 00305A24 (Ghidra, non-matching)
// GLOBAL DAT_00305abc undefined4 *
// GLOBAL DAT_00305ac0 int *
// GLOBAL DAT_00305ac4 int
// GLOBAL DAT_00305ac8 undefined4
// GLOBAL DAT_00305acc undefined4

undefined4 func_00305A48(int *param_1)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define iStack_18 (*(int *)(albw_frame + 0x8))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0xc))
  *(undefined1 *)(param_1 + 0x12a) = 1;
  func_004A8304(*DAT_00305abc,param_1[0x121]);
  func_003249B4((int)param_1);
  func_001E4090((int)param_1,0);
  *(undefined1 *)((int)param_1 + 0x4aa) = 1;
  iVar1 = func_00588BE4((int)param_1);
  if (iVar1 == *DAT_00305ac0) {
    iStack_18 = DAT_00305ac4;
    uStack_14 = DAT_00305ac8;
    return func_00150A84(param_1,&iStack_18,0);
  }
  iStack_18 = DAT_00305ac4;
  uStack_14 = DAT_00305acc;
  return func_00150A84(param_1,&iStack_18,0);
}

