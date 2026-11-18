#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern int func_004FC6FC(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4, undefined4 param_5,undefined4 *param_6,undefined4 param_7);
extern int *DAT_005a014c;
extern int *DAT_005a0150;
extern undefined DAT_005a0154;
extern int DAT_005a015c;
extern undefined DAT_005a0160;
extern undefined DAT_005a0164;
extern undefined DAT_005a016c;
extern undefined4 DAT_005a0180;
extern undefined4 DAT_005a0184;
extern undefined DAT_005a0188;
extern undefined4 DAT_005a0190;
extern undefined4 *DAT_005a0194;
extern undefined4 DAT_005a0198;
extern undefined4 *DAT_005a019c;
extern undefined DAT_005a01a0;
extern int DAT_005a01b4;
extern uint *DAT_005a01b8;
extern undefined4 DAT_005a01bc;
extern undefined4 *DAT_005a01c0;
extern undefined4 DAT_005a01c4;
extern char s_EnemyPawn_005a01a8[];
extern char s_piyopiyo_005a0174[];

// USA 005A0014 <- EU 0059FFEC (Ghidra, non-matching)
// GLOBAL DAT_005a014c int *
// GLOBAL DAT_005a0150 int *
// GLOBAL DAT_005a0154 undefined
// GLOBAL DAT_005a015c int
// GLOBAL DAT_005a0160 undefined
// GLOBAL DAT_005a0164 undefined
// GLOBAL DAT_005a016c undefined
// GLOBAL DAT_005a0180 undefined4
// GLOBAL DAT_005a0184 undefined4
// GLOBAL DAT_005a0188 undefined
// GLOBAL DAT_005a0190 undefined4
// GLOBAL DAT_005a0194 undefined4 *
// GLOBAL DAT_005a0198 undefined4
// GLOBAL DAT_005a019c undefined4 *
// GLOBAL DAT_005a01a0 undefined
// GLOBAL DAT_005a01b4 int
// GLOBAL DAT_005a01b8 uint *
// GLOBAL DAT_005a01bc undefined4
// GLOBAL DAT_005a01c0 undefined4 *
// GLOBAL DAT_005a01c4 undefined4
// GLOBAL s_EnemyPawn_005a01a8 string
// GLOBAL s_piyopiyo_005a0174 string

undefined8 func_005A0014(void)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
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
  piVar1 = DAT_005a014c;
  DAT_005a014c[2] = -1;
  piVar1[3] = -1;
  iVar5 = DAT_005a015c;
  piVar1[4] = 0;
  piVar1[5] = 0;
  piVar2 = DAT_005a0150;
  DAT_005a0150[1] = (int)&DAT_005a0154;
  *piVar2 = iVar5;
  piVar2[3] = (int)&DAT_005a0160;
  piVar2[2] = iVar5;
  piVar2[5] = (int)&DAT_005a0164;
  piVar2[4] = iVar5;
  piVar2[7] = (int)&DAT_005a016c;
  piVar2[6] = iVar5;
  piVar2[8] = iVar5;
  piVar2[9] = (int)s_piyopiyo_005a0174;
  piVar1[7] = (int)&DAT_005a0188;
  piVar1[6] = iVar5;
  local_28 = 0;
  local_27 = 0;
  local_26 = 0;
  local_24 = 0xff;
  local_25 = 0xff;
  func_004FC6FC(DAT_005a0194,0,1,0,0,(undefined4 *)&local_28,0xb);
  puVar3 = DAT_005a019c;
  puVar6 = DAT_005a019c + 3;
  DAT_005a019c[1] = 5;
  puVar3[2] = puVar6;
  *puVar3 = 0;
  local_14 = &DAT_005a01a0;
  local_18 = iVar5;
  local_1c = s_EnemyPawn_005a01a8;
  local_20 = iVar5;
  iVar5 = *piVar1;
  if (*piVar1 == 0) {
    iVar5 = DAT_005a01b4;
  }
  uVar4 = func_0019B51C(DAT_005a01c0,DAT_005a01bc,*DAT_005a01b8,(int)&local_20,DAT_005a019c,
                        &local_18,iVar5);
  return CONCAT44(DAT_005a01c4,uVar4);
}

