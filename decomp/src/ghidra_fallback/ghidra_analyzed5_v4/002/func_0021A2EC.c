#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_0014FAFC(int param_1,uint param_2,float fparam_0);
extern int func_00521078(int param_1);
extern int func_0058A8F0(int param_1);
extern float func_0058AC38(int param_1);
extern int func_0065DFCC(undefined4 *param_1,undefined1 param_2);
extern undefined4 DAT_0021a4d0;
extern undefined4 DAT_0021a4d4;
extern float DAT_0021a4d8;
extern int DAT_0021a4dc;
extern float DAT_0021a4e0;
extern float DAT_0021a4e4;
extern int DAT_0021a4e8;
extern undefined4 DAT_0021a4ec;

// USA 0021A2EC <- EU 0021A2EC (Ghidra, non-matching)
// GLOBAL DAT_0021a4d0 undefined4
// GLOBAL DAT_0021a4d4 undefined4
// GLOBAL DAT_0021a4d8 float
// GLOBAL DAT_0021a4dc int
// GLOBAL DAT_0021a4e0 float
// GLOBAL DAT_0021a4e4 float
// GLOBAL DAT_0021a4e8 int
// GLOBAL DAT_0021a4ec undefined4

void func_0021A2EC(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 ((float *)(albw_frame + 0x0))
  #define local_28 (*(float *)(albw_frame + 0x8))
  *(undefined4 *)(param_1 + 0x1328) = DAT_0021a4d0;
  *(undefined4 *)(param_1 + 0x1350) = 0;
  *(undefined4 *)(param_1 + 0x136c) = 0;
  uVar8 = DAT_0021a4d4;
  fVar9 = *(float *)(param_1 + 0x3e0);
  fVar5 = *(float *)(param_1 + 0x132c);
  fVar5 = fVar5 + -fVar5 * DAT_0021a4d8;
  *(float *)(param_1 + 0x132c) = fVar5;
  func_0014FAFC(param_1,*(int *)(param_1 + 1000) + 0x80000000,fVar5);
  *(float *)(param_1 + 0x3e0) = fVar9;
  if (*(int *)(param_1 + 0x132c) < DAT_0021a4dc) {
    fVar5 = fVar9 - DAT_0021a4e0;
    if (fVar9 - DAT_0021a4e0 < DAT_0021a4e4) {
      fVar5 = DAT_0021a4e4;
    }
    *(float *)(param_1 + 0x3e0) = fVar5;
  }
  func_00115C54((float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3dc));
  iVar2 = func_0058A8F0(param_1);
  if (iVar2 != 0) {
    *(undefined4 *)(param_1 + 0x3dc) = uVar8;
    *(undefined4 *)(param_1 + 0x3e4) = uVar8;
    *(undefined4 *)(param_1 + 0x132c) = uVar8;
    fVar5 = func_0058AC38(param_1);
    if ((fVar5 == *(float *)(param_1 + 0x1338)) && (bVar1 = func_00521078(param_1), bVar1)) {
      uVar4 = *(uint *)(param_1 + 0x1360);
      if (uVar4 < *(uint *)(param_1 + 0x1364)) {
        *(uint *)(param_1 + 0x1360) = uVar4 + 1;
      }
      else {
        if (*(char *)(param_1 + 0x1376) == '\x01') {
          *(undefined1 *)(param_1 + 0x1376) = 2;
        }
        func_00115C70(local_30,(float *)(param_1 + 0x1310),(float *)(param_1 + 0x3d0));
        if ((int)ALBW_AS_U32((local_30[0] * local_30[0] + local_28 * local_28)) < 0x3e800001) {
          iVar2 = 0;
          do {
            uVar6 = *(undefined4 *)(param_1 + 0x3d4);
            uVar7 = *(undefined4 *)(param_1 + 0x3d8);
            puVar3 = (undefined4 *)(param_1 + 0x9a4 + iVar2 * 0x18);
            iVar2 = iVar2 + 1;
            *puVar3 = *(undefined4 *)(param_1 + 0x3d0);
            puVar3[1] = uVar6;
            puVar3[2] = uVar7;
            uVar6 = *(undefined4 *)(param_1 + 1000);
            puVar3[4] = 0;
            puVar3[3] = uVar6;
            puVar3[5] = uVar8;
          } while (iVar2 != 100);
          if (0 < *(short *)(DAT_0021a4e8 + param_1)) {
            *(undefined4 *)(param_1 + 0x3dc) = uVar8;
            *(undefined4 *)(param_1 + 0x3e4) = uVar8;
            uVar6 = DAT_0021a4ec;
            *(undefined4 *)(param_1 + 0x132c) = uVar8;
            *(undefined4 *)(param_1 + 0x1328) = uVar6;
            *(undefined1 *)(param_1 + 0x1376) = 0;
            func_0065DFCC((undefined4 *)(param_1 + 0x8bc),2);
            *(undefined1 *)(param_1 + 0x1375) = 2;
            return;
          }
          func_0065DFCC((undefined4 *)(param_1 + 0x8bc),5);
        }
      }
    }
  }
  return;
}

