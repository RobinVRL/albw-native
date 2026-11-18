#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern int func_004FC5F8(undefined4 *param_1,int *param_2,undefined4 param_3,uint param_4,undefined4 param_5, undefined4 *param_6,undefined4 param_7);
extern int *DAT_005ccbf4;
extern int *DAT_005ccbf8;
extern int DAT_005ccc08;
extern undefined4 DAT_005ccc18;
extern uint DAT_005ccc1c;
extern uint DAT_005ccc20;
extern uint DAT_005ccc24;
extern uint DAT_005ccc28;
extern uint DAT_005ccc2c;
extern undefined DAT_005ccc30;
extern undefined4 *DAT_005ccc44;
extern undefined4 DAT_005ccc48;
extern undefined4 *DAT_005ccc4c;
extern undefined DAT_005ccc50;
extern int DAT_005ccc70;
extern uint *DAT_005ccc74;
extern undefined4 DAT_005ccc78;
extern undefined4 *DAT_005ccc7c;
extern undefined4 DAT_005ccc80;
extern char s_EnemyHagureHead_005ccc60[];
extern char s_cMHagureBoss_head_005ccc32[];
extern char s_end_head_005ccc0c[];
extern char s_fire_head_005ccbfc[];
extern undefined4 _DAT_005ccc30;

// USA 005CCA80 <- EU 005CCA58 (Ghidra, non-matching)
// GLOBAL DAT_005ccbf4 int *
// GLOBAL DAT_005ccbf8 int *
// GLOBAL DAT_005ccc08 int
// GLOBAL DAT_005ccc18 undefined4
// GLOBAL DAT_005ccc1c uint
// GLOBAL DAT_005ccc20 uint
// GLOBAL DAT_005ccc24 uint
// GLOBAL DAT_005ccc28 uint
// GLOBAL DAT_005ccc2c uint
// GLOBAL DAT_005ccc30 undefined
// GLOBAL DAT_005ccc44 undefined4 *
// GLOBAL DAT_005ccc48 undefined4
// GLOBAL DAT_005ccc4c undefined4 *
// GLOBAL DAT_005ccc50 undefined
// GLOBAL DAT_005ccc70 int
// GLOBAL DAT_005ccc74 uint *
// GLOBAL DAT_005ccc78 undefined4
// GLOBAL DAT_005ccc7c undefined4 *
// GLOBAL DAT_005ccc80 undefined4
// GLOBAL s_EnemyHagureHead_005ccc60 string
// GLOBAL s_cMHagureBoss_head_005ccc32 string
// GLOBAL s_end_head_005ccc0c string
// GLOBAL s_fire_head_005ccbfc string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 func_005CCA80(void)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(undefined1 *)(albw_frame + 0x8))
  #define local_37 (*(undefined1 *)(albw_frame + 0x9))
  #define local_36 (*(undefined1 *)(albw_frame + 0xa))
  #define local_35 (*(undefined1 *)(albw_frame + 0xb))
  #define local_34 (*(undefined1 *)(albw_frame + 0xc))
  #define local_30 (*(int *)(albw_frame + 0x10))
  #define local_2c (*(char * *)(albw_frame + 0x14))
  #define local_28 (*(int *)(albw_frame + 0x18))
  #define puStack_24 (*(undefined * *)(albw_frame + 0x1c))
  #define iStack_20 (*(int *)(albw_frame + 0x20))
  #define local_1c (*(char * *)(albw_frame + 0x24))
  iVar5 = DAT_005ccc08;
  piVar1 = DAT_005ccbf4;
  DAT_005ccbf4[8] = -1;
  piVar1[9] = -1;
  piVar1[10] = 0;
  piVar1[0xb] = 0;
  piVar2 = DAT_005ccbf8;
  DAT_005ccbf8[1] = (int)s_fire_head_005ccbfc;
  *piVar2 = iVar5;
  piVar2[2] = iVar5;
  piVar2[3] = (int)s_end_head_005ccc0c;
  uVar6 = func_00114608(DAT_005ccc20,DAT_005ccc1c);
  piVar1[1] = (int)uVar6;
  uVar6 = func_00114608(DAT_005ccc24,(uint)((ulonglong)uVar6 >> 0x20));
  piVar1[2] = (int)uVar6;
  uVar7 = func_00114608(DAT_005ccc28,(uint)((ulonglong)uVar6 >> 0x20));
  piVar1[3] = (int)uVar7;
  uVar7 = func_00114608(0,(uint)((ulonglong)uVar7 >> 0x20));
  piVar1[4] = (int)uVar7;
  uVar7 = func_00114608(DAT_005ccc2c,(uint)((ulonglong)uVar7 >> 0x20));
  piVar1[5] = (int)uVar7;
  uVar7 = func_00114608(_DAT_005ccc30,(uint)((ulonglong)uVar7 >> 0x20));
  piVar1[6] = (int)uVar7;
  piVar1[7] = (int)uVar6;
  local_38 = 0;
  local_37 = 0;
  local_36 = 0;
  local_34 = 0xff;
  local_2c = s_cMHagureBoss_head_005ccc32 + 2;
  local_35 = 0xff;
  local_30 = iVar5;
  func_004FC5F8(DAT_005ccc44,&local_30,2,1,0,(undefined4 *)&local_38,0xb);
  puVar3 = DAT_005ccc4c;
  DAT_005ccc4c[2] = DAT_005ccc4c + 3;
  puVar3[1] = 5;
  *puVar3 = 0;
  local_28 = iVar5;
  puStack_24 = &DAT_005ccc50;
  iStack_20 = iVar5;
  local_1c = s_EnemyHagureHead_005ccc60;
  iVar5 = *piVar1;
  if (*piVar1 == 0) {
    iVar5 = DAT_005ccc70;
  }
  uVar4 = func_0019B51C(DAT_005ccc7c,DAT_005ccc78,*DAT_005ccc74,(int)&iStack_20,DAT_005ccc4c,
                        &local_28,iVar5);
  return CONCAT44(DAT_005ccc80,uVar4);
}

