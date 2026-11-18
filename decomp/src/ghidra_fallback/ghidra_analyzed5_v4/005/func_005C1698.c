#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005c17b8;
extern undefined4 *DAT_005c17bc;
extern undefined4 *DAT_005c17c0;
extern undefined4 DAT_005c17d0;
extern undefined4 DAT_005c17f8;
extern undefined4 DAT_005c17fc;
extern undefined4 *DAT_005c1800;
extern undefined DAT_005c1810;
extern undefined DAT_005c1818;
extern undefined DAT_005c1820;
extern undefined DAT_005c1828;
extern undefined DAT_005c1830;
extern undefined DAT_005c1838;
extern undefined4 DAT_005c1840;
extern undefined4 *DAT_005c1844;
extern undefined DAT_005c1848;
extern uint *DAT_005c1868;
extern undefined4 DAT_005c186c;
extern undefined4 *DAT_005c1870;
extern undefined4 DAT_005c1874;
extern char s_N_ArrowB_00_005c17d4[];
extern char s_N_ArrowL_00_005c17e0[];
extern char s_N_ArrowR_00_005c17ec[];
extern char s_N_ArrowT_00_005c17c4[];
extern char s_ObjTurtleWall_005c1858[];
extern char s_wait_wall_005c1804[];

// USA 005C1698 <- EU 005C1670 (Ghidra, non-matching)
// GLOBAL DAT_005c17b8 undefined4 *
// GLOBAL DAT_005c17bc undefined4 *
// GLOBAL DAT_005c17c0 undefined4 *
// GLOBAL DAT_005c17d0 undefined4
// GLOBAL DAT_005c17f8 undefined4
// GLOBAL DAT_005c17fc undefined4
// GLOBAL DAT_005c1800 undefined4 *
// GLOBAL DAT_005c1810 undefined
// GLOBAL DAT_005c1818 undefined
// GLOBAL DAT_005c1820 undefined
// GLOBAL DAT_005c1828 undefined
// GLOBAL DAT_005c1830 undefined
// GLOBAL DAT_005c1838 undefined
// GLOBAL DAT_005c1840 undefined4
// GLOBAL DAT_005c1844 undefined4 *
// GLOBAL DAT_005c1848 undefined
// GLOBAL DAT_005c1868 uint *
// GLOBAL DAT_005c186c undefined4
// GLOBAL DAT_005c1870 undefined4 *
// GLOBAL DAT_005c1874 undefined4
// GLOBAL s_N_ArrowB_00_005c17d4 string
// GLOBAL s_N_ArrowL_00_005c17e0 string
// GLOBAL s_N_ArrowR_00_005c17ec string
// GLOBAL s_N_ArrowT_00_005c17c4 string
// GLOBAL s_ObjTurtleWall_005c1858 string
// GLOBAL s_wait_wall_005c1804 string

undefined8 func_005C1698(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define puStack_14 (*(undefined * *)(albw_frame + 0xc))
  #define uStack_10 (*(undefined4 *)(albw_frame + 0x10))
  #define local_c (*(char * *)(albw_frame + 0x14))
  puVar1 = DAT_005c17b8;
  *DAT_005c17b8 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  local_18 = DAT_005c17d0;
  puVar1 = DAT_005c17bc;
  *DAT_005c17bc = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005c17c0;
  DAT_005c17c0[1] = s_N_ArrowT_00_005c17c4;
  *puVar1 = local_18;
  puVar1[3] = s_N_ArrowB_00_005c17d4;
  puVar1[2] = local_18;
  puVar1[5] = s_N_ArrowL_00_005c17e0;
  puVar1[4] = local_18;
  puVar1[6] = local_18;
  puVar1[7] = s_N_ArrowR_00_005c17ec;
  puVar1 = DAT_005c1800;
  DAT_005c1800[1] = s_wait_wall_005c1804;
  *puVar1 = local_18;
  puVar1[3] = &DAT_005c1810;
  puVar1[2] = local_18;
  puVar1[5] = &DAT_005c1818;
  puVar1[4] = local_18;
  puVar1[7] = &DAT_005c1820;
  puVar1[6] = local_18;
  puVar1[9] = &DAT_005c1828;
  puVar1[8] = local_18;
  puVar1[0xb] = &DAT_005c1830;
  puVar1[10] = local_18;
  puVar1[0xc] = local_18;
  puVar1[0xd] = &DAT_005c1838;
  puVar1 = DAT_005c1844;
  puVar3 = DAT_005c1844 + 3;
  *DAT_005c1844 = 0;
  puVar1[1] = 5;
  puVar1[2] = puVar3;
  puStack_14 = &DAT_005c1848;
  uStack_10 = local_18;
  local_c = s_ObjTurtleWall_005c1858;
  uVar2 = func_0019B51C(DAT_005c1870,DAT_005c186c,*DAT_005c1868,(int)&uStack_10,DAT_005c1844,
                        &local_18,0);
  return CONCAT44(DAT_005c1874,uVar2);
}

