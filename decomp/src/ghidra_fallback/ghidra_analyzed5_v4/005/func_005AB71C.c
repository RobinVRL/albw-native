#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005ab788;
extern undefined4 *DAT_005ab78c;
extern undefined4 *DAT_005ab790;
extern undefined DAT_005ab794;
extern undefined4 DAT_005ab79c;
extern uint *DAT_005ab7ac;
extern undefined4 DAT_005ab7b0;
extern undefined4 *DAT_005ab7b4;
extern undefined4 DAT_005ab7b8;
extern undefined4 DAT_005ab7bc;
extern char s_MojEyeStand_005ab7a0[];

// USA 005AB71C <- EU 005AB6F4 (Ghidra, non-matching)
// GLOBAL DAT_005ab788 undefined4 *
// GLOBAL DAT_005ab78c undefined4 *
// GLOBAL DAT_005ab790 undefined4 *
// GLOBAL DAT_005ab794 undefined
// GLOBAL DAT_005ab79c undefined4
// GLOBAL DAT_005ab7ac uint *
// GLOBAL DAT_005ab7b0 undefined4
// GLOBAL DAT_005ab7b4 undefined4 *
// GLOBAL DAT_005ab7b8 undefined4
// GLOBAL DAT_005ab7bc undefined4
// GLOBAL s_MojEyeStand_005ab7a0 string

undefined8 func_005AB71C(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005ab788;
  *DAT_005ab788 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005ab78c;
  *DAT_005ab78c = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005ab790;
  puVar3 = DAT_005ab790 + 3;
  *DAT_005ab790 = 0;
  puVar1[1] = 5;
  local_10 = DAT_005ab79c;
  puVar1[2] = puVar3;
  puStack_c = &DAT_005ab794;
  local_18 = local_10;
  local_14 = s_MojEyeStand_005ab7a0;
  uVar2 = func_0019B51C(DAT_005ab7b4,DAT_005ab7b0,*DAT_005ab7ac,(int)&local_18,DAT_005ab790,
                        &local_10,0);
  return CONCAT44(DAT_005ab7bc,uVar2);
}

