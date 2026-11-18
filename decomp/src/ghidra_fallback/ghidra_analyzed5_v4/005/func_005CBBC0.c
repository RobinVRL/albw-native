#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005cbc2c;
extern undefined4 *DAT_005cbc30;
extern undefined4 *DAT_005cbc34;
extern undefined DAT_005cbc38;
extern undefined4 DAT_005cbc4c;
extern uint *DAT_005cbc60;
extern undefined4 DAT_005cbc64;
extern undefined4 *DAT_005cbc68;
extern undefined4 DAT_005cbc6c;
extern undefined4 DAT_005cbc70;
extern char s_AreaFixedCamera_005cbc50[];

// USA 005CBBC0 <- EU 005CBB98 (Ghidra, non-matching)
// GLOBAL DAT_005cbc2c undefined4 *
// GLOBAL DAT_005cbc30 undefined4 *
// GLOBAL DAT_005cbc34 undefined4 *
// GLOBAL DAT_005cbc38 undefined
// GLOBAL DAT_005cbc4c undefined4
// GLOBAL DAT_005cbc60 uint *
// GLOBAL DAT_005cbc64 undefined4
// GLOBAL DAT_005cbc68 undefined4 *
// GLOBAL DAT_005cbc6c undefined4
// GLOBAL DAT_005cbc70 undefined4
// GLOBAL s_AreaFixedCamera_005cbc50 string

undefined8 func_005CBBC0(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005cbc2c;
  *DAT_005cbc2c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005cbc30;
  *DAT_005cbc30 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005cbc34;
  puVar3 = DAT_005cbc34 + 3;
  *DAT_005cbc34 = 0;
  puVar1[1] = 5;
  local_10 = DAT_005cbc4c;
  puVar1[2] = puVar3;
  puStack_c = &DAT_005cbc38;
  local_18 = local_10;
  local_14 = s_AreaFixedCamera_005cbc50;
  uVar2 = func_0019B51C(DAT_005cbc68,DAT_005cbc64,*DAT_005cbc60,(int)&local_18,DAT_005cbc34,
                        &local_10,0);
  return CONCAT44(DAT_005cbc70,uVar2);
}

