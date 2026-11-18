#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_003842C0(int param_1,int param_2,int param_3,int param_4);
extern int func_004D6A94(int param_1);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_004D8490(float *param_1,float fparam_0);
extern int func_004EABB8(int param_1,int *param_2,undefined4 *param_3);
extern int func_004FA114(int param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int *DAT_003b38a4;
extern uint *DAT_003b38a8;
extern undefined4 *DAT_003b38ac;
extern undefined4 DAT_003b38b0;
extern float DAT_003b38b4;
extern undefined4 DAT_003b38b8;
extern float DAT_003b38bc;
extern undefined DAT_003b38c0;
extern int DAT_003b38d4;
extern int *DAT_003b38d8;
extern char s_cf_003b38c4[];
extern undefined4 _DAT_003b38c0;

// USA 003B3768 <- EU 003B3744 (Ghidra, non-matching)
// GLOBAL DAT_003b38a4 int *
// GLOBAL DAT_003b38a8 uint *
// GLOBAL DAT_003b38ac undefined4 *
// GLOBAL DAT_003b38b0 undefined4
// GLOBAL DAT_003b38b4 float
// GLOBAL DAT_003b38b8 undefined4
// GLOBAL DAT_003b38bc float
// GLOBAL DAT_003b38c0 undefined
// GLOBAL DAT_003b38d4 int
// GLOBAL DAT_003b38d8 int *

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_003B3768(int param_1)

{
  float fparam_0;
  undefined4 *puVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(float *)(albw_frame + 0x0))
  #define local_2c (*(float *)(albw_frame + 0x4))
  #define local_28 (*(undefined4 *)(albw_frame + 0x8))
  #define fStack_24 (*(float *)(albw_frame + 0xc))
  #define local_20 (*(undefined4 *)(albw_frame + 0x10))
  #define local_18 (*(int *)(albw_frame + 0x18))
  #define local_14 (*(char * *)(albw_frame + 0x1c))
  puVar1 = (undefined4 *)
           func_0052FBA0(*DAT_003b38a4 + 0x3dbbc,*(uint *)(*(int *)(param_1 + 0x48) + 0xb14));
  if (((*DAT_003b38a8 & 1) == 0) && (iVar2 = func_00100174((int *)DAT_003b38a8), iVar2 != 0)) {
    *DAT_003b38ac = DAT_003b38b0;
  }
  if ((puVar1 == (undefined4 *)0x0) ||
     (iVar2 = (**(code **)*puVar1)(puVar1,DAT_003b38ac), iVar2 == 0)) {
    puVar1 = (undefined4 *)0x0;
  }
  if (puVar1 != (undefined4 *)0x0) {
    func_004D6A94((int)puVar1);
  }
  func_004FA114(*(int *)(param_1 + 0x48));
  fparam_0 = DAT_003b38b4;
  iVar2 = *(int *)(param_1 + 0x48);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(iVar2 + 0x3d4);
  local_2c = *(float *)(iVar2 + 0x3e0);
  local_30 = *(float *)(iVar2 + 0x3dc);
  local_28 = *(undefined4 *)(iVar2 + 0x3e4);
  func_004D80A4(&fStack_24,*(int *)(*(int *)(param_1 + 0x48) + 1000) + 0x80000000,fparam_0);
  local_20 = DAT_003b38b8;
  func_00115C54(&local_30,&local_30,&fStack_24);
  func_004D8490(&local_30,DAT_003b38bc);
  local_2c = local_2c + ALBW_AS_F32(_DAT_003b38c0);
  iVar2 = *(int *)(param_1 + 0x48);
  *(float *)(iVar2 + 0x3dc) = local_30;
  *(float *)(iVar2 + 0x3e0) = local_2c;
  *(undefined4 *)(iVar2 + 0x3e4) = local_28;
  func_003842C0(*(int *)(param_1 + 0x48) + 0x8c0,0x69,10,1);
  local_14 = s_cf_003b38c4;
  local_18 = DAT_003b38d4;
  return func_004EABB8(*DAT_003b38d8,&local_18,(undefined4 *)0x0);
}

