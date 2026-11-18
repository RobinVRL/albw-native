#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern int func_004FC6FC(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4, undefined4 param_5,undefined4 *param_6,undefined4 param_7);
extern int *DAT_005a5090;
extern undefined4 *DAT_005a5094;
extern undefined4 DAT_005a50a0;
extern undefined4 DAT_005a50cc;
extern uint DAT_005a50d0;
extern undefined4 *DAT_005a50d4;
extern undefined4 DAT_005a50d8;
extern undefined4 DAT_005a50dc;
extern undefined4 DAT_005a50e0;
extern uint DAT_005a50e4;
extern uint DAT_005a50e8;
extern uint DAT_005a50ec;
extern uint DAT_005a50f0;
extern undefined4 *DAT_005a50f4;
extern undefined4 DAT_005a50f8;
extern undefined4 *DAT_005a50fc;
extern undefined DAT_005a5100;
extern int DAT_005a5114;
extern uint *DAT_005a5118;
extern undefined4 DAT_005a511c;
extern undefined4 *DAT_005a5120;
extern undefined4 DAT_005a5124;
extern undefined4 *DAT_005a5128;
extern undefined DAT_005a512c;
extern int DAT_005a5148;
extern uint *DAT_005a514c;
extern undefined4 *DAT_005a5150;
extern char s_EnemyChasupa_005a5138[];
extern char s_EnemyKeese_005a5108[];
extern char s_damage00_005a50a4[];
extern char s_dead00_005a50c4[];
extern char s_fly00_005a5098[];
extern char s_piyopiyo00_005a50b8[];
extern char s_wait00_005a50b0[];

// USA 005A4EB0 <- EU 005A4E88 (Ghidra, non-matching)
// GLOBAL DAT_005a5090 int *
// GLOBAL DAT_005a5094 undefined4 *
// GLOBAL DAT_005a50a0 undefined4
// GLOBAL DAT_005a50cc undefined4
// GLOBAL DAT_005a50d0 uint
// GLOBAL DAT_005a50d4 undefined4 *
// GLOBAL DAT_005a50d8 undefined4
// GLOBAL DAT_005a50dc undefined4
// GLOBAL DAT_005a50e0 undefined4
// GLOBAL DAT_005a50e4 uint
// GLOBAL DAT_005a50e8 uint
// GLOBAL DAT_005a50ec uint
// GLOBAL DAT_005a50f0 uint
// GLOBAL DAT_005a50f4 undefined4 *
// GLOBAL DAT_005a50f8 undefined4
// GLOBAL DAT_005a50fc undefined4 *
// GLOBAL DAT_005a5100 undefined
// GLOBAL DAT_005a5114 int
// GLOBAL DAT_005a5118 uint *
// GLOBAL DAT_005a511c undefined4
// GLOBAL DAT_005a5120 undefined4 *
// GLOBAL DAT_005a5124 undefined4
// GLOBAL DAT_005a5128 undefined4 *
// GLOBAL DAT_005a512c undefined
// GLOBAL DAT_005a5148 int
// GLOBAL DAT_005a514c uint *
// GLOBAL DAT_005a5150 undefined4 *
// GLOBAL s_EnemyChasupa_005a5138 string
// GLOBAL s_EnemyKeese_005a5108 string
// GLOBAL s_damage00_005a50a4 string
// GLOBAL s_dead00_005a50c4 string
// GLOBAL s_fly00_005a5098 string
// GLOBAL s_piyopiyo00_005a50b8 string
// GLOBAL s_wait00_005a50b0 string

undefined8 func_005A4EB0(void)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
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
  piVar1 = DAT_005a5090;
  DAT_005a5090[6] = -1;
  piVar1[7] = -1;
  uVar6 = DAT_005a50a0;
  piVar1[8] = 0;
  piVar1[9] = 0;
  puVar2 = DAT_005a5094;
  DAT_005a5094[1] = s_fly00_005a5098;
  *puVar2 = uVar6;
  puVar2[3] = s_damage00_005a50a4;
  puVar2[2] = uVar6;
  puVar2[5] = s_wait00_005a50b0;
  puVar2[4] = uVar6;
  puVar2[7] = s_piyopiyo00_005a50b8;
  puVar2[6] = uVar6;
  puVar2[8] = uVar6;
  puVar2[9] = s_dead00_005a50c4;
  uVar5 = DAT_005a50e0;
  uVar4 = DAT_005a50dc;
  puVar2 = DAT_005a50d4;
  uVar3 = DAT_005a50d0;
  *DAT_005a50d4 = DAT_005a50d8;
  puVar2[1] = uVar4;
  puVar2[2] = uVar5;
  uVar8 = func_00114608(DAT_005a50e4,uVar3);
  piVar1[2] = (int)uVar8;
  uVar8 = func_00114608(DAT_005a50e8,(uint)((ulonglong)uVar8 >> 0x20));
  piVar1[3] = (int)uVar8;
  uVar8 = func_00114608(DAT_005a50ec,(uint)((ulonglong)uVar8 >> 0x20));
  piVar1[4] = (int)uVar8;
  uVar8 = func_00114608(DAT_005a50f0,(uint)((ulonglong)uVar8 >> 0x20));
  piVar1[5] = (int)uVar8;
  local_38 = 0;
  local_37 = 0;
  local_36 = 0;
  local_34 = 0xff;
  local_35 = 0xff;
  func_004FC6FC(DAT_005a50f4,0,1,0,0,(undefined4 *)&local_38,0xb);
  puVar2 = DAT_005a50fc;
  DAT_005a50fc[2] = DAT_005a50fc + 3;
  puVar2[1] = 5;
  *puVar2 = 0;
  local_24 = &DAT_005a5100;
  local_28 = uVar6;
  local_2c = s_EnemyKeese_005a5108;
  local_30 = uVar6;
  iVar7 = *piVar1;
  if (*piVar1 == 0) {
    iVar7 = DAT_005a5114;
  }
  func_0019B51C(DAT_005a5120,DAT_005a511c,*DAT_005a5118,(int)&local_30,DAT_005a50fc,&local_28,iVar7)
  ;
  puVar2 = DAT_005a5128;
  DAT_005a5128[2] = DAT_005a5128 + 3;
  puVar2[1] = 5;
  *puVar2 = 0;
  local_14 = &DAT_005a512c;
  local_18 = uVar6;
  local_1c = s_EnemyChasupa_005a5138;
  local_20 = uVar6;
  iVar7 = piVar1[1];
  if (piVar1[1] == 0) {
    iVar7 = DAT_005a5148;
  }
  uVar6 = func_0019B51C(DAT_005a5150,DAT_005a511c,*DAT_005a514c,(int)&local_20,DAT_005a5128,
                        &local_18,iVar7);
  return CONCAT44(DAT_005a5124,uVar6);
}

