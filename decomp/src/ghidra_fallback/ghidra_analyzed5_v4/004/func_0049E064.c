#include "ghidra_types.h"

extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0010CF28(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0048E8DC(int param_1,int *param_2);
extern int func_0048FAB0(undefined4 *param_1,int param_2,int param_3,int *param_4,undefined4 param_5, undefined1 param_6,undefined4 param_7,undefined4 param_8,int param_9);
extern undefined4 DAT_0049e204;
extern undefined4 *DAT_0049e208;
extern undefined4 DAT_0049e20c;
extern char s_NullFader_0049e220[];
extern char s_Prepare_Thread_0049e210[];

// USA 0049E064 <- EU 0049E03C (Ghidra, non-matching)
// GLOBAL DAT_0049e204 undefined4
// GLOBAL DAT_0049e208 undefined4 *
// GLOBAL DAT_0049e20c undefined4
// GLOBAL s_NullFader_0049e220 string
// GLOBAL s_Prepare_Thread_0049e210 string

/* WARNING: Variable defined which should be unmapped: objStack_60 */

void func_0049E064(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int extraout_r1;
  int iVar9;
  undefined4 uVar10;
  int *in_r3;
  int *piVar11;
  int iVar12;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define objStack_60 ((uint *)(albw_frame + 0x0))
  #define local_40 (*(undefined4 *)(albw_frame + 0x20))
  #define local_3c (*(char * *)(albw_frame + 0x24))
  #define local_38 ((int * *)(albw_frame + 0x28))
  #define local_28 (*(undefined4 *)(albw_frame + 0x38))
  #define local_24 (*(undefined4 *)(albw_frame + 0x3c))
  piVar11 = *(int **)(param_1 + *(int *)(param_1 + 0x88) * 4 + 0x74);
  puVar3 = (undefined4 *)func_0010CF28(0x90,piVar11,4);
  uVar1 = DAT_0049e204;
  piVar5 = (int *)0x0;
  if (puVar3 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)func_0010CF28(0x10,piVar11,4);
    if (puVar4 != (undefined4 *)0x0) {
      uVar10 = DAT_0049e208[1];
      puVar4[2] = *DAT_0049e208;
      uVar2 = DAT_0049e20c;
      puVar4[3] = uVar10;
      *puVar4 = uVar2;
      puVar4[1] = param_1;
    }
    local_3c = s_Prepare_Thread_0049e210;
    local_40 = uVar1;
    objStack_60[3] = *(uint *)(param_1 + 0x11c);
    objStack_60[2] = 0x7fffffff;
    objStack_60[1] = 0;
    objStack_60[4] = 0x20;
    objStack_60[0] = *(uint *)(param_1 + 0x120);
    if (objStack_60[0] == 0xffffffff) {
      objStack_60[0] = 0x11;
    }
    in_r3 = piVar11;
    piVar5 = (int *)func_0048FAB0(puVar3,(int)&local_40,(int)puVar4,piVar11,objStack_60[0],0,
                                  0x7fffffff,objStack_60[3],0x20);
  }
  *(int **)(param_1 + 0x24) = piVar5;
  (**(code **)(*piVar5 + 0x14))(piVar5);
  local_24 = 0;
  objStack_60[0] = (uint)local_38;
  local_28 = 0;
  objStack_60[2] = 0;
  objStack_60[1] = param_1;
  local_38[0] = piVar11;
  iVar6 = func_0010CF28(0x1ec,piVar11,4);
  iVar7 = 0;
  if (iVar6 != 0) {
    iVar7 = func_0048E8DC(iVar6,(int *)objStack_60);
  }
  *(int *)(param_1 + 0x28) = iVar7;
  *(char **)(iVar7 + 0x28) = s_NullFader_0049e220;
  *(undefined1 *)(*(int *)(param_1 + 0x28) + 0x60) = 4;
  iVar7 = func_0010CF28(0x18,piVar11,4);
  if (iVar7 == 0) {
    iVar7 = 0;
  }
  else {
    iVar6 = *(int *)(param_1 + 0x90);
    *(int *)(iVar7 + 4) = iVar7;
    *(undefined4 *)(iVar7 + 8) = 0;
    *(undefined4 *)(iVar7 + 0xc) = 0;
    *(int *)iVar7 = iVar7;
    *(undefined4 *)(iVar7 + 0x10) = 0;
    *(undefined4 *)(iVar7 + 0x14) = 0;
    if ((0 < iVar6) && (iVar8 = func_0010CEE0(iVar6 * 0x9c,piVar11,4), iVar8 != 0)) {
      iVar12 = iVar6 + -1;
      iVar9 = extraout_r1;
      if (0 < iVar12) {
        iVar9 = 0;
        in_r3 = (int *)(iVar6 + -1);
      }
      *(int *)(iVar7 + 0xc) = iVar8;
      if (0 < iVar12) {
        do {
          in_r3 = (int *)((int)in_r3 + -1);
          *(int *)(iVar8 + iVar9 * 4) = iVar8 + (iVar9 + 0x27) * 4;
          iVar9 = iVar9 + 0x27;
        } while (in_r3 != (int *)0x0);
      }
      *(undefined4 *)(iVar8 + iVar12 * 0x9c) = 0;
      *(int *)(iVar7 + 0x10) = iVar8;
      *(int *)(iVar7 + 0x14) = iVar6;
    }
  }
  *(int *)(param_1 + 0x8c) = iVar7;
  return;
}

