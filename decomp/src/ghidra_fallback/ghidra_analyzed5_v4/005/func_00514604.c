#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115D18(float *param_1,float *param_2,float *param_3);
extern int func_00115D88(float *param_1,float *param_2,float fparam_0);
extern int func_00491938(float *param_1,uint param_2,uint param_3,uint param_4);
extern float DAT_0051474c;
extern undefined4 DAT_00514750;
extern undefined4 DAT_00514754;
extern undefined4 DAT_00514758;
extern uint *DAT_0051475c;
extern undefined4 *DAT_00514760;
extern undefined4 DAT_00514764;
extern undefined4 DAT_00514768;
extern float DAT_0051476c;

// USA 00514604 <- EU 005145DC (Ghidra, non-matching)
// GLOBAL DAT_0051474c float
// GLOBAL DAT_00514750 undefined4
// GLOBAL DAT_00514754 undefined4
// GLOBAL DAT_00514758 undefined4
// GLOBAL DAT_0051475c uint *
// GLOBAL DAT_00514760 undefined4 *
// GLOBAL DAT_00514764 undefined4
// GLOBAL DAT_00514768 undefined4
// GLOBAL DAT_0051476c float

void func_00514604(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define local_78 (*(float *)(albw_frame + 0x8))
  #define uStack_74 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_70 (*(undefined4 *)(albw_frame + 0x10))
  #define local_64 (*(float *)(albw_frame + 0x1c))
  #define local_60 (*(undefined4 *)(albw_frame + 0x20))
  #define local_5c (*(undefined4 *)(albw_frame + 0x24))
  #define local_58 (*(float *)(albw_frame + 0x28))
  #define local_54 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_50 (*(undefined4 *)(albw_frame + 0x30))
  #define afStack_48 ((float *)(albw_frame + 0x38))
  #define local_18 (*(float *)(albw_frame + 0x68))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0x6c))
  #define uStack_10 (*(undefined4 *)(albw_frame + 0x70))
  local_64 = DAT_0051474c;
  local_58 = DAT_0051474c;
  local_50 = DAT_00514758;
  local_54 = DAT_00514750;
  local_60 = DAT_00514750;
  local_5c = DAT_00514754;
  func_00491938(afStack_48,0,*(uint *)(param_1 + 1000),0);
  func_00115D18(&local_64,afStack_48,&local_64);
  func_00115D18(&local_58,afStack_48,&local_58);
  puVar3 = *(undefined4 **)(param_1 + 0x40c);
  if (((*DAT_0051475c & 1) == 0) && (iVar2 = func_00100174((int *)DAT_0051475c), iVar2 != 0)) {
    *DAT_00514760 = DAT_00514764;
  }
  if ((puVar3 == (undefined4 *)0x0) ||
     (iVar2 = (**(code **)*puVar3)(puVar3,DAT_00514760), iVar2 == 0)) {
    puVar3 = (undefined4 *)0x0;
  }
  func_00115C54(&local_64,&local_64,(float *)(param_1 + 0x3d0));
  func_00115C54(&local_58,&local_58,(float *)(param_1 + 0x3d0));
  uVar1 = DAT_00514768;
  if (puVar3 != (undefined4 *)0x0) {
    puVar3[0x16] = ALBW_AS_U32(local_64);
    puVar3[0x17] = local_60;
    puVar3[0x18] = local_5c;
    puVar3[0x19] = ALBW_AS_U32(local_58);
    puVar3[0x1a] = local_54;
    puVar3[0x1b] = local_50;
    puVar3[0x1c] = uVar1;
    func_00115C54(&local_18,&local_64,&local_58);
    local_78 = local_18;
    uStack_74 = uStack_14;
    uStack_70 = uStack_10;
    func_00115D88(&local_18,&local_78,DAT_0051476c);
    puVar3[1] = ALBW_AS_U32(local_18);
    puVar3[2] = uStack_14;
    puVar3[3] = uStack_10;
  }
  return;
}

