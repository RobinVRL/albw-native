#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005c4744;
extern undefined4 *DAT_005c4748;
extern undefined4 *DAT_005c474c;
extern undefined DAT_005c4750;
extern undefined4 DAT_005c475c;
extern uint *DAT_005c4774;
extern undefined4 DAT_005c4778;
extern undefined4 *DAT_005c477c;
extern undefined4 DAT_005c4780;
extern undefined4 DAT_005c4784;
extern undefined4 *DAT_005c4788;
extern undefined DAT_005c478c;
extern uint *DAT_005c47ac;
extern undefined4 DAT_005c47b0;
extern undefined4 *DAT_005c47b4;
extern char s_MassBlockColorBlue_005c4760[];
extern char s_MassBlockColorRed_005c4798[];

// USA 005C4664 <- EU 005C463C (Ghidra, non-matching)
// GLOBAL DAT_005c4744 undefined4 *
// GLOBAL DAT_005c4748 undefined4 *
// GLOBAL DAT_005c474c undefined4 *
// GLOBAL DAT_005c4750 undefined
// GLOBAL DAT_005c475c undefined4
// GLOBAL DAT_005c4774 uint *
// GLOBAL DAT_005c4778 undefined4
// GLOBAL DAT_005c477c undefined4 *
// GLOBAL DAT_005c4780 undefined4
// GLOBAL DAT_005c4784 undefined4
// GLOBAL DAT_005c4788 undefined4 *
// GLOBAL DAT_005c478c undefined
// GLOBAL DAT_005c47ac uint *
// GLOBAL DAT_005c47b0 undefined4
// GLOBAL DAT_005c47b4 undefined4 *
// GLOBAL s_MassBlockColorBlue_005c4760 string
// GLOBAL s_MassBlockColorRed_005c4798 string

undefined8 func_005C4664(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(undefined4 *)(albw_frame + 0x0))
  #define local_2c (*(char * *)(albw_frame + 0x4))
  #define local_28 (*(undefined4 *)(albw_frame + 0x8))
  #define local_24 (*(undefined * *)(albw_frame + 0xc))
  #define local_20 (*(undefined4 *)(albw_frame + 0x10))
  #define local_1c (*(char * *)(albw_frame + 0x14))
  #define local_18 (*(undefined4 *)(albw_frame + 0x18))
  #define local_14 (*(undefined * *)(albw_frame + 0x1c))
  puVar1 = DAT_005c4744;
  *DAT_005c4744 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005c4748;
  *DAT_005c4748 = 0;
  puVar1[1] = 0;
  uVar2 = DAT_005c475c;
  puVar1 = DAT_005c474c;
  puVar3 = DAT_005c474c + 3;
  DAT_005c474c[1] = 5;
  puVar1[2] = puVar3;
  *puVar1 = 0;
  local_24 = &DAT_005c4750;
  local_2c = s_MassBlockColorBlue_005c4760;
  local_28 = uVar2;
  local_30 = uVar2;
  func_0019B51C(DAT_005c477c,DAT_005c4778,*DAT_005c4774,(int)&local_30,DAT_005c474c,&local_28,0);
  puVar1 = DAT_005c4788;
  puVar3 = DAT_005c4788 + 3;
  DAT_005c4788[1] = 5;
  puVar1[2] = puVar3;
  *puVar1 = 0;
  local_14 = &DAT_005c478c;
  local_1c = s_MassBlockColorRed_005c4798;
  local_18 = uVar2;
  local_20 = uVar2;
  uVar2 = func_0019B51C(DAT_005c47b4,DAT_005c47b0,*DAT_005c47ac,(int)&local_20,DAT_005c4788,
                        &local_18,0);
  return CONCAT44(DAT_005c4784,uVar2);
}

