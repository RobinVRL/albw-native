#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00227500(int param_1,int param_2);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern int func_0036C42C(int param_1);
extern int func_004A3700(int param_1);
extern int func_005811E8(int *param_1);
extern int DAT_00225a20;
extern int *DAT_00225a68;
extern char s_SE_Togegoma_EYE_JUMP_00225a3c[];
extern char s_SE_Togegoma_V_DAMAGE_00225a24[];
extern char s_SE_Togegoma_V_DIE_00225a54[];

// USA 00225818 <- EU 00225818 (Ghidra, non-matching)
// GLOBAL DAT_00225a20 int
// GLOBAL DAT_00225a68 int *
// GLOBAL s_SE_Togegoma_EYE_JUMP_00225a3c string
// GLOBAL s_SE_Togegoma_V_DAMAGE_00225a24 string
// GLOBAL s_SE_Togegoma_V_DIE_00225a54 string

undefined4 func_00225818(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define iStack_7c (*(int *)(albw_frame + 0x4))
  #define local_78 (*(int *)(albw_frame + 0x8))
  #define local_74 (*(char * *)(albw_frame + 0xc))
  #define aiStack_70 ((int *)(albw_frame + 0x10))
  #define local_20 (*(int *)(albw_frame + 0x60))
  #define local_1c (*(char * *)(albw_frame + 0x64))
  iVar1 = DAT_00225a20;
  if (0 < param_1[0x1b5]) {
    uVar5 = func_00111A64((uint *)(*DAT_00225a68 + 0x660));
    iVar3 = (int)((ulonglong)uVar5 * 3 >> 0x20);
    if (iVar3 == 0) {
      puVar4 = (uint *)func_002C11E8(aiStack_70,1,10,0);
      func_0016898C(param_1[0x1a3],puVar4);
    }
    else if (iVar3 == 1) {
      puVar4 = (uint *)func_002C11E8(aiStack_70,2,10,0);
      func_0016898C(param_1[0x1a3],puVar4);
    }
    else {
      puVar4 = (uint *)func_002C11E8(aiStack_70,3,10,0);
      func_0016898C(param_1[0x1a3],puVar4);
    }
    local_74 = s_SE_Togegoma_V_DAMAGE_00225a24;
    local_78 = iVar1;
    return func_00150A84(param_1,&local_78,0);
  }
  *(undefined1 *)((int)param_1 + 0x74e) = 0;
  iVar2 = func_005811E8(param_1 + 0x103);
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = param_1[0x103];
  }
  if ((iVar2 != 0 && iVar3 != 0) && (*(int *)(iVar3 + 0x1c) == param_1[0x104])) {
    *(uint *)(iVar3 + 0x3c) = *(uint *)(iVar3 + 0x3c) & 0xffffffbb | 8;
    func_004A3700(iVar3);
  }
  if (*(char *)((int)param_1 + 0x73d) == '\x02') {
    func_00227500((int)param_1,1);
    local_1c = s_SE_Togegoma_V_DIE_00225a54;
    local_20 = iVar1;
    func_00150A84(param_1,&local_20,0);
    func_0036C42C((int)(param_1 + 0x123));
    puVar4 = (uint *)func_002C11E8(&iStack_7c,0x10,10,0);
    func_0016898C(param_1[0x1a3],puVar4);
    *(undefined1 *)((int)param_1 + 0x753) = 1;
    return 0;
  }
  puVar4 = (uint *)func_002C11E8(aiStack_70,10,10,0);
  func_0016898C(param_1[0x1a3],puVar4);
  local_74 = s_SE_Togegoma_V_DAMAGE_00225a24;
  local_78 = iVar1;
  func_00150A84(param_1,&local_78,0);
  local_74 = s_SE_Togegoma_EYE_JUMP_00225a3c;
  local_78 = iVar1;
  return func_00150A84(param_1,&local_78,0);
}

