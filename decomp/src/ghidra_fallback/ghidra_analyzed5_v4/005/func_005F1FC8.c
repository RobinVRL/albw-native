#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005f2034;
extern undefined4 *DAT_005f2038;
extern undefined4 *DAT_005f203c;
extern undefined DAT_005f2040;
extern undefined4 DAT_005f2054;
extern uint *DAT_005f2070;
extern undefined4 DAT_005f2074;
extern undefined4 *DAT_005f2078;
extern undefined4 DAT_005f207c;
extern undefined4 DAT_005f2080;
extern char s_TagKyameronGenerator_005f2058[];

// USA 005F1FC8 <- EU 005F1FA0 (Ghidra, non-matching)
// GLOBAL DAT_005f2034 undefined4 *
// GLOBAL DAT_005f2038 undefined4 *
// GLOBAL DAT_005f203c undefined4 *
// GLOBAL DAT_005f2040 undefined
// GLOBAL DAT_005f2054 undefined4
// GLOBAL DAT_005f2070 uint *
// GLOBAL DAT_005f2074 undefined4
// GLOBAL DAT_005f2078 undefined4 *
// GLOBAL DAT_005f207c undefined4
// GLOBAL DAT_005f2080 undefined4
// GLOBAL s_TagKyameronGenerator_005f2058 string

undefined8 func_005F1FC8(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005f2034;
  *DAT_005f2034 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005f2038;
  *DAT_005f2038 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005f203c;
  puVar3 = DAT_005f203c + 3;
  *DAT_005f203c = 0;
  puVar1[1] = 5;
  local_10 = DAT_005f2054;
  puVar1[2] = puVar3;
  puStack_c = &DAT_005f2040;
  local_18 = local_10;
  local_14 = s_TagKyameronGenerator_005f2058;
  uVar2 = func_0019B51C(DAT_005f2078,DAT_005f2074,*DAT_005f2070,(int)&local_18,DAT_005f203c,
                        &local_10,0);
  return CONCAT44(DAT_005f2080,uVar2);
}

