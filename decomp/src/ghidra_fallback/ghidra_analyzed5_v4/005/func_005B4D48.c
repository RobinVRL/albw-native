#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005b4db4;
extern undefined4 *DAT_005b4db8;
extern undefined4 *DAT_005b4dbc;
extern undefined DAT_005b4dc0;
extern undefined4 DAT_005b4dcc;
extern uint *DAT_005b4de0;
extern undefined4 DAT_005b4de4;
extern undefined4 *DAT_005b4de8;
extern undefined4 DAT_005b4dec;
extern undefined4 DAT_005b4df0;
extern char s_MojLightHole_005b4dd0[];

// USA 005B4D48 <- EU 005B4D20 (Ghidra, non-matching)
// GLOBAL DAT_005b4db4 undefined4 *
// GLOBAL DAT_005b4db8 undefined4 *
// GLOBAL DAT_005b4dbc undefined4 *
// GLOBAL DAT_005b4dc0 undefined
// GLOBAL DAT_005b4dcc undefined4
// GLOBAL DAT_005b4de0 uint *
// GLOBAL DAT_005b4de4 undefined4
// GLOBAL DAT_005b4de8 undefined4 *
// GLOBAL DAT_005b4dec undefined4
// GLOBAL DAT_005b4df0 undefined4
// GLOBAL s_MojLightHole_005b4dd0 string

undefined8 func_005B4D48(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005b4db4;
  *DAT_005b4db4 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005b4db8;
  *DAT_005b4db8 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005b4dbc;
  puVar3 = DAT_005b4dbc + 3;
  *DAT_005b4dbc = 0;
  puVar1[1] = 5;
  local_10 = DAT_005b4dcc;
  puVar1[2] = puVar3;
  puStack_c = &DAT_005b4dc0;
  local_18 = local_10;
  local_14 = s_MojLightHole_005b4dd0;
  uVar2 = func_0019B51C(DAT_005b4de8,DAT_005b4de4,*DAT_005b4de0,(int)&local_18,DAT_005b4dbc,
                        &local_10,0);
  return CONCAT44(DAT_005b4df0,uVar2);
}

