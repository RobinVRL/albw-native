#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_003838A8(int param_1,int param_2);
extern int func_003840A0(int param_1,int param_2);
extern int func_003B0D94(int param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int *DAT_003b2184;
extern uint *DAT_003b2188;
extern undefined4 *DAT_003b218c;
extern undefined4 DAT_003b2190;
extern undefined4 DAT_003b2194;
extern undefined4 DAT_003b2198;
extern undefined4 DAT_003b219c;

// USA 003B1FC4 <- EU 003B1FA0 (Ghidra, non-matching)
// GLOBAL DAT_003b2184 int *
// GLOBAL DAT_003b2188 uint *
// GLOBAL DAT_003b218c undefined4 *
// GLOBAL DAT_003b2190 undefined4
// GLOBAL DAT_003b2194 undefined4
// GLOBAL DAT_003b2198 undefined4
// GLOBAL DAT_003b219c undefined4

undefined4 func_003B1FC4(int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint in_r12;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define local_88 ((uint *)(albw_frame + 0x8))
  #define piStack_80 (*(int * *)(albw_frame + 0x10))
  #define local_7c (*(int *)(albw_frame + 0x14))
  #define local_78 (*(undefined4 *)(albw_frame + 0x18))
  #define local_74 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_70 (*(undefined4 *)(albw_frame + 0x20))
  #define local_6c (*(undefined4 *)(albw_frame + 0x24))
  #define local_68 (*(uint *)(albw_frame + 0x28))
  #define local_34 (*(undefined4 *)(albw_frame + 0x5c))
  #define local_30 (*(undefined1 *)(albw_frame + 0x60))
  puVar2 = (undefined4 *)func_0052FBA0(*DAT_003b2184 + 0x3dbbc,*(uint *)(param_1 + 0x90));
  if (((*DAT_003b2188 & 1) == 0) && (iVar3 = func_00100174((int *)DAT_003b2188), iVar3 != 0)) {
    *DAT_003b218c = DAT_003b2190;
  }
  if ((puVar2 == (undefined4 *)0x0) ||
     (iVar3 = (**(code **)*puVar2)(puVar2,DAT_003b218c), iVar3 == 0)) {
    puVar2 = (undefined4 *)0x0;
  }
  if ((puVar2 != (undefined4 *)0x0) && (*(char *)((int)puVar2 + 0x4f1) != '\0')) {
    iVar3 = *(int *)(param_1 + 0x48);
    iVar5 = iVar3 + 0x8c0;
    iVar4 = func_003838A8(iVar5,0x59);
    bVar1 = func_003840A0(iVar5,iVar4);
    uVar6 = DAT_003b2198;
    uVar7 = DAT_003b2194;
    uVar8 = DAT_003b219c;
    if (!bVar1) {
      piStack_80 = &local_7c;
      local_88[1] = 3;
      local_34 = 10;
      local_30 = 0;
      local_88[0] = 1;
      local_68 = in_r12 | 0xff;
      local_78 = DAT_003b2194;
      local_74 = DAT_003b2198;
      local_70 = DAT_003b219c;
      local_6c = DAT_003b2198;
      local_7c = iVar4;
      func_0016898C(*(int *)(iVar3 + 0x8dc),local_88);
    }
    iVar3 = *(int *)(param_1 + 0x48);
    iVar4 = func_003838A8(iVar3 + 0x8c0,10);
    iVar5 = func_003838A8(iVar3 + 0x8c0,iVar4);
    if (**(int **)(*(int *)(iVar3 + 0x8e0) + 0x14) != iVar5) {
      piStack_80 = &local_7c;
      local_88[1] = 3;
      local_34 = 10;
      local_30 = 0;
      local_88[0] = 1;
      local_68 = *(uint *)(*(int *)(iVar3 + 0x8e0) + 0xc) | 0xff;
      local_7c = iVar4;
      local_78 = uVar7;
      local_74 = uVar6;
      local_70 = uVar8;
      local_6c = uVar6;
      func_0016898C(*(int *)(iVar3 + 0x8e0),local_88);
    }
    return 0;
  }
  return func_003B0D94(param_1);
}

