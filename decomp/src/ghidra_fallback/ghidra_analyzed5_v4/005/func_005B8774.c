#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005b87e0;
extern undefined4 *DAT_005b87e4;
extern undefined4 *DAT_005b87e8;
extern undefined DAT_005b87ec;
extern undefined4 DAT_005b87f4;
extern uint *DAT_005b8808;
extern undefined4 DAT_005b880c;
extern undefined4 *DAT_005b8810;
extern undefined4 DAT_005b8814;
extern undefined4 DAT_005b8818;
extern char s_ObjShockWave_005b87f8[];

// USA 005B8774 <- EU 005B874C (Ghidra, non-matching)
// GLOBAL DAT_005b87e0 undefined4 *
// GLOBAL DAT_005b87e4 undefined4 *
// GLOBAL DAT_005b87e8 undefined4 *
// GLOBAL DAT_005b87ec undefined
// GLOBAL DAT_005b87f4 undefined4
// GLOBAL DAT_005b8808 uint *
// GLOBAL DAT_005b880c undefined4
// GLOBAL DAT_005b8810 undefined4 *
// GLOBAL DAT_005b8814 undefined4
// GLOBAL DAT_005b8818 undefined4
// GLOBAL s_ObjShockWave_005b87f8 string

undefined8 func_005B8774(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005b87e0;
  *DAT_005b87e0 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005b87e4;
  *DAT_005b87e4 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005b87e8;
  puVar3 = DAT_005b87e8 + 3;
  *DAT_005b87e8 = 0;
  puVar1[1] = 5;
  local_10 = DAT_005b87f4;
  puVar1[2] = puVar3;
  puStack_c = &DAT_005b87ec;
  local_18 = local_10;
  local_14 = s_ObjShockWave_005b87f8;
  uVar2 = func_0019B51C(DAT_005b8810,DAT_005b880c,*DAT_005b8808,(int)&local_18,DAT_005b87e8,
                        &local_10,0);
  return CONCAT44(DAT_005b8818,uVar2);
}

