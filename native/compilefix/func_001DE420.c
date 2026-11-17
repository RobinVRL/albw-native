/* compilefix: func_001DE420, the converted stage-2 text (build/decomp/ghidra_fallback/ghidra_analyzed5_v4/001/func_001DE420.c) with inlined two-sided approaches
 * restored (tools/approach_fix.py, BOOT_LOG 150). */
#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001DC9C8(int param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_001DCE44(int param_1,int param_2,int param_3);
extern int func_001DCF58(int param_1);
extern int func_001DD1D8(int param_1);
extern int func_002904F8(int param_1);
extern int func_002927A0(int param_1,int param_2,float *param_3);
extern int func_002D12F8(int param_1);
extern int func_002D3CD4(int param_1,int param_2,int param_3,int param_4);
extern int func_002D4460(int *param_1);
extern int func_0031E324(int param_1,int param_2);
extern int func_003426E4(int param_1);
extern int func_00342C24(int param_1,uint param_2,float fparam_0,float fparam_1);
extern int func_00361C34(int param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_0053F4BC(int param_1);
extern int func_0053F910(int param_1);
extern int func_0053F998(int param_1);
extern int func_00540048(int param_1);
extern int func_00584B94(int param_1,int param_2);
extern int func_00587B50(int param_1,int *param_2,int param_3);
extern int *DAT_001de81c;
extern uint *DAT_001de820;
extern undefined4 *DAT_001de824;
extern undefined4 DAT_001de828;
extern float DAT_001de82c;
extern int *DAT_001de830;
extern float DAT_001de834;
extern undefined4 DAT_001de838;
extern uint DAT_001de850;
extern int *DAT_001de854;
extern int *DAT_001de954;
extern char s_SE_S_HART_WARNING_001de83c[];

// USA 001DE420 <- EU 001DE420 (Ghidra, non-matching)
// GLOBAL DAT_001de81c int *
// GLOBAL DAT_001de820 uint *
// GLOBAL DAT_001de824 undefined4 *
// GLOBAL DAT_001de828 undefined4
// GLOBAL DAT_001de82c float
// GLOBAL DAT_001de830 int *
// GLOBAL DAT_001de834 float
// GLOBAL DAT_001de838 undefined4
// GLOBAL DAT_001de850 uint
// GLOBAL DAT_001de854 int *
// GLOBAL DAT_001de954 int *
// GLOBAL s_SE_S_HART_WARNING_001de83c string

/* WARNING: Removing unreachable block (ram,0x001de584) */
/* WARNING: Removing unreachable block (ram,0x001de588) */
/* WARNING: Removing unreachable block (ram,0x001de598) */

#ifndef ALBW_APPROACH_DEFINED
#define ALBW_APPROACH_DEFINED
/* inlined two-sided approach (tools/approach_fix.py, BOOT_LOG 150): v -> t by s, no overshoot */
static float albw_approach(float v, float t, float s) {
    float n;
    if (v < t) { n = v + s; return (t <= n || v > n) ? t : n; }
    if (v > t) { n = v - s; if (n <= t) return t; return n <= v ? n : t; }
    return v;
}
#endif
undefined4 func_001DE420(int param_1)

{
  byte bVar1;
  short sVar2;
  int *piVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  undefined4 *puVar7;
  int iVar8;
  float *pfVar9;
  int iVar10;
  int iVar11;
  undefined4 extraout_r1;
  uint uVar12;
  int *piVar13;
  int *piVar14;
  bool bVar15;
  float fVar16;
  float fparam_1;
  undefined4 uVar17;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(uint *)(albw_frame + 0x0))
  #define local_2c (*(char * *)(albw_frame + 0x4))
  piVar14 = (int *)(param_1 + 0x614);
  if (*(char *)(param_1 + 0x6bb) != '\0') {
    return func_002927A0(*(int *)(param_1 + 0x614),*(int *)(param_1 + 0x608),(float *)0x1);
  }
  *(undefined4 *)(param_1 + 0x71c) = *(undefined4 *)(param_1 + 1000);
  if (*(uint *)(param_1 + 0x620) != 0) {
    puVar7 = (undefined4 *)func_0052FBA0(*DAT_001de81c + 0x3dbbc,*(uint *)(param_1 + 0x620));
    if (((*DAT_001de820 & 1) == 0) && (iVar8 = func_00100174((int *)DAT_001de820), iVar8 != 0)) {
      *DAT_001de824 = DAT_001de828;
    }
    if ((puVar7 == (undefined4 *)0x0) ||
       (iVar8 = (**(code **)*puVar7)(puVar7,DAT_001de824), iVar8 == 0)) {
      puVar7 = (undefined4 *)0x0;
    }
    if ((puVar7 == (undefined4 *)0x0) || (*(char *)((int)puVar7 + 0x4f1) == '\0')) {
      *(undefined4 *)(param_1 + 0x620) = 0;
    }
  }
  iVar8 = func_00540048(*(int *)(param_1 + 0x614));
  if (iVar8 != 0) {
    iVar8 = 0;
    do {
      func_002D4460((int *)(param_1 + 0x694 + iVar8 * 0xc));
      iVar8 = iVar8 + 1;
    } while (iVar8 < 3);
  }
  pfVar9 = (float *)(param_1 + 0x5b0);
  fparam_1 = *(float *)(param_1 + 0x5a8);
  *pfVar9 = albw_approach(*pfVar9, fparam_1, DAT_001de82c);   /* two-sided approach restored (approach_fix) */
  iVar8 = func_0053F4BC(*(int *)(param_1 + 0x614));
  bVar4 = func_0053F998(*piVar14);
  local_30 = (uint)(*(int *)(param_1 + 0x4cc) != 0);
  cVar5 = func_002D3CD4(*(int *)(param_1 + 0x5f8),param_1 + 0x5ac,(uint)bVar4,iVar8);
  if (cVar5 != '\0') {
    func_001DCE44(param_1,1,0);
  }
  piVar3 = DAT_001de830;
  iVar8 = *(int *)(*DAT_001de830 + 0x44);
  func_0031E324(*(int *)(param_1 + 0x5fc),param_1 + 0x5ac);
  func_003426E4(*(int *)(param_1 + 0x604));
  uVar17 = DAT_001de838;
  fVar16 = DAT_001de834;
  *(float *)(*(int *)(param_1 + 0x604) + 0x15c) = DAT_001de834;
  *(undefined4 *)(param_1 + 0x59c) = uVar17;
  *(undefined4 *)(param_1 + 0x5a0) = uVar17;
  *(undefined4 *)(param_1 + 0x5a4) = uVar17;
  func_001DD1D8(param_1);
  func_002927A0(*(int *)(param_1 + 0x614),*(int *)(param_1 + 0x608),(float *)(uint)(iVar8 != 0));
  bVar4 = func_0053F910(*piVar14);
  piVar13 = *(int **)(param_1 + 0x604);
  uVar12 = (uint)(*(char *)(*piVar14 + 0x20) == '\b');
  func_00342C24((int)piVar13,(uint)bVar4,fVar16,fparam_1);
  func_00361C34(*(int *)(param_1 + 0x608));
  func_001DC9C8(param_1,extraout_r1,uVar12,piVar13);
  func_002D12F8(*(int *)(param_1 + 0x618));
  bVar1 = *(byte *)(param_1 + 0x599);
  bVar6 = 0xc;
  if (bVar1 != 0x18) {
    if (bVar1 < 0x19) {
      if (bVar1 == 0xc) {
        bVar6 = 4;
      }
      else if (bVar1 == 0x10 || bVar1 == 0x14) {
        bVar6 = 6;
      }
      goto LAB_001de728;
    }
    if (bVar1 != 0x1c) {
      if (bVar1 == 0x20 || bVar1 == 0x24) {
        bVar6 = 10;
      }
      goto LAB_001de728;
    }
  }
  bVar6 = 8;
LAB_001de728:
  if ((*(byte *)(param_1 + 0x598) <= bVar6) && (*(byte *)(param_1 + 0x598) != 0)) {
    iVar10 = *piVar3;
    bVar4 = iVar10 == 0;
    iVar8 = 0;
    if (!bVar4) {
      iVar8 = *(int *)(iVar10 + 0x44);
    }
    bVar15 = bVar4 || iVar8 == 0;
    if (bVar4 || iVar8 == 0) {
      bVar15 = *(char *)(param_1 + 0x6c3) == '\0';
    }
    if (bVar15) {
      local_2c = s_SE_S_HART_WARNING_001de83c;
      local_30 = DAT_001de850;
      func_00587B50(*DAT_001de854,(int *)&local_30,0);
    }
  }
  func_001DCF58(param_1);
  *(undefined1 *)(*(int *)(param_1 + 0x614) + 0xcd) = 1;
  func_002904F8(*piVar14);
  iVar8 = *piVar3;
  cVar5 = *(char *)(param_1 + 0x6c2);
  if ((*(int *)(iVar8 + 0x44) == 0) ||
     (*(int *)(iVar8 + 0x44) == *(int *)(*(int *)(param_1 + 0x614) + 0x70))) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  *(bool *)(param_1 + 0x6c2) = bVar4;
  iVar10 = *(int *)(param_1 + 0x614);
  if (((*(int *)(iVar8 + 0x44) == 0) || (*(int *)(iVar8 + 0x44) != *(int *)(iVar10 + 0x68))) ||
     ((sVar2 = *(short *)(iVar10 + 0x42), sVar2 != 0x24 && sVar2 != 0x1a &&
      ((sVar2 != 0x11 && sVar2 != 0x12 && ((sVar2 != 0x13 && sVar2 != 0x14) && sVar2 != 0x18)))))) {
    bVar15 = false;
  }
  else {
    bVar15 = true;
  }
  if (((cVar5 == '\0') && (bVar4)) && (!bVar15)) {
    *(undefined4 *)(param_1 + 0x3dc) = uVar17;
    *(undefined4 *)(param_1 + 0x3e0) = uVar17;
    *(undefined4 *)(param_1 + 0x3e4) = uVar17;
  }
  piVar14 = DAT_001de954;
  *(undefined1 *)(param_1 + 0x6bf) = 0;
  *(undefined1 *)(param_1 + 0x6c7) = 0;
  iVar11 = *piVar14;
  if (*(char *)(iVar11 + 0x18) == '\0') {
    if (*(int *)(iVar11 + 0x1c) != 0x2a) {
      return 0;
    }
    *(undefined1 *)(iVar10 + 0x7c) = 1;
  }
  if (*(char *)(iVar11 + 0x18) == '\x05') {
    if (*(int *)(iVar11 + 0x1c) != 9) {
      return 0;
    }
    *(undefined1 *)(*(int *)(param_1 + 0x614) + 0x7c) = 1;
  }
  if (*(char *)(iVar11 + 0x18) == '\x16') {
    if (*(int *)(iVar11 + 0x1c) != 2) {
      return 0;
    }
    *(undefined1 *)(*(int *)(param_1 + 0x614) + 0xcd) = 0;
  }
  if (*(char *)(iVar11 + 0x18) == '\x04') {
    if (*(int *)(iVar11 + 0x1c) != 0xe) {
      return 0;
    }
    *(undefined1 *)(*(int *)(param_1 + 0x614) + 0x7c) = 1;
  }
  bVar4 = *(char *)(iVar11 + 0x18) == '\x02';
  if (bVar4) {
    iVar11 = *(int *)(iVar11 + 0x1c);
  }
  if ((bVar4 && iVar11 == 0) && (bVar4 = func_00584B94(iVar8,0xf2), bVar4)) {
    *(undefined1 *)(*(int *)(param_1 + 0x614) + 0x7c) = 1;
  }
  return 0;
}

