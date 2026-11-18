#include "ghidra_types.h"

extern int func_00495080(int param_1);
extern int func_00495090(int param_1);
extern int func_004950C4(int param_1,undefined4 *param_2,undefined4 *param_3);
extern int func_00495130(int param_1,float *param_2);
extern int *DAT_005394a4;
extern undefined4 *DAT_005394a8;
extern undefined4 DAT_005394ac;
extern undefined4 *DAT_005394b0;

// USA 00539418 <- EU 005393F0 (Ghidra, non-matching)
// GLOBAL DAT_005394a4 int *
// GLOBAL DAT_005394a8 undefined4 *
// GLOBAL DAT_005394ac undefined4
// GLOBAL DAT_005394b0 undefined4 *

undefined4 func_00539418(undefined4 param_1,int param_2,undefined4 *param_3)

{
  float *pfVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_48 (*(undefined4 *)(albw_frame + 0x8))
  #define uStack_44 (*(undefined4 *)(albw_frame + 0xc))
  #define local_40 (*(undefined4 *)(albw_frame + 0x10))
  #define local_3c (*(float *)(albw_frame + 0x14))
  #define fStack_38 (*(float *)(albw_frame + 0x18))
  #define local_34 (*(undefined4 *)(albw_frame + 0x1c))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x20))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x24))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x28))
  #define local_24 (*(undefined4 *)(albw_frame + 0x2c))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x30))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x34))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x38))
  #define local_14 (*(undefined1 *)(albw_frame + 0x3c))
  iVar2 = *DAT_005394a4;
  func_00495090(iVar2);
  local_48 = *DAT_005394a8;
  uStack_44 = DAT_005394a8[1];
  local_40 = DAT_005394a8[2];
  local_34 = *DAT_005394b0;
  uStack_30 = DAT_005394b0[1];
  uStack_2c = DAT_005394b0[2];
  uStack_28 = DAT_005394b0[3];
  local_24 = *DAT_005394b0;
  uStack_20 = DAT_005394b0[1];
  uStack_1c = DAT_005394b0[2];
  uStack_18 = DAT_005394b0[3];
  local_14 = 0;
  local_3c = *(float *)(param_2 + 0xc) - *(float *)(param_2 + 4);
  fStack_38 = *(float *)(param_2 + 0x10) - *(float *)(param_2 + 8);
  pfVar1 = (float *)func_004950C4((int)&local_48,param_3,param_3);
  func_00495130(iVar2,pfVar1);
  return func_00495080(iVar2);
}

