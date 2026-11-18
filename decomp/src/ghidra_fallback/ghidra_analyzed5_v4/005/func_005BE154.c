#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005be26c;
extern undefined4 *DAT_005be270;
extern undefined4 *DAT_005be274;
extern undefined4 DAT_005be284;
extern undefined4 DAT_005be2ac;
extern undefined4 DAT_005be2b0;
extern undefined4 *DAT_005be2b4;
extern undefined4 DAT_005be2f8;
extern undefined4 *DAT_005be2fc;
extern undefined4 DAT_005be30c;
extern undefined4 *DAT_005be310;
extern undefined DAT_005be314;
extern uint *DAT_005be334;
extern undefined4 DAT_005be338;
extern undefined4 *DAT_005be33c;
extern undefined4 DAT_005be340;
extern char s_CrossBoard_005be300[];
extern char s_CrossBoard_Lv1_005be2b8[];
extern char s_CrossBoard_Lv2_005be2c8[];
extern char s_CrossBoard_Lv3_005be2d8[];
extern char s_CrossBoard_Lv4_005be2e8[];
extern char s_MojCrossBoard_005be324[];
extern char s_N_ArrowB_00_005be288[];
extern char s_N_ArrowL_00_005be294[];
extern char s_N_ArrowR_00_005be2a0[];
extern char s_N_ArrowT_00_005be278[];

// USA 005BE154 <- EU 005BE12C (Ghidra, non-matching)
// GLOBAL DAT_005be26c undefined4 *
// GLOBAL DAT_005be270 undefined4 *
// GLOBAL DAT_005be274 undefined4 *
// GLOBAL DAT_005be284 undefined4
// GLOBAL DAT_005be2ac undefined4
// GLOBAL DAT_005be2b0 undefined4
// GLOBAL DAT_005be2b4 undefined4 *
// GLOBAL DAT_005be2f8 undefined4
// GLOBAL DAT_005be2fc undefined4 *
// GLOBAL DAT_005be30c undefined4
// GLOBAL DAT_005be310 undefined4 *
// GLOBAL DAT_005be314 undefined
// GLOBAL DAT_005be334 uint *
// GLOBAL DAT_005be338 undefined4
// GLOBAL DAT_005be33c undefined4 *
// GLOBAL DAT_005be340 undefined4
// GLOBAL s_CrossBoard_005be300 string
// GLOBAL s_CrossBoard_Lv1_005be2b8 string
// GLOBAL s_CrossBoard_Lv2_005be2c8 string
// GLOBAL s_CrossBoard_Lv3_005be2d8 string
// GLOBAL s_CrossBoard_Lv4_005be2e8 string
// GLOBAL s_MojCrossBoard_005be324 string
// GLOBAL s_N_ArrowB_00_005be288 string
// GLOBAL s_N_ArrowL_00_005be294 string
// GLOBAL s_N_ArrowR_00_005be2a0 string
// GLOBAL s_N_ArrowT_00_005be278 string

undefined8 func_005BE154(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define puStack_14 (*(undefined * *)(albw_frame + 0xc))
  #define uStack_10 (*(undefined4 *)(albw_frame + 0x10))
  #define local_c (*(char * *)(albw_frame + 0x14))
  puVar1 = DAT_005be26c;
  *DAT_005be26c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  local_18 = DAT_005be284;
  puVar1 = DAT_005be270;
  *DAT_005be270 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005be274;
  DAT_005be274[1] = s_N_ArrowT_00_005be278;
  *puVar1 = local_18;
  puVar1[3] = s_N_ArrowB_00_005be288;
  puVar1[2] = local_18;
  puVar1[5] = s_N_ArrowL_00_005be294;
  puVar1[4] = local_18;
  puVar1[6] = local_18;
  puVar1[7] = s_N_ArrowR_00_005be2a0;
  puVar1 = DAT_005be2b4;
  DAT_005be2b4[1] = s_CrossBoard_Lv1_005be2b8;
  *puVar1 = local_18;
  puVar1[3] = s_CrossBoard_Lv2_005be2c8;
  puVar1[2] = local_18;
  puVar1[5] = s_CrossBoard_Lv3_005be2d8;
  puVar1[4] = local_18;
  puVar1[6] = local_18;
  puVar1[7] = s_CrossBoard_Lv4_005be2e8;
  puVar1 = DAT_005be2fc;
  DAT_005be2fc[1] = s_CrossBoard_005be300;
  *puVar1 = local_18;
  puVar1 = DAT_005be310;
  puVar3 = DAT_005be310 + 3;
  *DAT_005be310 = 0;
  puVar1[1] = 5;
  puVar1[2] = puVar3;
  puStack_14 = &DAT_005be314;
  uStack_10 = local_18;
  local_c = s_MojCrossBoard_005be324;
  uVar2 = func_0019B51C(DAT_005be33c,DAT_005be338,*DAT_005be334,(int)&uStack_10,DAT_005be310,
                        &local_18,0);
  return CONCAT44(DAT_005be340,uVar2);
}

