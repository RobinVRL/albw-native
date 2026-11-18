#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005a1990;
extern undefined4 *DAT_005a1994;
extern undefined4 *DAT_005a1998;
extern undefined DAT_005a199c;
extern undefined4 DAT_005a19b0;
extern uint *DAT_005a19c0;
extern undefined4 DAT_005a19c4;
extern undefined4 *DAT_005a19c8;
extern undefined4 DAT_005a19cc;
extern undefined4 DAT_005a19d0;
extern char s_MassRupee_005a19b4[];

// USA 005A1924 <- EU 005A18FC (Ghidra, non-matching)
// GLOBAL DAT_005a1990 undefined4 *
// GLOBAL DAT_005a1994 undefined4 *
// GLOBAL DAT_005a1998 undefined4 *
// GLOBAL DAT_005a199c undefined
// GLOBAL DAT_005a19b0 undefined4
// GLOBAL DAT_005a19c0 uint *
// GLOBAL DAT_005a19c4 undefined4
// GLOBAL DAT_005a19c8 undefined4 *
// GLOBAL DAT_005a19cc undefined4
// GLOBAL DAT_005a19d0 undefined4
// GLOBAL s_MassRupee_005a19b4 string

undefined8 func_005A1924(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005a1990;
  *DAT_005a1990 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005a1994;
  *DAT_005a1994 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005a1998;
  puVar3 = DAT_005a1998 + 3;
  *DAT_005a1998 = 0;
  puVar1[1] = 5;
  local_10 = DAT_005a19b0;
  puVar1[2] = puVar3;
  puStack_c = &DAT_005a199c;
  local_18 = local_10;
  local_14 = s_MassRupee_005a19b4;
  uVar2 = func_0019B51C(DAT_005a19c8,DAT_005a19c4,*DAT_005a19c0,(int)&local_18,DAT_005a1998,
                        &local_10,0);
  return CONCAT44(DAT_005a19d0,uVar2);
}

