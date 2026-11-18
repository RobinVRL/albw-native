#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern int DAT_005c0784;
extern undefined4 *DAT_005c0788;
extern undefined4 *DAT_005c078c;
extern undefined4 DAT_005c079c;
extern undefined4 DAT_005c07c4;
extern undefined4 DAT_005c07c8;
extern undefined4 *DAT_005c07cc;
extern undefined DAT_005c07d0;
extern undefined DAT_005c07dc;
extern undefined4 DAT_005c07e4;
extern undefined4 *DAT_005c07e8;
extern undefined DAT_005c07ec;
extern uint *DAT_005c080c;
extern undefined4 DAT_005c0810;
extern undefined4 *DAT_005c0814;
extern undefined4 DAT_005c0818;
extern char s_N_ArrowB_00_005c07a0[];
extern char s_N_ArrowL_00_005c07ac[];
extern char s_N_ArrowR_00_005c07b8[];
extern char s_N_ArrowT_00_005c0790[];
extern char s_ObjGtEvSwordB_005c07fc[];
extern char s_scale_005c07d4[];

// USA 005C0690 <- EU 005C0668 (Ghidra, non-matching)
// GLOBAL DAT_005c0784 int
// GLOBAL DAT_005c0788 undefined4 *
// GLOBAL DAT_005c078c undefined4 *
// GLOBAL DAT_005c079c undefined4
// GLOBAL DAT_005c07c4 undefined4
// GLOBAL DAT_005c07c8 undefined4
// GLOBAL DAT_005c07cc undefined4 *
// GLOBAL DAT_005c07d0 undefined
// GLOBAL DAT_005c07dc undefined
// GLOBAL DAT_005c07e4 undefined4
// GLOBAL DAT_005c07e8 undefined4 *
// GLOBAL DAT_005c07ec undefined
// GLOBAL DAT_005c080c uint *
// GLOBAL DAT_005c0810 undefined4
// GLOBAL DAT_005c0814 undefined4 *
// GLOBAL DAT_005c0818 undefined4
// GLOBAL s_N_ArrowB_00_005c07a0 string
// GLOBAL s_N_ArrowL_00_005c07ac string
// GLOBAL s_N_ArrowR_00_005c07b8 string
// GLOBAL s_N_ArrowT_00_005c0790 string
// GLOBAL s_ObjGtEvSwordB_005c07fc string
// GLOBAL s_scale_005c07d4 string

undefined8 func_005C0690(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define puStack_14 (*(undefined * *)(albw_frame + 0xc))
  #define uStack_10 (*(undefined4 *)(albw_frame + 0x10))
  #define local_c (*(char * *)(albw_frame + 0x14))
  iVar1 = DAT_005c0784;
  *(undefined4 *)(DAT_005c0784 + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  local_18 = DAT_005c079c;
  puVar2 = DAT_005c0788;
  *DAT_005c0788 = 0;
  puVar2[1] = 0;
  puVar2 = DAT_005c078c;
  DAT_005c078c[1] = s_N_ArrowT_00_005c0790;
  *puVar2 = local_18;
  puVar2[3] = s_N_ArrowB_00_005c07a0;
  puVar2[2] = local_18;
  puVar2[5] = s_N_ArrowL_00_005c07ac;
  puVar2[4] = local_18;
  puVar2[6] = local_18;
  puVar2[7] = s_N_ArrowR_00_005c07b8;
  puVar2 = DAT_005c07cc;
  DAT_005c07cc[1] = &DAT_005c07d0;
  *puVar2 = local_18;
  puVar2[3] = s_scale_005c07d4;
  puVar2[2] = local_18;
  puVar2[4] = local_18;
  puVar2[5] = &DAT_005c07dc;
  puVar2 = DAT_005c07e8;
  puVar4 = DAT_005c07e8 + 3;
  *DAT_005c07e8 = 0;
  puVar2[1] = 5;
  puVar2[2] = puVar4;
  puStack_14 = &DAT_005c07ec;
  uStack_10 = local_18;
  local_c = s_ObjGtEvSwordB_005c07fc;
  uVar3 = func_0019B51C(DAT_005c0814,DAT_005c0810,*DAT_005c080c,(int)&uStack_10,DAT_005c07e8,
                        &local_18,0);
  return CONCAT44(DAT_005c0818,uVar3);
}

