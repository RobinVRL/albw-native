#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern int func_004FC6FC(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4, undefined4 param_5,undefined4 *param_6,undefined4 param_7);
extern int *DAT_005a0cc0;
extern undefined4 *DAT_005a0cc4;
extern undefined4 DAT_005a0cc8;
extern undefined4 DAT_005a0ccc;
extern undefined4 *DAT_005a0cd0;
extern undefined DAT_005a0cd4;
extern undefined4 DAT_005a0cdc;
extern int DAT_005a0cec;
extern uint *DAT_005a0cf0;
extern undefined4 DAT_005a0cf4;
extern undefined4 *DAT_005a0cf8;
extern undefined4 DAT_005a0cfc;
extern undefined4 *DAT_005a0d00;
extern undefined DAT_005a0d04;
extern int DAT_005a0d20;
extern uint *DAT_005a0d24;
extern undefined4 *DAT_005a0d28;
extern char s_EnemyTail_005a0ce0[];
extern char s_EnemyUraTail_005a0d10[];

// USA 005A0B8C <- EU 005A0B64 (Ghidra, non-matching)
// GLOBAL DAT_005a0cc0 int *
// GLOBAL DAT_005a0cc4 undefined4 *
// GLOBAL DAT_005a0cc8 undefined4
// GLOBAL DAT_005a0ccc undefined4
// GLOBAL DAT_005a0cd0 undefined4 *
// GLOBAL DAT_005a0cd4 undefined
// GLOBAL DAT_005a0cdc undefined4
// GLOBAL DAT_005a0cec int
// GLOBAL DAT_005a0cf0 uint *
// GLOBAL DAT_005a0cf4 undefined4
// GLOBAL DAT_005a0cf8 undefined4 *
// GLOBAL DAT_005a0cfc undefined4
// GLOBAL DAT_005a0d00 undefined4 *
// GLOBAL DAT_005a0d04 undefined
// GLOBAL DAT_005a0d20 int
// GLOBAL DAT_005a0d24 uint *
// GLOBAL DAT_005a0d28 undefined4 *
// GLOBAL s_EnemyTail_005a0ce0 string
// GLOBAL s_EnemyUraTail_005a0d10 string

undefined8 func_005A0B8C(void)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(undefined1 *)(albw_frame + 0x8))
  #define local_37 (*(undefined1 *)(albw_frame + 0x9))
  #define local_36 (*(undefined1 *)(albw_frame + 0xa))
  #define local_35 (*(undefined1 *)(albw_frame + 0xb))
  #define local_34 (*(undefined1 *)(albw_frame + 0xc))
  #define local_30 (*(undefined4 *)(albw_frame + 0x10))
  #define local_2c (*(char * *)(albw_frame + 0x14))
  #define local_28 (*(undefined4 *)(albw_frame + 0x18))
  #define local_24 (*(undefined * *)(albw_frame + 0x1c))
  #define local_20 (*(undefined4 *)(albw_frame + 0x20))
  #define local_1c (*(char * *)(albw_frame + 0x24))
  #define local_18 (*(undefined4 *)(albw_frame + 0x28))
  #define local_14 (*(undefined * *)(albw_frame + 0x2c))
  piVar1 = DAT_005a0cc0;
  DAT_005a0cc0[2] = -1;
  piVar1[3] = -1;
  piVar1[4] = 0;
  piVar1[5] = 0;
  local_38 = 0;
  local_37 = 0;
  local_36 = 0;
  local_34 = 0xff;
  local_35 = 0xff;
  func_004FC6FC(DAT_005a0cc4,4,0,0,0,(undefined4 *)&local_38,0xb);
  local_18 = DAT_005a0cdc;
  puVar2 = DAT_005a0cd0;
  puVar5 = DAT_005a0cd0 + 3;
  DAT_005a0cd0[1] = 5;
  puVar2[2] = puVar5;
  *puVar2 = 0;
  local_24 = &DAT_005a0cd4;
  local_28 = local_18;
  local_2c = s_EnemyTail_005a0ce0;
  local_30 = local_18;
  iVar4 = *piVar1;
  if (*piVar1 == 0) {
    iVar4 = DAT_005a0cec;
  }
  func_0019B51C(DAT_005a0cf8,DAT_005a0cf4,*DAT_005a0cf0,(int)&local_30,DAT_005a0cd0,&local_28,iVar4)
  ;
  puVar2 = DAT_005a0d00;
  puVar5 = DAT_005a0d00 + 3;
  DAT_005a0d00[1] = 5;
  puVar2[2] = puVar5;
  *puVar2 = 0;
  local_14 = &DAT_005a0d04;
  local_1c = s_EnemyUraTail_005a0d10;
  local_20 = local_18;
  iVar4 = piVar1[1];
  if (piVar1[1] == 0) {
    iVar4 = DAT_005a0d20;
  }
  uVar3 = func_0019B51C(DAT_005a0d28,DAT_005a0cf4,*DAT_005a0d24,(int)&local_20,DAT_005a0d00,
                        &local_18,iVar4);
  return CONCAT44(DAT_005a0cfc,uVar3);
}

