#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005a710c;
extern undefined4 *DAT_005a7110;
extern undefined4 *DAT_005a7114;
extern undefined4 DAT_005a7124;
extern undefined4 DAT_005a714c;
extern undefined4 DAT_005a7150;
extern undefined4 *DAT_005a7154;
extern undefined DAT_005a7158;
extern uint *DAT_005a7170;
extern undefined4 DAT_005a7174;
extern undefined4 *DAT_005a7178;
extern undefined4 DAT_005a717c;
extern undefined4 *DAT_005a7180;
extern uint DAT_005a718c;
extern undefined4 DAT_005a7190;
extern undefined4 *DAT_005a7194;
extern undefined4 DAT_005a7198;
extern uint DAT_005a719c;
extern char s_N_ArrowB_00_005a7128[];
extern char s_N_ArrowL_00_005a7134[];
extern char s_N_ArrowR_00_005a7140[];
extern char s_N_ArrowT_00_005a7118[];
extern char s_ObjPendant_005a7164[];
extern char s_Pendant_005a7184[];

// USA 005A7010 <- EU 005A6FE8 (Ghidra, non-matching)
// GLOBAL DAT_005a710c undefined4 *
// GLOBAL DAT_005a7110 undefined4 *
// GLOBAL DAT_005a7114 undefined4 *
// GLOBAL DAT_005a7124 undefined4
// GLOBAL DAT_005a714c undefined4
// GLOBAL DAT_005a7150 undefined4
// GLOBAL DAT_005a7154 undefined4 *
// GLOBAL DAT_005a7158 undefined
// GLOBAL DAT_005a7170 uint *
// GLOBAL DAT_005a7174 undefined4
// GLOBAL DAT_005a7178 undefined4 *
// GLOBAL DAT_005a717c undefined4
// GLOBAL DAT_005a7180 undefined4 *
// GLOBAL DAT_005a718c uint
// GLOBAL DAT_005a7190 undefined4
// GLOBAL DAT_005a7194 undefined4 *
// GLOBAL DAT_005a7198 undefined4
// GLOBAL DAT_005a719c uint
// GLOBAL s_N_ArrowB_00_005a7128 string
// GLOBAL s_N_ArrowL_00_005a7134 string
// GLOBAL s_N_ArrowR_00_005a7140 string
// GLOBAL s_N_ArrowT_00_005a7118 string
// GLOBAL s_ObjPendant_005a7164 string
// GLOBAL s_Pendant_005a7184 string

void func_005A7010(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define local_c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005a710c;
  DAT_005a710c[2] = 0xffffffff;
  puVar1[3] = 0xffffffff;
  uVar2 = DAT_005a7124;
  puVar1 = DAT_005a7110;
  *DAT_005a7110 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005a7114;
  DAT_005a7114[1] = s_N_ArrowT_00_005a7118;
  *puVar1 = uVar2;
  puVar1[3] = s_N_ArrowB_00_005a7128;
  puVar1[2] = uVar2;
  puVar1[5] = s_N_ArrowL_00_005a7134;
  puVar1[4] = uVar2;
  puVar1[6] = uVar2;
  puVar1[7] = s_N_ArrowR_00_005a7140;
  puVar1 = DAT_005a7154;
  puVar5 = DAT_005a7154 + 3;
  *DAT_005a7154 = 0;
  puVar1[1] = 5;
  puVar1[2] = puVar5;
  local_c = &DAT_005a7158;
  local_14 = s_ObjPendant_005a7164;
  local_10 = uVar2;
  uStack_18 = uVar2;
  func_0019B51C(DAT_005a7178,DAT_005a7174,*DAT_005a7170,(int)&uStack_18,DAT_005a7154,&local_10,0);
  puVar1 = DAT_005a7180;
  DAT_005a7180[1] = s_Pendant_005a7184;
  *puVar1 = uVar2;
  uVar4 = DAT_005a7198;
  puVar5 = DAT_005a7194;
  uVar2 = DAT_005a7190;
  uVar3 = DAT_005a718c;
  puVar1 = DAT_005a710c;
  *DAT_005a7194 = DAT_005a7190;
  puVar5[1] = uVar4;
  puVar5[2] = uVar2;
  uVar6 = func_00114608(DAT_005a719c,uVar3);
  *puVar1 = (int)uVar6;
  return;
}

