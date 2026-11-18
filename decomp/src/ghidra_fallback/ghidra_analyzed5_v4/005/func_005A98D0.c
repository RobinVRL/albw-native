#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern int func_004FC6FC(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4, undefined4 param_5,undefined4 *param_6,undefined4 param_7);
extern int *DAT_005a9a74;
extern undefined4 *DAT_005a9a78;
extern undefined DAT_005a9a7c;
extern undefined4 DAT_005a9a84;
extern undefined DAT_005a9a88;
extern undefined DAT_005a9a94;
extern undefined4 DAT_005a9aa8;
extern uint DAT_005a9aac;
extern uint DAT_005a9ab0;
extern undefined4 *DAT_005a9ab4;
extern undefined4 DAT_005a9ab8;
extern undefined4 *DAT_005a9abc;
extern undefined DAT_005a9ac0;
extern int DAT_005a9ad8;
extern uint *DAT_005a9adc;
extern undefined4 DAT_005a9ae0;
extern undefined4 *DAT_005a9ae4;
extern undefined4 DAT_005a9ae8;
extern undefined4 *DAT_005a9aec;
extern undefined DAT_005a9af0;
extern int DAT_005a9b08;
extern uint *DAT_005a9b0c;
extern undefined4 *DAT_005a9b10;
extern char s_EnemyCrowly_005a9acc[];
extern char s_EnemyKyune_005a9afc[];
extern char s_damage_005a9a8c[];
extern char s_piyopiyo_005a9a9c[];

// USA 005A98D0 <- EU 005A98A8 (Ghidra, non-matching)
// GLOBAL DAT_005a9a74 int *
// GLOBAL DAT_005a9a78 undefined4 *
// GLOBAL DAT_005a9a7c undefined
// GLOBAL DAT_005a9a84 undefined4
// GLOBAL DAT_005a9a88 undefined
// GLOBAL DAT_005a9a94 undefined
// GLOBAL DAT_005a9aa8 undefined4
// GLOBAL DAT_005a9aac uint
// GLOBAL DAT_005a9ab0 uint
// GLOBAL DAT_005a9ab4 undefined4 *
// GLOBAL DAT_005a9ab8 undefined4
// GLOBAL DAT_005a9abc undefined4 *
// GLOBAL DAT_005a9ac0 undefined
// GLOBAL DAT_005a9ad8 int
// GLOBAL DAT_005a9adc uint *
// GLOBAL DAT_005a9ae0 undefined4
// GLOBAL DAT_005a9ae4 undefined4 *
// GLOBAL DAT_005a9ae8 undefined4
// GLOBAL DAT_005a9aec undefined4 *
// GLOBAL DAT_005a9af0 undefined
// GLOBAL DAT_005a9b08 int
// GLOBAL DAT_005a9b0c uint *
// GLOBAL DAT_005a9b10 undefined4 *
// GLOBAL s_EnemyCrowly_005a9acc string
// GLOBAL s_EnemyKyune_005a9afc string
// GLOBAL s_damage_005a9a8c string
// GLOBAL s_piyopiyo_005a9a9c string

undefined8 func_005A98D0(void)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
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
  piVar1 = DAT_005a9a74;
  DAT_005a9a74[4] = -1;
  piVar1[5] = -1;
  uVar3 = DAT_005a9a84;
  piVar1[6] = 0;
  piVar1[7] = 0;
  puVar2 = DAT_005a9a78;
  DAT_005a9a78[1] = &DAT_005a9a7c;
  *puVar2 = uVar3;
  puVar2[3] = &DAT_005a9a88;
  puVar2[2] = uVar3;
  puVar2[5] = &DAT_005a9a88;
  puVar2[4] = uVar3;
  puVar2[7] = s_damage_005a9a8c;
  puVar2[6] = uVar3;
  puVar2[9] = &DAT_005a9a94;
  puVar2[8] = uVar3;
  puVar2[10] = uVar3;
  puVar2[0xb] = s_piyopiyo_005a9a9c;
  uVar6 = func_00114608(DAT_005a9ab0,DAT_005a9aac);
  piVar1[2] = (int)uVar6;
  local_38 = 0;
  local_37 = 0;
  local_36 = 0;
  local_34 = 0xff;
  local_35 = 0xff;
  func_004FC6FC(DAT_005a9ab4,0,0,0,0,(undefined4 *)&local_38,0xb);
  puVar2 = DAT_005a9abc;
  puVar5 = DAT_005a9abc + 3;
  DAT_005a9abc[1] = 5;
  puVar2[2] = puVar5;
  *puVar2 = 0;
  local_24 = &DAT_005a9ac0;
  local_28 = uVar3;
  local_2c = s_EnemyCrowly_005a9acc;
  local_30 = uVar3;
  iVar4 = *piVar1;
  if (*piVar1 == 0) {
    iVar4 = DAT_005a9ad8;
  }
  func_0019B51C(DAT_005a9ae4,DAT_005a9ae0,*DAT_005a9adc,(int)&local_30,DAT_005a9abc,&local_28,iVar4)
  ;
  puVar2 = DAT_005a9aec;
  puVar5 = DAT_005a9aec + 3;
  DAT_005a9aec[1] = 5;
  puVar2[2] = puVar5;
  *puVar2 = 0;
  local_14 = &DAT_005a9af0;
  local_18 = uVar3;
  local_1c = s_EnemyKyune_005a9afc;
  local_20 = uVar3;
  iVar4 = piVar1[1];
  if (piVar1[1] == 0) {
    iVar4 = DAT_005a9b08;
  }
  uVar3 = func_0019B51C(DAT_005a9b10,DAT_005a9ae0,*DAT_005a9b0c,(int)&local_20,DAT_005a9aec,
                        &local_18,iVar4);
  return CONCAT44(DAT_005a9ae8,uVar3);
}

