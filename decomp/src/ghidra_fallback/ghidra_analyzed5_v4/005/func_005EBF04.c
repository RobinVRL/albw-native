#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern int func_004FC6FC(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4, undefined4 param_5,undefined4 *param_6,undefined4 param_7);
extern int *DAT_005ec020;
extern undefined4 *DAT_005ec024;
extern undefined4 DAT_005ec030;
extern undefined DAT_005ec034;
extern undefined4 DAT_005ec04c;
extern uint DAT_005ec050;
extern uint DAT_005ec054;
extern undefined4 *DAT_005ec058;
extern undefined4 DAT_005ec05c;
extern undefined4 *DAT_005ec060;
extern undefined DAT_005ec064;
extern int DAT_005ec090;
extern uint *DAT_005ec094;
extern undefined4 DAT_005ec098;
extern undefined4 *DAT_005ec09c;
extern undefined4 DAT_005ec0a0;
extern char s_EnemySandBossChild_005ec07c[];
extern char s_damage_005ec038[];
extern char s_fly_st_005ec028[];
extern char s_piyopiyo_005ec040[];

// USA 005EBF04 <- EU 005EBEDC (Ghidra, non-matching)
// GLOBAL DAT_005ec020 int *
// GLOBAL DAT_005ec024 undefined4 *
// GLOBAL DAT_005ec030 undefined4
// GLOBAL DAT_005ec034 undefined
// GLOBAL DAT_005ec04c undefined4
// GLOBAL DAT_005ec050 uint
// GLOBAL DAT_005ec054 uint
// GLOBAL DAT_005ec058 undefined4 *
// GLOBAL DAT_005ec05c undefined4
// GLOBAL DAT_005ec060 undefined4 *
// GLOBAL DAT_005ec064 undefined
// GLOBAL DAT_005ec090 int
// GLOBAL DAT_005ec094 uint *
// GLOBAL DAT_005ec098 undefined4
// GLOBAL DAT_005ec09c undefined4 *
// GLOBAL DAT_005ec0a0 undefined4
// GLOBAL s_EnemySandBossChild_005ec07c string
// GLOBAL s_damage_005ec038 string
// GLOBAL s_fly_st_005ec028 string
// GLOBAL s_piyopiyo_005ec040 string

undefined8 func_005EBF04(void)

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
  piVar1 = DAT_005ec020;
  DAT_005ec020[2] = -1;
  piVar1[3] = -1;
  uVar3 = DAT_005ec030;
  piVar1[4] = 0;
  piVar1[5] = 0;
  puVar2 = DAT_005ec024;
  DAT_005ec024[1] = s_fly_st_005ec028;
  *puVar2 = uVar3;
  puVar2[3] = &DAT_005ec034;
  puVar2[2] = uVar3;
  puVar2[5] = s_damage_005ec038;
  puVar2[4] = uVar3;
  puVar2[6] = uVar3;
  puVar2[7] = s_piyopiyo_005ec040;
  uVar6 = func_00114608(DAT_005ec054,DAT_005ec050);
  piVar1[1] = (int)uVar6;
  local_28 = 0;
  local_27 = 0;
  local_26 = 0;
  local_24 = 0xff;
  local_25 = 0xff;
  func_004FC6FC(DAT_005ec058,0,1,0,0,(undefined4 *)&local_28,0xb);
  puVar2 = DAT_005ec060;
  puVar5 = DAT_005ec060 + 3;
  DAT_005ec060[1] = 5;
  puVar2[2] = puVar5;
  *puVar2 = 0;
  local_14 = &DAT_005ec064;
  local_18 = uVar3;
  local_1c = s_EnemySandBossChild_005ec07c;
  local_20 = uVar3;
  iVar4 = *piVar1;
  if (*piVar1 == 0) {
    iVar4 = DAT_005ec090;
  }
  uVar3 = func_0019B51C(DAT_005ec09c,DAT_005ec098,*DAT_005ec094,(int)&local_20,DAT_005ec060,
                        &local_18,iVar4);
  return CONCAT44(DAT_005ec0a0,uVar3);
}

