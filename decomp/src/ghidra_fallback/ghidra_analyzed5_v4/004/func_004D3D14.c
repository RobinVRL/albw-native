#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0014EB8C(int param_1,undefined4 param_2,undefined2 *param_3,uint *param_4,undefined2 param_5, undefined4 param_6,undefined2 param_7);
extern int func_004356B4(int *param_1);
extern int func_004A879C(int param_1,int param_2,uint param_3);
extern int func_004EDAD0(int param_1,uint *param_2);
extern int func_004EDC9C(undefined4 *param_1);
extern int func_004EE484(undefined4 *param_1);
extern int func_0054D964(int param_1,uint param_2);
extern undefined *DAT_004d3ef8;
extern undefined4 DAT_004d3efc;
extern int *DAT_004d3f00;

// USA 004D3D14 <- EU 004D3CEC (Ghidra, non-matching)
// GLOBAL DAT_004d3ef8 undefined *
// GLOBAL DAT_004d3efc undefined4
// GLOBAL DAT_004d3f00 int *

/* WARNING: Variable defined which should be unmapped: objStack_50 */

void func_004D3D14(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define objStack_50 ((uint *)(albw_frame + 0x0))
  #define local_28 (*(uint *)(albw_frame + 0x28))
  iVar7 = *(int *)(param_1 + 0x478);
  if (0 < iVar7) {
    iVar1 = func_0010CEE0(iVar7 << 5,(int *)0x0,4);
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = func_00100118(iVar1,DAT_004d3ef8,0x20,iVar7);
    }
    if ((0 < iVar7) && (iVar2 != 0)) {
      *(int *)(param_1 + 0x624) = iVar2;
      *(int *)(param_1 + 0x620) = iVar7;
    }
    piVar8 = *(int **)(param_1 + 0x480);
    iVar2 = *(int *)(param_1 + 0x624);
    iVar7 = 0;
    piVar9 = piVar8 + *(int *)(param_1 + 0x478);
    if (piVar8 != piVar9) {
      do {
        piVar3 = (int *)func_0054D964(param_1,0);
        iVar1 = *piVar8;
        fVar12 = *(float *)(param_1 + 0x61c);
        fVar11 = *(float *)(iVar1 + 8);
        iVar10 = *(int *)(iVar1 + 0xc);
        piVar3[1] = *(int *)(iVar1 + 4);
        piVar3[2] = (int)ALBW_AS_U32((fVar11 + fVar12));
        piVar3[3] = iVar10;
        func_004356B4(piVar3);
        piVar3[0xb] = piVar3[0xb] | 0x2000;
        *(int **)(iVar2 + iVar7 * 0x20 + 8) = piVar3;
        puVar4 = (undefined4 *)func_0010BAB4(0x48);
        puVar5 = (undefined4 *)0x0;
        if (puVar4 != (undefined4 *)0x0) {
          puVar5 = func_004EDC9C(puVar4);
        }
        *(undefined4 **)(iVar2 + iVar7 * 0x20 + 0x10) = puVar5;
        puVar5[6] = *(undefined4 *)(iVar2 + iVar7 * 0x20 + 8);
        objStack_50[0] = *(uint *)(param_1 + 0x2cc);
        func_004EDAD0(*(int *)(iVar2 + iVar7 * 0x20 + 0x10),objStack_50);
        uVar6 = DAT_004d3efc;
        *(undefined2 *)(*(int *)(iVar2 + iVar7 * 0x20 + 0x10) + 0x2c) =
             *(undefined2 *)(param_1 + 0x54);
        *(short *)(*(int *)(iVar2 + iVar7 * 0x20 + 8) + 0x28) = (short)uVar6;
        func_004A879C(*DAT_004d3f00,*(int *)(iVar2 + iVar7 * 0x20 + 0x10),2);
        piVar3 = (int *)func_0054D964(param_1,1);
        iVar1 = *piVar8;
        fVar12 = *(float *)(param_1 + 0x61c);
        fVar11 = *(float *)(iVar1 + 8);
        iVar10 = *(int *)(iVar1 + 0xc);
        piVar3[1] = *(int *)(iVar1 + 4);
        piVar3[2] = (int)ALBW_AS_U32((fVar11 + fVar12));
        piVar3[3] = iVar10;
        func_004356B4(piVar3);
        *(int **)(iVar2 + iVar7 * 0x20 + 0xc) = piVar3;
        iVar1 = *(int *)(iVar2 + iVar7 * 0x20 + 0xc);
        *(uint *)(iVar1 + 0x2c) = *(uint *)(iVar1 + 0x2c) | 0x100000;
        puVar5 = (undefined4 *)func_0010BAB4(100);
        uVar6 = 0;
        if (puVar5 != (undefined4 *)0x0) {
          uVar6 = func_004EE484(puVar5);
        }
        *(undefined4 *)(iVar2 + iVar7 * 0x20 + 4) = uVar6;
        local_28 = *(uint *)(param_1 + 0x2cc);
        objStack_50[0] = 0x1f00;
        iVar1 = iVar2 + iVar7 * 0x20;
        func_0014EB8C(*(int *)(iVar1 + 4),*(undefined4 *)(iVar1 + 0xc),
                      *(undefined2 **)(param_1 + 0x3a0),&local_28,*(undefined2 *)(param_1 + 0x54),
                      param_1 + 0x62c,0x1f00);
        piVar8 = piVar8 + 1;
        iVar7 = iVar7 + 1;
      } while (piVar8 != piVar9);
    }
  }
  return;
}

