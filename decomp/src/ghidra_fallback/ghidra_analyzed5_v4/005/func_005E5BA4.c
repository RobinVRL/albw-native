#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern int func_004FC5F8(undefined4 *param_1,int *param_2,undefined4 param_3,uint param_4,undefined4 param_5, undefined4 *param_6,undefined4 param_7);
extern int *DAT_005e5ca4;
extern undefined DAT_005e5ca8;
extern int DAT_005e5cc0;
extern undefined4 *DAT_005e5cc4;
extern undefined4 DAT_005e5cc8;
extern undefined4 DAT_005e5ccc;
extern undefined4 *DAT_005e5cd0;
extern undefined DAT_005e5cd4;
extern int DAT_005e5cf8;
extern uint *DAT_005e5cfc;
extern undefined4 DAT_005e5d00;
extern undefined4 *DAT_005e5d04;
extern undefined4 DAT_005e5d08;
extern char s_EnemyHagureShield_005e5ce4[];
extern char s_LHagureBoss_shield_005e5cab[];
extern undefined4 _DAT_005e5ca8;

// USA 005E5BA4 <- EU 005E5B7C (Ghidra, non-matching)
// GLOBAL DAT_005e5ca4 int *
// GLOBAL DAT_005e5ca8 undefined
// GLOBAL DAT_005e5cc0 int
// GLOBAL DAT_005e5cc4 undefined4 *
// GLOBAL DAT_005e5cc8 undefined4
// GLOBAL DAT_005e5ccc undefined4
// GLOBAL DAT_005e5cd0 undefined4 *
// GLOBAL DAT_005e5cd4 undefined
// GLOBAL DAT_005e5cf8 int
// GLOBAL DAT_005e5cfc uint *
// GLOBAL DAT_005e5d00 undefined4
// GLOBAL DAT_005e5d04 undefined4 *
// GLOBAL DAT_005e5d08 undefined4
// GLOBAL s_EnemyHagureShield_005e5ce4 string
// GLOBAL s_LHagureBoss_shield_005e5cab string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 func_005E5BA4(void)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(int *)(albw_frame + 0x0))
  #define local_2c (*(char * *)(albw_frame + 0x4))
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define puStack_24 (*(undefined * *)(albw_frame + 0xc))
  #define iStack_20 (*(int *)(albw_frame + 0x10))
  #define local_1c (*(char * *)(albw_frame + 0x14))
  #define local_18 (*(undefined1 *)(albw_frame + 0x18))
  #define local_17 (*(undefined1 *)(albw_frame + 0x19))
  #define local_16 (*(undefined1 *)(albw_frame + 0x1a))
  #define local_15 (*(undefined1 *)(albw_frame + 0x1b))
  #define local_14 (*(undefined1 *)(albw_frame + 0x1c))
  piVar1 = DAT_005e5ca4;
  DAT_005e5ca4[4] = -1;
  piVar1[5] = -1;
  piVar1[6] = 0;
  piVar1[7] = 0;
  uVar6 = func_00114608(0,0xffffffff);
  piVar1[1] = (int)uVar6;
  piVar1[2] = (int)uVar6;
  uVar6 = func_00114608(_DAT_005e5ca8,(uint)(piVar1 + 2));
  piVar1[3] = (int)uVar6;
  iVar4 = DAT_005e5cc0;
  local_18 = 0;
  local_17 = 0;
  local_16 = 0;
  local_15 = 0xff;
  local_2c = s_LHagureBoss_shield_005e5cab + 1;
  local_14 = 0xff;
  local_30 = DAT_005e5cc0;
  func_004FC5F8(DAT_005e5cc4,&local_30,2,0,0,(undefined4 *)&local_18,0xb);
  puVar2 = DAT_005e5cd0;
  puVar5 = DAT_005e5cd0 + 3;
  DAT_005e5cd0[1] = 5;
  puVar2[2] = puVar5;
  *puVar2 = 0;
  local_28 = iVar4;
  puStack_24 = &DAT_005e5cd4;
  iStack_20 = iVar4;
  local_1c = s_EnemyHagureShield_005e5ce4;
  iVar4 = *piVar1;
  if (*piVar1 == 0) {
    iVar4 = DAT_005e5cf8;
  }
  uVar3 = func_0019B51C(DAT_005e5d04,DAT_005e5d00,*DAT_005e5cfc,(int)&iStack_20,DAT_005e5cd0,
                        &local_28,iVar4);
  return CONCAT44(DAT_005e5d08,uVar3);
}

