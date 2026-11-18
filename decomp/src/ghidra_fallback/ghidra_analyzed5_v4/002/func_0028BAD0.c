#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00169608(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_0016A2FC(undefined4 *param_1,int param_2,undefined4 param_3,int param_4);
extern int func_001D6AFC(int param_1);
extern int func_001D7B04(undefined4 *param_1,uint *param_2);
extern int func_004ECF6C(int param_1);
extern int DAT_0028bc50;
extern undefined4 DAT_0028bc54;
extern int DAT_0028bc64;
extern undefined4 DAT_0028bc68;
extern float DAT_0028bc6c;
extern undefined4 DAT_0028bc70;
extern char s_RupeeSilver_0028bc58[];

// USA 0028BAD0 <- EU 0028BAF8 (Ghidra, non-matching)
// GLOBAL DAT_0028bc50 int
// GLOBAL DAT_0028bc54 undefined4
// GLOBAL DAT_0028bc64 int
// GLOBAL DAT_0028bc68 undefined4
// GLOBAL DAT_0028bc6c float
// GLOBAL DAT_0028bc70 undefined4
// GLOBAL s_RupeeSilver_0028bc58 string

int * func_0028BAD0(undefined4 *param_1,uint *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  uint in_r12;
  undefined4 uVar6;
  float fVar7;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define local_88 ((uint *)(albw_frame + 0x8))
  #define local_80 (*(undefined4 * *)(albw_frame + 0x10))
  #define local_7c (*(undefined4 *)(albw_frame + 0x14))
  #define local_78 (*(float *)(albw_frame + 0x18))
  #define uStack_74 (*(undefined4 *)(albw_frame + 0x1c))
  #define uStack_70 (*(undefined4 *)(albw_frame + 0x20))
  #define uStack_6c (*(undefined4 *)(albw_frame + 0x24))
  #define local_68 (*(uint *)(albw_frame + 0x28))
  #define local_34 (*(undefined4 *)(albw_frame + 0x5c))
  #define local_30 (*(undefined1 *)(albw_frame + 0x60))
  #define local_28 (*(int *)(albw_frame + 0x68))
  #define local_24 (*(char * *)(albw_frame + 0x6c))
  piVar1 = func_001D7B04(param_1,param_2);
  iVar4 = DAT_0028bc50;
  iVar5 = DAT_0028bc50 + 100;
  *(undefined1 *)((int)piVar1 + 0x515) = 4;
  piVar1[200] = iVar5;
  piVar1[0x144] = 100;
  *piVar1 = iVar4;
  puVar2 = (undefined4 *)func_0010BAB4(0xa8);
  puVar3 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = func_0016A2FC(puVar2,1,DAT_0028bc54,1);
  }
  piVar1[0x146] = (int)puVar3;
  local_28 = DAT_0028bc64;
  local_24 = s_RupeeSilver_0028bc58;
  func_00169608((uint *)piVar1[0x146],0,&local_28,*(int *)(piVar1[0xb4] + 0x1c8));
  func_0016A02C(piVar1[0x146],-1,(int *)0xffffffff,0);
  local_80 = &local_7c;
  local_88[1] = 3;
  local_30 = 0;
  local_34 = 10;
  local_7c = 0;
  local_88[0] = 1;
  local_68 = in_r12 | 0xff;
  local_78 = DAT_0028bc6c;
  uStack_74 = DAT_0028bc68;
  uStack_70 = DAT_0028bc70;
  uStack_6c = DAT_0028bc68;
  uVar6 = DAT_0028bc68;
  fVar7 = DAT_0028bc6c;
  func_0016898C(piVar1[0x146],local_88);
  iVar4 = *(int *)(piVar1[0x146] + 0x14);
  if (*(float *)(iVar4 + 8) != fVar7) {
    *(float *)(iVar4 + 8) = fVar7;
    *(undefined1 *)(iVar4 + 0x26) = 1;
  }
  *(undefined4 *)(*(int *)(piVar1[0x146] + 0x14) + 0x10) = uVar6;
  iVar4 = func_001D6AFC((int)piVar1);
  if (iVar4 != 0) {
    func_004ECF6C((int)piVar1);
  }
  return piVar1;
}

