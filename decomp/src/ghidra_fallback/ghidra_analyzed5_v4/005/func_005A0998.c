#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern int func_004FC6FC(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4, undefined4 param_5,undefined4 *param_6,undefined4 param_7);
extern int *DAT_005a0ad8;
extern undefined4 *DAT_005a0adc;
extern undefined4 DAT_005a0ae8;
extern undefined DAT_005a0af4;
extern undefined DAT_005a0b14;
extern undefined DAT_005a0b1c;
extern undefined4 DAT_005a0b24;
extern uint DAT_005a0b28;
extern uint DAT_005a0b2c;
extern undefined4 *DAT_005a0b30;
extern undefined4 DAT_005a0b34;
extern undefined4 *DAT_005a0b38;
extern undefined DAT_005a0b3c;
extern int DAT_005a0b50;
extern uint *DAT_005a0b54;
extern undefined4 DAT_005a0b58;
extern undefined4 *DAT_005a0b5c;
extern undefined4 DAT_005a0b60;
extern char s_EnemyStal_005a0b44[];
extern char s_attack_005a0ae0[];
extern char s_damage_005a0aec[];
extern char s_jitabata_005a0afc[];
extern char s_piyopiyo_005a0b08[];

// USA 005A0998 <- EU 005A0970 (Ghidra, non-matching)
// GLOBAL DAT_005a0ad8 int *
// GLOBAL DAT_005a0adc undefined4 *
// GLOBAL DAT_005a0ae8 undefined4
// GLOBAL DAT_005a0af4 undefined
// GLOBAL DAT_005a0b14 undefined
// GLOBAL DAT_005a0b1c undefined
// GLOBAL DAT_005a0b24 undefined4
// GLOBAL DAT_005a0b28 uint
// GLOBAL DAT_005a0b2c uint
// GLOBAL DAT_005a0b30 undefined4 *
// GLOBAL DAT_005a0b34 undefined4
// GLOBAL DAT_005a0b38 undefined4 *
// GLOBAL DAT_005a0b3c undefined
// GLOBAL DAT_005a0b50 int
// GLOBAL DAT_005a0b54 uint *
// GLOBAL DAT_005a0b58 undefined4
// GLOBAL DAT_005a0b5c undefined4 *
// GLOBAL DAT_005a0b60 undefined4
// GLOBAL s_EnemyStal_005a0b44 string
// GLOBAL s_attack_005a0ae0 string
// GLOBAL s_damage_005a0aec string
// GLOBAL s_jitabata_005a0afc string
// GLOBAL s_piyopiyo_005a0b08 string

undefined8 func_005A0998(void)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(undefined1 *)(albw_frame + 0x8))
  #define local_27 (*(undefined1 *)(albw_frame + 0x9))
  #define local_26 (*(undefined1 *)(albw_frame + 0xa))
  #define local_25 (*(undefined1 *)(albw_frame + 0xb))
  #define local_24 (*(undefined1 *)(albw_frame + 0xc))
  #define local_20 (*(undefined4 *)(albw_frame + 0x10))
  #define local_1c (*(char * *)(albw_frame + 0x14))
  #define local_18 (*(undefined4 *)(albw_frame + 0x18))
  #define local_14 (*(undefined * *)(albw_frame + 0x1c))
  piVar1 = DAT_005a0ad8;
  DAT_005a0ad8[2] = -1;
  piVar1[3] = -1;
  uVar3 = DAT_005a0ae8;
  piVar1[4] = 0;
  piVar1[5] = 0;
  puVar2 = DAT_005a0adc;
  DAT_005a0adc[1] = s_attack_005a0ae0;
  *puVar2 = uVar3;
  puVar2[3] = s_damage_005a0aec;
  puVar2[2] = uVar3;
  puVar2[5] = &DAT_005a0af4;
  puVar2[4] = uVar3;
  puVar2[7] = s_jitabata_005a0afc;
  puVar2[6] = uVar3;
  puVar2[9] = s_piyopiyo_005a0b08;
  puVar2[8] = uVar3;
  puVar2[0xb] = &DAT_005a0b14;
  puVar2[10] = uVar3;
  puVar2[0xc] = uVar3;
  puVar2[0xd] = &DAT_005a0b1c;
  uVar6 = func_00114608(DAT_005a0b2c,DAT_005a0b28);
  piVar1[1] = (int)uVar6;
  local_28 = 0;
  local_27 = 0;
  local_26 = 0;
  local_24 = 0xff;
  local_25 = 0xff;
  func_004FC6FC(DAT_005a0b30,0,1,0,0,(undefined4 *)&local_28,0xb);
  puVar2 = DAT_005a0b38;
  puVar5 = DAT_005a0b38 + 3;
  DAT_005a0b38[1] = 5;
  puVar2[2] = puVar5;
  *puVar2 = 0;
  local_14 = &DAT_005a0b3c;
  local_18 = uVar3;
  local_1c = s_EnemyStal_005a0b44;
  local_20 = uVar3;
  iVar4 = *piVar1;
  if (*piVar1 == 0) {
    iVar4 = DAT_005a0b50;
  }
  uVar3 = func_0019B51C(DAT_005a0b5c,DAT_005a0b58,*DAT_005a0b54,(int)&local_20,DAT_005a0b38,
                        &local_18,iVar4);
  return CONCAT44(DAT_005a0b60,uVar3);
}

