#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005e6b38;
extern undefined4 *DAT_005e6b3c;
extern undefined4 *DAT_005e6b40;
extern undefined4 DAT_005e6b50;
extern undefined4 DAT_005e6b78;
extern undefined4 DAT_005e6b7c;
extern undefined4 *DAT_005e6b80;
extern undefined DAT_005e6b84;
extern uint *DAT_005e6ba4;
extern undefined4 DAT_005e6ba8;
extern undefined4 *DAT_005e6bac;
extern undefined4 DAT_005e6bb0;
extern undefined4 *DAT_005e6bb4;
extern undefined DAT_005e6bb8;
extern uint *DAT_005e6bd8;
extern undefined4 *DAT_005e6bdc;
extern char s_MojHeartContainer_005e6b90[];
extern char s_MojHeartPiece_005e6bc8[];
extern char s_N_ArrowB_00_005e6b54[];
extern char s_N_ArrowL_00_005e6b60[];
extern char s_N_ArrowR_00_005e6b6c[];
extern char s_N_ArrowT_00_005e6b44[];

// USA 005E6A14 <- EU 005E69EC (Ghidra, non-matching)
// GLOBAL DAT_005e6b38 undefined4 *
// GLOBAL DAT_005e6b3c undefined4 *
// GLOBAL DAT_005e6b40 undefined4 *
// GLOBAL DAT_005e6b50 undefined4
// GLOBAL DAT_005e6b78 undefined4
// GLOBAL DAT_005e6b7c undefined4
// GLOBAL DAT_005e6b80 undefined4 *
// GLOBAL DAT_005e6b84 undefined
// GLOBAL DAT_005e6ba4 uint *
// GLOBAL DAT_005e6ba8 undefined4
// GLOBAL DAT_005e6bac undefined4 *
// GLOBAL DAT_005e6bb0 undefined4
// GLOBAL DAT_005e6bb4 undefined4 *
// GLOBAL DAT_005e6bb8 undefined
// GLOBAL DAT_005e6bd8 uint *
// GLOBAL DAT_005e6bdc undefined4 *
// GLOBAL s_MojHeartContainer_005e6b90 string
// GLOBAL s_MojHeartPiece_005e6bc8 string
// GLOBAL s_N_ArrowB_00_005e6b54 string
// GLOBAL s_N_ArrowL_00_005e6b60 string
// GLOBAL s_N_ArrowR_00_005e6b6c string
// GLOBAL s_N_ArrowT_00_005e6b44 string

undefined8 func_005E6A14(void)

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
  puVar1 = DAT_005e6b38;
  *DAT_005e6b38 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  uVar2 = DAT_005e6b50;
  puVar1 = DAT_005e6b3c;
  *DAT_005e6b3c = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005e6b40;
  DAT_005e6b40[1] = s_N_ArrowT_00_005e6b44;
  *puVar1 = uVar2;
  puVar1[3] = s_N_ArrowB_00_005e6b54;
  puVar1[2] = uVar2;
  puVar1[5] = s_N_ArrowL_00_005e6b60;
  puVar1[4] = uVar2;
  puVar1[6] = uVar2;
  puVar1[7] = s_N_ArrowR_00_005e6b6c;
  puVar1 = DAT_005e6b80;
  puVar3 = DAT_005e6b80 + 3;
  DAT_005e6b80[1] = 5;
  puVar1[2] = puVar3;
  *puVar1 = 0;
  local_24 = &DAT_005e6b84;
  local_2c = s_MojHeartContainer_005e6b90;
  local_28 = uVar2;
  local_30 = uVar2;
  func_0019B51C(DAT_005e6bac,DAT_005e6ba8,*DAT_005e6ba4,(int)&local_30,DAT_005e6b80,&local_28,0);
  puVar1 = DAT_005e6bb4;
  puVar3 = DAT_005e6bb4 + 3;
  DAT_005e6bb4[1] = 5;
  puVar1[2] = puVar3;
  *puVar1 = 0;
  local_14 = &DAT_005e6bb8;
  local_1c = s_MojHeartPiece_005e6bc8;
  local_18 = uVar2;
  local_20 = uVar2;
  uVar2 = func_0019B51C(DAT_005e6bdc,DAT_005e6ba8,*DAT_005e6bd8,(int)&local_20,DAT_005e6bb4,
                        &local_18,0);
  return CONCAT44(DAT_005e6bb0,uVar2);
}

