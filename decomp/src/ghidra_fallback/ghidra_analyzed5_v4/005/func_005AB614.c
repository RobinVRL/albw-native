#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005ab6a8;
extern undefined4 *DAT_005ab6ac;
extern undefined4 DAT_005ab6bc;
extern undefined4 DAT_005ab6c0;
extern undefined4 DAT_005ab6c4;
extern undefined4 *DAT_005ab6c8;
extern undefined DAT_005ab6cc;
extern uint *DAT_005ab6e4;
extern undefined4 DAT_005ab6e8;
extern undefined4 *DAT_005ab6ec;
extern undefined4 DAT_005ab6f0;
extern char s_DoorBoss_005ab6b0[];
extern char s_MojDoorBoss_005ab6d8[];

// USA 005AB614 <- EU 005AB5EC (Ghidra, non-matching)
// GLOBAL DAT_005ab6a8 undefined4 *
// GLOBAL DAT_005ab6ac undefined4 *
// GLOBAL DAT_005ab6bc undefined4
// GLOBAL DAT_005ab6c0 undefined4
// GLOBAL DAT_005ab6c4 undefined4
// GLOBAL DAT_005ab6c8 undefined4 *
// GLOBAL DAT_005ab6cc undefined
// GLOBAL DAT_005ab6e4 uint *
// GLOBAL DAT_005ab6e8 undefined4
// GLOBAL DAT_005ab6ec undefined4 *
// GLOBAL DAT_005ab6f0 undefined4
// GLOBAL s_DoorBoss_005ab6b0 string
// GLOBAL s_MojDoorBoss_005ab6d8 string

undefined8 func_005AB614(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define puStack_14 (*(undefined * *)(albw_frame + 0xc))
  #define uStack_10 (*(undefined4 *)(albw_frame + 0x10))
  #define local_c (*(char * *)(albw_frame + 0x14))
  puVar1 = DAT_005ab6a8;
  *DAT_005ab6a8 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  local_18 = DAT_005ab6bc;
  puVar1 = DAT_005ab6ac;
  *DAT_005ab6ac = 0;
  puVar1[1] = 0;
  puVar1[3] = s_DoorBoss_005ab6b0;
  puVar1[2] = local_18;
  puVar1 = DAT_005ab6c8;
  puVar3 = DAT_005ab6c8 + 3;
  *DAT_005ab6c8 = 0;
  puVar1[1] = 5;
  puVar1[2] = puVar3;
  puStack_14 = &DAT_005ab6cc;
  uStack_10 = local_18;
  local_c = s_MojDoorBoss_005ab6d8;
  uVar2 = func_0019B51C(DAT_005ab6ec,DAT_005ab6e8,*DAT_005ab6e4,(int)&uStack_10,DAT_005ab6c8,
                        &local_18,0);
  return CONCAT44(DAT_005ab6f0,uVar2);
}

