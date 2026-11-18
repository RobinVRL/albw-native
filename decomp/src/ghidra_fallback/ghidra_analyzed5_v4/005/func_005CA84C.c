#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005ca8b8;
extern undefined4 *DAT_005ca8bc;
extern undefined4 *DAT_005ca8c0;
extern undefined DAT_005ca8c4;
extern undefined4 DAT_005ca8dc;
extern uint *DAT_005ca8f0;
extern undefined4 DAT_005ca8f4;
extern undefined4 *DAT_005ca8f8;
extern undefined4 DAT_005ca8fc;
extern undefined4 DAT_005ca900;
extern char s_TagSwitchTimer_005ca8e0[];

// USA 005CA84C <- EU 005CA824 (Ghidra, non-matching)
// GLOBAL DAT_005ca8b8 undefined4 *
// GLOBAL DAT_005ca8bc undefined4 *
// GLOBAL DAT_005ca8c0 undefined4 *
// GLOBAL DAT_005ca8c4 undefined
// GLOBAL DAT_005ca8dc undefined4
// GLOBAL DAT_005ca8f0 uint *
// GLOBAL DAT_005ca8f4 undefined4
// GLOBAL DAT_005ca8f8 undefined4 *
// GLOBAL DAT_005ca8fc undefined4
// GLOBAL DAT_005ca900 undefined4
// GLOBAL s_TagSwitchTimer_005ca8e0 string

undefined8 func_005CA84C(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005ca8b8;
  *DAT_005ca8b8 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005ca8bc;
  *DAT_005ca8bc = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005ca8c0;
  puVar3 = DAT_005ca8c0 + 3;
  *DAT_005ca8c0 = 0;
  puVar1[1] = 5;
  local_10 = DAT_005ca8dc;
  puVar1[2] = puVar3;
  puStack_c = &DAT_005ca8c4;
  local_18 = local_10;
  local_14 = s_TagSwitchTimer_005ca8e0;
  uVar2 = func_0019B51C(DAT_005ca8f8,DAT_005ca8f4,*DAT_005ca8f0,(int)&local_18,DAT_005ca8c0,
                        &local_10,0);
  return CONCAT44(DAT_005ca900,uVar2);
}

