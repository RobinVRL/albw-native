#include "ghidra_types.h"

extern int func_0014E2A0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5 ,int param_6);
extern int func_0014F510(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5 ,int param_6);
extern int func_001507D8(int param_1,int *param_2,int param_3);
extern int func_00187490(int param_1);
extern int func_00189040(int param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_00581D48(int param_1,float *param_2);
extern int func_00581D60(int param_1);
extern int func_00659544(undefined4 *param_1,undefined1 param_2);
extern int *DAT_00189c18;
extern undefined DAT_00189c1c;
extern uint DAT_00189c30;
extern int *DAT_00189c34;
extern int *DAT_00189c38;
extern int DAT_00189c3c;
extern char s__SE_BombS_FUSE_00189c1f[];
extern undefined4 _DAT_00189c1c;

// USA 00189944 <- EU 00189944 (Ghidra, non-matching)
// GLOBAL DAT_00189c18 int *
// GLOBAL DAT_00189c1c undefined
// GLOBAL DAT_00189c30 uint
// GLOBAL DAT_00189c34 int *
// GLOBAL DAT_00189c38 int *
// GLOBAL DAT_00189c3c int

/* WARNING: Variable defined which should be unmapped: objStack_28 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_00189944(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  int *piVar5;
  undefined4 extraout_r1;
  int iVar6;
  int *piVar7;
  char *pcVar8;
  int *piVar9;
  float *pfVar10;
  bool bVar11;
  uint in_fpscr;
  float fVar12;
  float fVar13;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define objStack_28 ((uint *)(albw_frame + 0x8))
  if ((*(int *)(*DAT_00189c18 + 0x44) == 0) &&
     (*(uint *)(param_1 + 0x698) < *(uint *)(param_1 + 0x69c))) {
    *(uint *)(param_1 + 0x698) = *(uint *)(param_1 + 0x698) + 1;
  }
  if (((int)(*(uint *)(param_1 + 0x69c) - *(int *)(param_1 + 0x698)) < 0x3d) &&
     (*(int *)(param_1 + 0x4f8) != 0)) {
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x4f8) + 0x14) + 0x10) = _DAT_00189c1c;
  }
  pcVar8 = (char *)(param_1 + 0x500);
  piVar9 = (int *)(param_1 + 0x4fc);
  iVar1 = (int)*pcVar8;
  if (*(uint *)(param_1 + 0x698) < *(uint *)(param_1 + 0x69c)) {
    if (iVar1 != 6 && iVar1 != 8) {
      bVar11 = iVar1 != 7;
      if (bVar11) {
        iVar1 = *(int *)(param_1 + 0x4f8);
      }
      if (bVar11 && iVar1 != 0) {
        objStack_28[1] = (int)s__SE_BombS_FUSE_00189c1f + 1;
        objStack_28[0] = DAT_00189c30;
        func_001507D8(param_1,(int *)objStack_28,0);
      }
    }
  }
  else if ((iVar1 != 6 && iVar1 != 8) && (iVar1 != 7 && iVar1 != 0xb)) {
    func_00659544(piVar9,6);
  }
  piVar7 = *(int **)(param_1 + 0x510);
  piVar5 = (int *)(*(int *)(param_1 + 0x518) + *(char *)(param_1 + 0x500) * 8);
  uVar2 = *(uint *)(*(int *)(param_1 + 0x518) + *(char *)(param_1 + 0x500) * 8 + 4);
  if ((uVar2 & 1) != 0) {
    piVar5 = (int *)(*piVar5 + *(int *)((int)piVar7 + ((int)uVar2 >> 1)));
  }
  (*(code *)*piVar5)();
  iVar1 = *piVar9;
  iVar6 = *(int *)(param_1 + 0x50c);
  *piVar9 = iVar1 + 1;
  if (iVar6 != 0) {
    fVar12 = (float)VectorUnsignedToFloat(iVar1 + 1,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(iVar6,1,fVar12);
  }
  if (*(char *)(param_1 + 0x6b6) == '\0') {
LAB_00189ac8:
    if (*pcVar8 == '\x06' || *pcVar8 == '\a') goto LAB_00189b0c;
  }
  else if (*pcVar8 != '\x03') {
    *(undefined1 *)(param_1 + 0x6b6) = 0;
    func_00659544(piVar9,3);
    goto LAB_00189ac8;
  }
  bVar11 = *(char *)(param_1 + 0x6b4) == '\0';
  cVar4 = '\0';
  if (!bVar11) {
    cVar4 = *(char *)(param_1 + 0x6b5);
  }
  objStack_28[0] = 0;
  objStack_28[1] = 0;
  iVar6 = param_1 + 0x66c;
  piVar7 = DAT_00189c34;
  if (bVar11 || cVar4 == '\0') {
    func_0014F510(param_1,*(undefined4 *)(param_1 + 0x56c),iVar6,(uint)DAT_00189c34,0,0);
  }
  else {
    func_0014E2A0(param_1,*(undefined4 *)(param_1 + 0x56c),iVar6,(uint)DAT_00189c34,0,0);
  }
LAB_00189b0c:
  piVar5 = DAT_00189c38;
  iVar1 = func_00581D60(*DAT_00189c38);
  pfVar10 = (float *)(param_1 + 0x3d0);
  if (*(int *)(param_1 + 0x6c8) != iVar1) {
    *(int *)(param_1 + 0x6c8) = iVar1;
    iVar3 = func_00581D48(*piVar5,pfVar10);
    if (iVar3 != iVar1) {
      *(undefined1 *)(param_1 + 0x6d0) = 1;
      *(undefined4 *)(param_1 + 0x6cc) = 0;
      *(float *)(param_1 + 0x6bc) = *pfVar10;
      *(undefined4 *)(param_1 + 0x6c0) = *(undefined4 *)(param_1 + 0x3d4);
      *(undefined4 *)(param_1 + 0x6c4) = *(undefined4 *)(param_1 + 0x3d8);
    }
  }
  if (*(char *)(param_1 + 0x6d0) != '\0') {
    fVar12 = *(float *)(param_1 + 0x6bc) - *pfVar10;
    fVar13 = *(float *)(param_1 + 0x6c4) - *(float *)(param_1 + 0x3d8);
    iVar1 = *(int *)(param_1 + 0x6d4);
    if ((int)ALBW_AS_U32((fVar12 * fVar12 + fVar13 * fVar13)) < DAT_00189c3c) {
      iVar1 = iVar1 + 1;
      *(int *)(param_1 + 0x6d4) = iVar1;
    }
    if (iVar1 < 7) {
      if (9 < *(int *)(param_1 + 0x6cc)) {
        *(undefined1 *)(param_1 + 0x6d0) = 0;
      }
      *(int *)(param_1 + 0x6cc) = *(int *)(param_1 + 0x6cc) + 1;
    }
    else {
      func_00659544(piVar9,7);
    }
  }
  func_00187490(param_1);
  return func_00189040(param_1,extraout_r1,iVar6,piVar7);
}

