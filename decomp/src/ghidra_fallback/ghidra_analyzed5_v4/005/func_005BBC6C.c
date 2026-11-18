#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern int func_004FC6FC(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4, undefined4 param_5,undefined4 *param_6,undefined4 param_7);
extern int *DAT_005bbd84;
extern int *DAT_005bbd88;
extern undefined DAT_005bbd8c;
extern int DAT_005bbd94;
extern undefined4 DAT_005bbda0;
extern undefined4 DAT_005bbda4;
extern undefined4 DAT_005bbdb4;
extern undefined4 *DAT_005bbdb8;
extern undefined4 DAT_005bbdbc;
extern undefined4 *DAT_005bbdc0;
extern undefined DAT_005bbdc4;
extern int DAT_005bbde0;
extern uint *DAT_005bbde4;
extern undefined4 DAT_005bbde8;
extern undefined4 *DAT_005bbdec;
extern undefined4 DAT_005bbdf0;
extern char s_EnemyKyameron_005bbdd0[];
extern char s_Kyameron_005bbda8[];
extern char s_appear_005bbd98[];

// USA 005BBC6C <- EU 005BBC44 (Ghidra, non-matching)
// GLOBAL DAT_005bbd84 int *
// GLOBAL DAT_005bbd88 int *
// GLOBAL DAT_005bbd8c undefined
// GLOBAL DAT_005bbd94 int
// GLOBAL DAT_005bbda0 undefined4
// GLOBAL DAT_005bbda4 undefined4
// GLOBAL DAT_005bbdb4 undefined4
// GLOBAL DAT_005bbdb8 undefined4 *
// GLOBAL DAT_005bbdbc undefined4
// GLOBAL DAT_005bbdc0 undefined4 *
// GLOBAL DAT_005bbdc4 undefined
// GLOBAL DAT_005bbde0 int
// GLOBAL DAT_005bbde4 uint *
// GLOBAL DAT_005bbde8 undefined4
// GLOBAL DAT_005bbdec undefined4 *
// GLOBAL DAT_005bbdf0 undefined4
// GLOBAL s_EnemyKyameron_005bbdd0 string
// GLOBAL s_Kyameron_005bbda8 string
// GLOBAL s_appear_005bbd98 string

undefined8 func_005BBC6C(void)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(undefined1 *)(albw_frame + 0x8))
  #define local_27 (*(undefined1 *)(albw_frame + 0x9))
  #define local_26 (*(undefined1 *)(albw_frame + 0xa))
  #define local_25 (*(undefined1 *)(albw_frame + 0xb))
  #define local_24 (*(undefined1 *)(albw_frame + 0xc))
  #define local_20 (*(int *)(albw_frame + 0x10))
  #define local_1c (*(char * *)(albw_frame + 0x14))
  #define local_18 (*(int *)(albw_frame + 0x18))
  #define local_14 (*(undefined * *)(albw_frame + 0x1c))
  piVar1 = DAT_005bbd84;
  DAT_005bbd84[2] = -1;
  piVar1[3] = -1;
  iVar5 = DAT_005bbd94;
  piVar1[4] = 0;
  piVar1[5] = 0;
  piVar2 = DAT_005bbd88;
  DAT_005bbd88[1] = (int)&DAT_005bbd8c;
  *piVar2 = iVar5;
  piVar2[2] = iVar5;
  piVar2[3] = (int)s_appear_005bbd98;
  piVar1[7] = (int)s_Kyameron_005bbda8;
  piVar1[6] = iVar5;
  local_28 = 0;
  local_27 = 0;
  local_26 = 0;
  local_24 = 0xff;
  local_25 = 0xff;
  func_004FC6FC(DAT_005bbdb8,0,1,0,0,(undefined4 *)&local_28,0xb);
  puVar3 = DAT_005bbdc0;
  DAT_005bbdc0[2] = DAT_005bbdc0 + 3;
  puVar3[1] = 5;
  *puVar3 = 0;
  local_14 = &DAT_005bbdc4;
  local_18 = iVar5;
  local_1c = s_EnemyKyameron_005bbdd0;
  local_20 = iVar5;
  iVar5 = *piVar1;
  if (*piVar1 == 0) {
    iVar5 = DAT_005bbde0;
  }
  uVar4 = func_0019B51C(DAT_005bbdec,DAT_005bbde8,*DAT_005bbde4,(int)&local_20,DAT_005bbdc0,
                        &local_18,iVar5);
  return CONCAT44(DAT_005bbdf0,uVar4);
}

