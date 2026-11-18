#include "ghidra_types.h"

extern int func_00490CD0(int *param_1,undefined1 *param_2);
extern int func_00490EB0(uint *param_1,int param_2,int *param_3);
extern int func_00490F34(int *param_1);
extern int func_00490F84(int *param_1,char *param_2);
extern int func_00498130(undefined4 *param_1,int param_2);
extern int func_00564A78(int param_1,int *param_2);
extern int DAT_0037e6b8;
extern int DAT_0037e6bc;
extern char *DAT_0037e6c0;
extern undefined4 DAT_0037e6c4;
extern undefined4 DAT_0037e6c8;

// USA 0037E580 <- EU 0037E55C (Ghidra, non-matching)
// GLOBAL DAT_0037e6b8 int
// GLOBAL DAT_0037e6bc int
// GLOBAL DAT_0037e6c0 char *
// GLOBAL DAT_0037e6c4 undefined4
// GLOBAL DAT_0037e6c8 undefined4

void func_0037E580(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  char *pcVar7;
  uint uVar8;
  _Alignas(8) unsigned char albw_frame[0xc0];
  #define local_b8 (*(int *)(albw_frame + 0x8))
  #define local_b4 (*(undefined1 * *)(albw_frame + 0xc))
  #define uStack_b0 (*(undefined4 *)(albw_frame + 0x10))
  #define local_ac ((undefined1 *)(albw_frame + 0x14))
  #define uStack_8d (*(undefined1 *)(albw_frame + 0x33))
  #define local_80 (*(int *)(albw_frame + 0x40))
  #define local_7c (*(undefined1 * *)(albw_frame + 0x44))
  #define local_70 ((char *)(albw_frame + 0x50))
  #define auStack_50 ((undefined4 *)(albw_frame + 0x70))
  #define local_2c ((uint *)(albw_frame + 0x94))
  iVar2 = DAT_0037e6bc;
  iVar1 = DAT_0037e6b8;
  uVar8 = 0;
  do {
    local_b4 = local_ac;
    uStack_b0 = 0x20;
    uStack_8d = 0;
    local_ac[0] = 0;
    local_b8 = iVar1;
    piVar3 = func_00498130(auStack_50,(int)&local_b8);
    piVar3 = func_00490F84(piVar3,DAT_0037e6c0);
    local_2c[0] = uVar8 + 1;
    iVar4 = func_00490CD0(piVar3,local_70);
    if (iVar4 != 0) {
      if (local_70[0] == '\0') {
        pcVar7 = (char *)0x0;
      }
      else {
        pcVar7 = local_70;
      }
      func_00490EB0(local_2c,(int)pcVar7,(int *)piVar3[1]);
    }
    func_00490F34(piVar3);
    (**(code **)(local_b8 + 8))(&local_b8);
    local_80 = iVar2;
    local_7c = local_b4;
    uVar5 = func_00564A78(*(int *)(param_1 + 0x48),&local_80);
    iVar4 = uVar8 * 4;
    uVar8 = uVar8 + 1;
    *(uint *)(param_1 + iVar4 + 0x50) = uVar5;
    puVar6 = (uint *)(*(int *)(*(int *)(*(int *)(param_1 + 0x48) + 0x24) + 0xc) + uVar5 * 0x40);
    *puVar6 = *puVar6 | 0x10;
  } while (uVar8 < 6);
  local_b8 = iVar2;
  local_b4 = (undefined1 *)DAT_0037e6c4;
  uVar8 = func_00564A78(*(int *)(param_1 + 0x48),&local_b8);
  *(uint *)(param_1 + 0x8c) = uVar8;
  puVar6 = (uint *)(*(int *)(*(int *)(*(int *)(param_1 + 0x48) + 0x24) + 0xc) + uVar8 * 0x40);
  *puVar6 = *puVar6 | 0x10;
  local_b8 = iVar2;
  local_b4 = (undefined1 *)DAT_0037e6c8;
  uVar8 = func_00564A78(*(int *)(param_1 + 0x48),&local_b8);
  *(uint *)(param_1 + 0x4c) = uVar8;
  return;
}

