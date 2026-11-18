#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005a1bc4;
extern undefined4 *DAT_005a1bc8;
extern undefined4 *DAT_005a1bcc;
extern undefined DAT_005a1bd0;
extern undefined4 DAT_005a1bd8;
extern uint *DAT_005a1be8;
extern undefined4 DAT_005a1bec;
extern undefined4 *DAT_005a1bf0;
extern undefined4 DAT_005a1bf4;
extern undefined4 DAT_005a1bf8;
extern undefined4 *DAT_005a1bfc;
extern undefined4 DAT_005a1c08;
extern undefined4 *DAT_005a1c0c;
extern uint DAT_005a1c10;
extern uint DAT_005a1c14;
extern uint DAT_005a1c18;
extern char s_EfBeam_005a1c00[];
extern char s_MojBeamos_005a1bdc[];

// USA 005A1AF4 <- EU 005A1ACC (Ghidra, non-matching)
// GLOBAL DAT_005a1bc4 undefined4 *
// GLOBAL DAT_005a1bc8 undefined4 *
// GLOBAL DAT_005a1bcc undefined4 *
// GLOBAL DAT_005a1bd0 undefined
// GLOBAL DAT_005a1bd8 undefined4
// GLOBAL DAT_005a1be8 uint *
// GLOBAL DAT_005a1bec undefined4
// GLOBAL DAT_005a1bf0 undefined4 *
// GLOBAL DAT_005a1bf4 undefined4
// GLOBAL DAT_005a1bf8 undefined4
// GLOBAL DAT_005a1bfc undefined4 *
// GLOBAL DAT_005a1c08 undefined4
// GLOBAL DAT_005a1c0c undefined4 *
// GLOBAL DAT_005a1c10 uint
// GLOBAL DAT_005a1c14 uint
// GLOBAL DAT_005a1c18 uint
// GLOBAL s_EfBeam_005a1c00 string
// GLOBAL s_MojBeamos_005a1bdc string

void func_005A1AF4(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define local_c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005a1bc4;
  DAT_005a1bc4[2] = 0xffffffff;
  puVar1[3] = 0xffffffff;
  uVar2 = DAT_005a1bd8;
  puVar1 = DAT_005a1bc8;
  *DAT_005a1bc8 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005a1bcc;
  puVar3 = DAT_005a1bcc + 3;
  *DAT_005a1bcc = 0;
  puVar1[1] = 5;
  puVar1[2] = puVar3;
  local_c = &DAT_005a1bd0;
  local_14 = s_MojBeamos_005a1bdc;
  local_10 = uVar2;
  uStack_18 = uVar2;
  func_0019B51C(DAT_005a1bf0,DAT_005a1bec,*DAT_005a1be8,(int)&uStack_18,DAT_005a1bcc,&local_10,0);
  puVar1 = DAT_005a1bfc;
  DAT_005a1bfc[1] = s_EfBeam_005a1c00;
  *puVar1 = uVar2;
  puVar1 = DAT_005a1c0c;
  DAT_005a1c0c[1] = s_EfBeam_005a1c00;
  *puVar1 = uVar2;
  puVar1 = DAT_005a1bc4;
  uVar4 = func_00114608(DAT_005a1c14,DAT_005a1c10);
  *puVar1 = (int)uVar4;
  uVar4 = func_00114608(DAT_005a1c18,(uint)((ulonglong)uVar4 >> 0x20));
  puVar1[1] = (int)uVar4;
  return;
}

