#include "ghidra_types.h"

extern int func_002ACC68(undefined4 *param_1);
extern int func_004F68AC();
extern float func_00521274(int param_1);
extern int func_00581B9C(int param_1);
extern int func_00582250(int param_1);
extern int func_0058A44C(int param_1);
extern float DAT_0021a738;
extern int *DAT_0021a73c;

// USA 0021A59C <- EU 0021A59C (Ghidra, non-matching)
// GLOBAL DAT_0021a738 float
// GLOBAL DAT_0021a73c int *

undefined4 func_0021A59C(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  int in_r2;
  float *in_r3;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  float fVar8;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(undefined4 *)(albw_frame + 0x0))
  #define local_2c (*(float *)(albw_frame + 0x4))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x8))
  iVar2 = func_0058A44C(param_1);
  if ((iVar2 == 0) || (*(char *)(param_1 + 0x8c0) != '\0')) goto LAB_0021a724;
  uVar6 = *(uint *)(param_1 + 0x1340);
  if (-1 < (int)uVar6) {
    if (*(char *)(param_1 + 0x1372) == '\0') {
      iVar2 = *DAT_0021a73c;
      iVar3 = func_00581B9C(iVar2);
      if (((iVar3 == 1) && (puVar4 = (uint *)func_00582250(iVar2), uVar6 < *puVar4)) &&
         (uVar6 = *(uint *)(puVar4[2] + uVar6 * 4), uVar6 != 0)) {
        in_r2 = *(int *)(uVar6 + 0x28);
        if (in_r2 != 0) {
          uVar6 = *(uint *)(uVar6 + 0x20);
        }
        if ((in_r2 != 0 && *(uint *)(param_1 + 0x1348) < uVar6) &&
           (iVar2 = *(int *)(in_r2 + *(uint *)(param_1 + 0x1348) * 4), iVar2 != 0)) {
          uVar5 = *(undefined4 *)(iVar2 + 0x1c);
          uVar7 = *(undefined4 *)(iVar2 + 0x20);
          *(undefined4 *)(param_1 + 0x368) = *(undefined4 *)(iVar2 + 0x18);
          *(undefined4 *)(param_1 + 0x36c) = uVar5;
          *(undefined4 *)(param_1 + 0x370) = uVar7;
          uVar7 = *(undefined4 *)(iVar2 + 0x18);
          in_r3 = *(float **)(iVar2 + 0x1c);
          uVar5 = *(undefined4 *)(iVar2 + 0x20);
          *(undefined4 *)(param_1 + 0x3d8) = uVar5;
          *(undefined4 *)(param_1 + 0x3d0) = uVar7;
          *(float **)(param_1 + 0x3d4) = in_r3;
          in_r2 = *(int *)(param_1 + 0x3d4);
          *(undefined4 *)(param_1 + 0x130c) = uVar5;
          *(undefined4 *)(param_1 + 0x1304) = *(undefined4 *)(param_1 + 0x3d0);
          *(int *)(param_1 + 0x1308) = in_r2;
          *(undefined4 *)(param_1 + 0x1308) = *(undefined4 *)(param_1 + 0xc);
          *(undefined1 *)(param_1 + 0x1372) = 1;
        }
      }
    }
    goto LAB_0021a724;
  }
  if (*(char *)(param_1 + 0x1374) == '\0') {
    local_30 = *(undefined4 *)(param_1 + 0x3d0);
    uStack_28 = *(undefined4 *)(param_1 + 0x3d8);
    local_2c = *(float *)(param_1 + 0x3d4) + DAT_0021a738;
    bVar1 = func_002ACC68(&local_30);
    if (bVar1) {
      fVar8 = func_00521274(param_1);
      if (*(float *)(param_1 + 0x1330) * *(float *)(param_1 + 0x1330) < fVar8) goto LAB_0021a638;
    }
    else {
LAB_0021a638:
      *(undefined4 *)(param_1 + 0x368) = *(undefined4 *)(param_1 + 8);
      *(undefined4 *)(param_1 + 0x36c) = *(undefined4 *)(param_1 + 0xc);
      *(undefined4 *)(param_1 + 0x370) = *(undefined4 *)(param_1 + 0x10);
      in_r3 = *(float **)(param_1 + 0x10);
      *(undefined4 *)(param_1 + 0x3d0) = *(undefined4 *)(param_1 + 8);
      *(undefined4 *)(param_1 + 0x3d4) = *(undefined4 *)(param_1 + 0xc);
      *(float **)(param_1 + 0x3d8) = in_r3;
    }
    *(undefined1 *)(param_1 + 0x1374) = 1;
  }
  in_r2 = *(int *)(param_1 + 0x3d8);
  *(undefined4 *)(param_1 + 0x1304) = *(undefined4 *)(param_1 + 0x3d0);
  *(undefined4 *)(param_1 + 0x1308) = *(undefined4 *)(param_1 + 0x3d4);
  *(int *)(param_1 + 0x130c) = in_r2;
  *(undefined4 *)(param_1 + 0x1308) = *(undefined4 *)(param_1 + 0xc);
LAB_0021a724:
  return func_004F68AC(param_1,param_2,in_r2,in_r3);
}

