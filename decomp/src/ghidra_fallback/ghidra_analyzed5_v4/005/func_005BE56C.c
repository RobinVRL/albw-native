#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005be784;
extern undefined4 *DAT_005be788;
extern undefined4 *DAT_005be78c;
extern undefined DAT_005be790;
extern undefined4 DAT_005be7a4;
extern uint *DAT_005be7bc;
extern undefined4 DAT_005be7c0;
extern undefined4 *DAT_005be7c4;
extern undefined4 DAT_005be7c8;
extern undefined4 DAT_005be7cc;
extern undefined4 *DAT_005be7d0;
extern undefined DAT_005be7d4;
extern uint *DAT_005be7fc;
extern undefined4 DAT_005be800;
extern undefined4 *DAT_005be804;
extern undefined4 *DAT_005be808;
extern undefined DAT_005be80c;
extern uint *DAT_005be834;
extern undefined4 DAT_005be838;
extern undefined4 *DAT_005be83c;
extern undefined4 *DAT_005be840;
extern undefined DAT_005be844;
extern uint *DAT_005be86c;
extern undefined4 DAT_005be870;
extern undefined4 *DAT_005be874;
extern undefined4 *DAT_005be878;
extern undefined DAT_005be87c;
extern uint *DAT_005be8a4;
extern undefined4 DAT_005be8a8;
extern undefined4 *DAT_005be8ac;
extern char s_MojFloorBreakDark_005be820[];
extern char s_MojFloorBreakDokuro_005be7e8[];
extern char s_MojFloorBreakGanon_005be890[];
extern char s_MojFloorBreakHera_005be7a8[];
extern char s_MojFloorBreakWater_005be858[];

// USA 005BE56C <- EU 005BE544 (Ghidra, non-matching)
// GLOBAL DAT_005be784 undefined4 *
// GLOBAL DAT_005be788 undefined4 *
// GLOBAL DAT_005be78c undefined4 *
// GLOBAL DAT_005be790 undefined
// GLOBAL DAT_005be7a4 undefined4
// GLOBAL DAT_005be7bc uint *
// GLOBAL DAT_005be7c0 undefined4
// GLOBAL DAT_005be7c4 undefined4 *
// GLOBAL DAT_005be7c8 undefined4
// GLOBAL DAT_005be7cc undefined4
// GLOBAL DAT_005be7d0 undefined4 *
// GLOBAL DAT_005be7d4 undefined
// GLOBAL DAT_005be7fc uint *
// GLOBAL DAT_005be800 undefined4
// GLOBAL DAT_005be804 undefined4 *
// GLOBAL DAT_005be808 undefined4 *
// GLOBAL DAT_005be80c undefined
// GLOBAL DAT_005be834 uint *
// GLOBAL DAT_005be838 undefined4
// GLOBAL DAT_005be83c undefined4 *
// GLOBAL DAT_005be840 undefined4 *
// GLOBAL DAT_005be844 undefined
// GLOBAL DAT_005be86c uint *
// GLOBAL DAT_005be870 undefined4
// GLOBAL DAT_005be874 undefined4 *
// GLOBAL DAT_005be878 undefined4 *
// GLOBAL DAT_005be87c undefined
// GLOBAL DAT_005be8a4 uint *
// GLOBAL DAT_005be8a8 undefined4
// GLOBAL DAT_005be8ac undefined4 *
// GLOBAL s_MojFloorBreakDark_005be820 string
// GLOBAL s_MojFloorBreakDokuro_005be7e8 string
// GLOBAL s_MojFloorBreakGanon_005be890 string
// GLOBAL s_MojFloorBreakHera_005be7a8 string
// GLOBAL s_MojFloorBreakWater_005be858 string

undefined8 func_005BE56C(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_60 (*(undefined4 *)(albw_frame + 0x0))
  #define local_5c (*(char * *)(albw_frame + 0x4))
  #define local_58 (*(undefined4 *)(albw_frame + 0x8))
  #define local_54 (*(undefined * *)(albw_frame + 0xc))
  #define local_50 (*(undefined4 *)(albw_frame + 0x10))
  #define local_4c (*(char * *)(albw_frame + 0x14))
  #define local_48 (*(undefined4 *)(albw_frame + 0x18))
  #define local_44 (*(undefined * *)(albw_frame + 0x1c))
  #define local_40 (*(undefined4 *)(albw_frame + 0x20))
  #define local_3c (*(char * *)(albw_frame + 0x24))
  #define local_38 (*(undefined4 *)(albw_frame + 0x28))
  #define local_34 (*(undefined * *)(albw_frame + 0x2c))
  #define local_30 (*(undefined4 *)(albw_frame + 0x30))
  #define local_2c (*(char * *)(albw_frame + 0x34))
  #define local_28 (*(undefined4 *)(albw_frame + 0x38))
  #define local_24 (*(undefined * *)(albw_frame + 0x3c))
  #define local_20 (*(undefined4 *)(albw_frame + 0x40))
  #define local_1c (*(char * *)(albw_frame + 0x44))
  #define local_18 (*(undefined4 *)(albw_frame + 0x48))
  #define local_14 (*(undefined * *)(albw_frame + 0x4c))
  puVar1 = DAT_005be784;
  *DAT_005be784 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005be788;
  *DAT_005be788 = 0;
  puVar1[1] = 0;
  uVar2 = DAT_005be7a4;
  puVar1 = DAT_005be78c;
  puVar3 = DAT_005be78c + 3;
  DAT_005be78c[1] = 5;
  puVar1[2] = puVar3;
  *puVar1 = 0;
  local_54 = &DAT_005be790;
  local_5c = s_MojFloorBreakHera_005be7a8;
  local_58 = uVar2;
  local_60 = uVar2;
  func_0019B51C(DAT_005be7c4,DAT_005be7c0,*DAT_005be7bc,(int)&local_60,DAT_005be78c,&local_58,0);
  puVar1 = DAT_005be7d0;
  puVar3 = DAT_005be7d0 + 3;
  DAT_005be7d0[1] = 5;
  puVar1[2] = puVar3;
  *puVar1 = 0;
  local_44 = &DAT_005be7d4;
  local_4c = s_MojFloorBreakDokuro_005be7e8;
  local_48 = uVar2;
  local_50 = uVar2;
  func_0019B51C(DAT_005be804,DAT_005be800,*DAT_005be7fc,(int)&local_50,DAT_005be7d0,&local_48,0);
  puVar1 = DAT_005be808;
  puVar3 = DAT_005be808 + 3;
  DAT_005be808[1] = 5;
  puVar1[2] = puVar3;
  *puVar1 = 0;
  local_34 = &DAT_005be80c;
  local_3c = s_MojFloorBreakDark_005be820;
  local_38 = uVar2;
  local_40 = uVar2;
  func_0019B51C(DAT_005be83c,DAT_005be838,*DAT_005be834,(int)&local_40,DAT_005be808,&local_38,0);
  puVar1 = DAT_005be840;
  puVar3 = DAT_005be840 + 3;
  DAT_005be840[1] = 5;
  puVar1[2] = puVar3;
  *puVar1 = 0;
  local_24 = &DAT_005be844;
  local_2c = s_MojFloorBreakWater_005be858;
  local_28 = uVar2;
  local_30 = uVar2;
  func_0019B51C(DAT_005be874,DAT_005be870,*DAT_005be86c,(int)&local_30,DAT_005be840,&local_28,0);
  puVar1 = DAT_005be878;
  puVar3 = DAT_005be878 + 3;
  DAT_005be878[1] = 5;
  puVar1[2] = puVar3;
  *puVar1 = 0;
  local_14 = &DAT_005be87c;
  local_1c = s_MojFloorBreakGanon_005be890;
  local_18 = uVar2;
  local_20 = uVar2;
  uVar2 = func_0019B51C(DAT_005be8ac,DAT_005be8a8,*DAT_005be8a4,(int)&local_20,DAT_005be878,
                        &local_18,0);
  return CONCAT44(DAT_005be7cc,uVar2);
}

