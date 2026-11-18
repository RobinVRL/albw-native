#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern int func_004FC6FC(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4, undefined4 param_5,undefined4 *param_6,undefined4 param_7);
extern int *DAT_005a565c;
extern undefined4 *DAT_005a5660;
extern undefined DAT_005a5664;
extern undefined4 DAT_005a5670;
extern int DAT_005a5680;
extern uint *DAT_005a5684;
extern undefined4 DAT_005a5688;
extern undefined4 *DAT_005a568c;
extern undefined4 DAT_005a5690;
extern undefined4 DAT_005a5694;
extern undefined4 *DAT_005a5698;
extern undefined DAT_005a569c;
extern undefined DAT_005a56a4;
extern uint DAT_005a5704;
extern undefined4 *DAT_005a5708;
extern uint DAT_005a570c;
extern undefined4 *DAT_005a5710;
extern undefined4 DAT_005a5714;
extern char s_EnemyPamet_005a5674[];
extern char s_jitabata_005a56cc[];
extern char s_jitabata_ura_005a56d8[];
extern char s_piyopiyo_005a56e8[];
extern char s_piyopiyo_ura_005a56f4[];
extern char s_return_005a56c4[];
extern char s_struggle_005a56ac[];
extern char s_struggle_ed_005a56b8[];

// USA 005A5504 <- EU 005A54DC (Ghidra, non-matching)
// GLOBAL DAT_005a565c int *
// GLOBAL DAT_005a5660 undefined4 *
// GLOBAL DAT_005a5664 undefined
// GLOBAL DAT_005a5670 undefined4
// GLOBAL DAT_005a5680 int
// GLOBAL DAT_005a5684 uint *
// GLOBAL DAT_005a5688 undefined4
// GLOBAL DAT_005a568c undefined4 *
// GLOBAL DAT_005a5690 undefined4
// GLOBAL DAT_005a5694 undefined4
// GLOBAL DAT_005a5698 undefined4 *
// GLOBAL DAT_005a569c undefined
// GLOBAL DAT_005a56a4 undefined
// GLOBAL DAT_005a5704 uint
// GLOBAL DAT_005a5708 undefined4 *
// GLOBAL DAT_005a570c uint
// GLOBAL DAT_005a5710 undefined4 *
// GLOBAL DAT_005a5714 undefined4
// GLOBAL s_EnemyPamet_005a5674 string
// GLOBAL s_jitabata_005a56cc string
// GLOBAL s_jitabata_ura_005a56d8 string
// GLOBAL s_piyopiyo_005a56e8 string
// GLOBAL s_piyopiyo_ura_005a56f4 string
// GLOBAL s_return_005a56c4 string
// GLOBAL s_struggle_005a56ac string
// GLOBAL s_struggle_ed_005a56b8 string

undefined8 func_005A5504(void)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
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
  piVar1 = DAT_005a565c;
  DAT_005a565c[2] = -1;
  piVar1[3] = -1;
  piVar1[4] = 0;
  piVar1[5] = 0;
  puVar3 = DAT_005a5660;
  puVar5 = DAT_005a5660 + 3;
  DAT_005a5660[1] = 5;
  puVar3[2] = puVar5;
  *puVar3 = 0;
  uVar2 = DAT_005a5670;
  local_14 = &DAT_005a5664;
  local_18 = DAT_005a5670;
  local_1c = s_EnemyPamet_005a5674;
  local_20 = DAT_005a5670;
  iVar4 = *piVar1;
  if (*piVar1 == 0) {
    iVar4 = DAT_005a5680;
  }
  func_0019B51C(DAT_005a568c,DAT_005a5688,*DAT_005a5684,(int)&local_20,DAT_005a5660,&local_18,iVar4)
  ;
  puVar3 = DAT_005a5698;
  DAT_005a5698[1] = &DAT_005a569c;
  *puVar3 = uVar2;
  puVar3[3] = &DAT_005a56a4;
  puVar3[2] = uVar2;
  puVar3[5] = s_struggle_005a56ac;
  puVar3[4] = uVar2;
  puVar3[7] = s_struggle_ed_005a56b8;
  puVar3[6] = uVar2;
  puVar3[9] = s_return_005a56c4;
  puVar3[8] = uVar2;
  puVar3[0xb] = s_jitabata_005a56cc;
  puVar3[10] = uVar2;
  puVar3[0xd] = s_jitabata_ura_005a56d8;
  puVar3[0xc] = uVar2;
  puVar3[0xf] = s_piyopiyo_005a56e8;
  puVar3[0xe] = uVar2;
  puVar3[0x10] = uVar2;
  puVar3[0x11] = s_piyopiyo_ura_005a56f4;
  puVar3 = DAT_005a5708;
  uVar6 = func_00114608(DAT_005a570c,DAT_005a5704);
  *puVar3 = (int)uVar6;
  local_28 = 0;
  local_27 = 0;
  local_26 = 0;
  local_24 = 0xff;
  local_25 = 0xff;
  puVar3 = func_004FC6FC(DAT_005a5710,0,0,0,0,(undefined4 *)&local_28,0xb);
  return CONCAT44(DAT_005a5714,puVar3);
}

