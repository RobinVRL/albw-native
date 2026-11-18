#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005ea468;
extern undefined4 *DAT_005ea46c;
extern undefined4 *DAT_005ea470;
extern undefined DAT_005ea474;
extern undefined4 DAT_005ea484;
extern uint *DAT_005ea49c;
extern undefined4 DAT_005ea4a0;
extern undefined4 *DAT_005ea4a4;
extern undefined4 DAT_005ea4a8;
extern undefined4 DAT_005ea4ac;
extern char s_ObjFlatLightArrow_005ea488[];

// USA 005EA3FC <- EU 005EA3D4 (Ghidra, non-matching)
// GLOBAL DAT_005ea468 undefined4 *
// GLOBAL DAT_005ea46c undefined4 *
// GLOBAL DAT_005ea470 undefined4 *
// GLOBAL DAT_005ea474 undefined
// GLOBAL DAT_005ea484 undefined4
// GLOBAL DAT_005ea49c uint *
// GLOBAL DAT_005ea4a0 undefined4
// GLOBAL DAT_005ea4a4 undefined4 *
// GLOBAL DAT_005ea4a8 undefined4
// GLOBAL DAT_005ea4ac undefined4
// GLOBAL s_ObjFlatLightArrow_005ea488 string

undefined8 func_005EA3FC(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005ea468;
  *DAT_005ea468 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005ea46c;
  *DAT_005ea46c = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005ea470;
  puVar3 = DAT_005ea470 + 3;
  *DAT_005ea470 = 0;
  puVar1[1] = 5;
  local_10 = DAT_005ea484;
  puVar1[2] = puVar3;
  puStack_c = &DAT_005ea474;
  local_18 = local_10;
  local_14 = s_ObjFlatLightArrow_005ea488;
  uVar2 = func_0019B51C(DAT_005ea4a4,DAT_005ea4a0,*DAT_005ea49c,(int)&local_18,DAT_005ea470,
                        &local_10,0);
  return CONCAT44(DAT_005ea4ac,uVar2);
}

