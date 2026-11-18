#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005fe7e8;
extern undefined4 *DAT_005fe7ec;
extern undefined DAT_005fe7f0;
extern undefined4 DAT_005fe800;
extern uint *DAT_005fe810;
extern undefined4 DAT_005fe814;
extern undefined4 *DAT_005fe818;
extern undefined4 DAT_005fe81c;
extern uint DAT_005fe820;
extern undefined4 *DAT_005fe824;
extern undefined DAT_005fe828;
extern uint *DAT_005fe848;
extern undefined4 DAT_005fe84c;
extern undefined4 *DAT_005fe850;
extern undefined4 *DAT_005fe854;
extern undefined DAT_005fe858;
extern uint *DAT_005fe878;
extern undefined4 DAT_005fe87c;
extern undefined4 *DAT_005fe880;
extern uint DAT_005fe884;
extern uint DAT_005fe888;
extern char s_MapVRHera_005fe83c[];
extern char s_MapVRSimple_005fe804[];
extern char s_MapVRSky_005fe86c[];

// USA 005FE680 <- EU 005FE658 (Ghidra, non-matching)
// GLOBAL DAT_005fe7e8 undefined4 *
// GLOBAL DAT_005fe7ec undefined4 *
// GLOBAL DAT_005fe7f0 undefined
// GLOBAL DAT_005fe800 undefined4
// GLOBAL DAT_005fe810 uint *
// GLOBAL DAT_005fe814 undefined4
// GLOBAL DAT_005fe818 undefined4 *
// GLOBAL DAT_005fe81c undefined4
// GLOBAL DAT_005fe820 uint
// GLOBAL DAT_005fe824 undefined4 *
// GLOBAL DAT_005fe828 undefined
// GLOBAL DAT_005fe848 uint *
// GLOBAL DAT_005fe84c undefined4
// GLOBAL DAT_005fe850 undefined4 *
// GLOBAL DAT_005fe854 undefined4 *
// GLOBAL DAT_005fe858 undefined
// GLOBAL DAT_005fe878 uint *
// GLOBAL DAT_005fe87c undefined4
// GLOBAL DAT_005fe880 undefined4 *
// GLOBAL DAT_005fe884 uint
// GLOBAL DAT_005fe888 uint
// GLOBAL s_MapVRHera_005fe83c string
// GLOBAL s_MapVRSimple_005fe804 string
// GLOBAL s_MapVRSky_005fe86c string

void func_005FE680(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(undefined4 *)(albw_frame + 0x0))
  #define local_3c (*(char * *)(albw_frame + 0x4))
  #define local_38 (*(undefined4 *)(albw_frame + 0x8))
  #define local_34 (*(undefined * *)(albw_frame + 0xc))
  #define local_30 (*(undefined4 *)(albw_frame + 0x10))
  #define local_2c (*(char * *)(albw_frame + 0x14))
  #define local_28 (*(undefined4 *)(albw_frame + 0x18))
  #define local_24 (*(undefined * *)(albw_frame + 0x1c))
  #define local_20 (*(undefined4 *)(albw_frame + 0x20))
  #define local_1c (*(char * *)(albw_frame + 0x24))
  #define local_18 (*(undefined4 *)(albw_frame + 0x28))
  #define local_14 (*(undefined * *)(albw_frame + 0x2c))
  puVar1 = DAT_005fe7e8;
  DAT_005fe7e8[4] = 0xffffffff;
  puVar1[5] = 0xffffffff;
  puVar1[6] = 0;
  puVar1[7] = 0;
  uVar3 = DAT_005fe800;
  puVar2 = DAT_005fe7ec;
  puVar4 = DAT_005fe7ec + 3;
  DAT_005fe7ec[1] = 5;
  puVar2[2] = puVar4;
  *puVar2 = 0;
  local_34 = &DAT_005fe7f0;
  local_3c = s_MapVRSimple_005fe804;
  local_38 = uVar3;
  local_40 = uVar3;
  func_0019B51C(DAT_005fe818,DAT_005fe814,*DAT_005fe810,(int)&local_40,DAT_005fe7ec,&local_38,0);
  puVar2 = DAT_005fe824;
  puVar4 = DAT_005fe824 + 3;
  DAT_005fe824[1] = 5;
  puVar2[2] = puVar4;
  *puVar2 = 0;
  local_24 = &DAT_005fe828;
  local_2c = s_MapVRHera_005fe83c;
  local_28 = uVar3;
  local_30 = uVar3;
  func_0019B51C(DAT_005fe850,DAT_005fe84c,*DAT_005fe848,(int)&local_30,DAT_005fe824,&local_28,0);
  puVar2 = DAT_005fe854;
  puVar4 = DAT_005fe854 + 3;
  DAT_005fe854[1] = 5;
  puVar2[2] = puVar4;
  *puVar2 = 0;
  local_14 = &DAT_005fe858;
  local_1c = s_MapVRSky_005fe86c;
  local_18 = uVar3;
  local_20 = uVar3;
  func_0019B51C(DAT_005fe880,DAT_005fe87c,*DAT_005fe878,(int)&local_20,DAT_005fe854,&local_18,0);
  uVar5 = func_00114608(DAT_005fe884,DAT_005fe820);
  *puVar1 = (int)uVar5;
  uVar6 = func_00114608(DAT_005fe888,(uint)((ulonglong)uVar5 >> 0x20));
  puVar1[1] = (int)uVar6;
  puVar1[2] = (int)uVar5;
  return;
}

