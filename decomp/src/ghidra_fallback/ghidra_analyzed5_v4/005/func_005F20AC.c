#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern int DAT_005f2118;
extern undefined4 *DAT_005f211c;
extern undefined4 *DAT_005f2120;
extern undefined DAT_005f2124;
extern undefined4 DAT_005f2140;
extern uint *DAT_005f215c;
extern undefined4 DAT_005f2160;
extern undefined4 *DAT_005f2164;
extern undefined4 DAT_005f2168;
extern undefined4 DAT_005f216c;
extern char s_TagMiniGameTowerGoal_005f2144[];

// USA 005F20AC <- EU 005F2084 (Ghidra, non-matching)
// GLOBAL DAT_005f2118 int
// GLOBAL DAT_005f211c undefined4 *
// GLOBAL DAT_005f2120 undefined4 *
// GLOBAL DAT_005f2124 undefined
// GLOBAL DAT_005f2140 undefined4
// GLOBAL DAT_005f215c uint *
// GLOBAL DAT_005f2160 undefined4
// GLOBAL DAT_005f2164 undefined4 *
// GLOBAL DAT_005f2168 undefined4
// GLOBAL DAT_005f216c undefined4
// GLOBAL s_TagMiniGameTowerGoal_005f2144 string

undefined8 func_005F20AC(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_c (*(undefined * *)(albw_frame + 0x14))
  iVar1 = DAT_005f2118;
  *(undefined4 *)(DAT_005f2118 + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  puVar2 = DAT_005f211c;
  *DAT_005f211c = 0;
  puVar2[1] = 0;
  puVar2 = DAT_005f2120;
  puVar4 = DAT_005f2120 + 3;
  *DAT_005f2120 = 0;
  puVar2[1] = 5;
  local_10 = DAT_005f2140;
  puVar2[2] = puVar4;
  puStack_c = &DAT_005f2124;
  local_18 = local_10;
  local_14 = s_TagMiniGameTowerGoal_005f2144;
  uVar3 = func_0019B51C(DAT_005f2164,DAT_005f2160,*DAT_005f215c,(int)&local_18,DAT_005f2120,
                        &local_10,0);
  return CONCAT44(DAT_005f216c,uVar3);
}

