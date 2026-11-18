#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005ce8b4;
extern undefined4 *DAT_005ce8b8;
extern undefined4 *DAT_005ce8bc;
extern undefined DAT_005ce8c0;
extern undefined4 DAT_005ce8c8;
extern uint *DAT_005ce8dc;
extern undefined4 DAT_005ce8e0;
extern undefined4 *DAT_005ce8e4;
extern undefined4 DAT_005ce8e8;
extern undefined4 DAT_005ce8ec;
extern char s_MojVolcanicRock_005ce8cc[];

// USA 005CE848 <- EU 005CE820 (Ghidra, non-matching)
// GLOBAL DAT_005ce8b4 undefined4 *
// GLOBAL DAT_005ce8b8 undefined4 *
// GLOBAL DAT_005ce8bc undefined4 *
// GLOBAL DAT_005ce8c0 undefined
// GLOBAL DAT_005ce8c8 undefined4
// GLOBAL DAT_005ce8dc uint *
// GLOBAL DAT_005ce8e0 undefined4
// GLOBAL DAT_005ce8e4 undefined4 *
// GLOBAL DAT_005ce8e8 undefined4
// GLOBAL DAT_005ce8ec undefined4
// GLOBAL s_MojVolcanicRock_005ce8cc string

undefined8 func_005CE848(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005ce8b4;
  *DAT_005ce8b4 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005ce8b8;
  *DAT_005ce8b8 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005ce8bc;
  puVar3 = DAT_005ce8bc + 3;
  *DAT_005ce8bc = 0;
  puVar1[1] = 5;
  local_10 = DAT_005ce8c8;
  puVar1[2] = puVar3;
  puStack_c = &DAT_005ce8c0;
  local_18 = local_10;
  local_14 = s_MojVolcanicRock_005ce8cc;
  uVar2 = func_0019B51C(DAT_005ce8e4,DAT_005ce8e0,*DAT_005ce8dc,(int)&local_18,DAT_005ce8bc,
                        &local_10,0);
  return CONCAT44(DAT_005ce8ec,uVar2);
}

