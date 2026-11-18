#include "ghidra_types.h"

extern int func_0027033C(uint param_1,int *param_2,undefined4 *param_3,int param_4);
extern int func_00270784(int param_1,int param_2);
extern int func_00689578(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4,...);
extern int *DAT_00272120;
extern int DAT_00272124;
extern int DAT_00272128;
extern uint *DAT_0027212c;
extern undefined1 DAT_00272130;
extern int DAT_00272134;
extern float DAT_00272138;
extern float DAT_0027213c;
extern char s_Environment__s_00272140[];
extern char s_cf_00272140[];

// USA 00271D94 <- EU 00271DBC (Ghidra, non-matching)
// GLOBAL DAT_00272120 int *
// GLOBAL DAT_00272124 int
// GLOBAL DAT_00272128 int
// GLOBAL DAT_0027212c uint *
// GLOBAL DAT_00272130 undefined1
// GLOBAL DAT_00272134 int
// GLOBAL DAT_00272138 float
// GLOBAL DAT_0027213c float
// GLOBAL s_cf_00272140 string

undefined4 func_00271D94(int param_1)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  float *pfVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  bool bVar12;
  uint in_fpscr;
  float fVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  int iVar17;
  _Alignas(8) unsigned char albw_frame[0xd0];
  #define auStack_c8 ((undefined4 *)(albw_frame + 0x8))
  #define local_38 (*(int *)(albw_frame + 0x98))
  #define local_34 (*(char * *)(albw_frame + 0x9c))
  #define local_28 (*(undefined4 *)(albw_frame + 0xa8))
  if (*(char *)(*DAT_00272120 + 0x25) == '\0') {
    uVar7 = *(uint *)(param_1 + 0x7cac);
    piVar6 = (int *)(param_1 + 0x3d68);
    if ((int)uVar7 < 0) {
      iVar4 = 0;
      iVar10 = iVar4;
    }
    else {
      if (uVar7 < *(uint *)(param_1 + 0x1c)) {
        iVar4 = *(int *)(param_1 + 0x24) + uVar7 * 0x620;
      }
      else {
        iVar4 = *(int *)(param_1 + 0x24);
      }
      iVar10 = 0;
      if ((iVar4 != 0) && (uVar11 = (uint)*(char *)(DAT_00272124 + iVar4), (int)uVar11 < 3)) {
        if (uVar7 < *(uint *)(param_1 + 0x1c)) {
          iVar4 = *(int *)(param_1 + 0x24) + uVar7 * 0x620;
        }
        else {
          iVar4 = *(int *)(param_1 + 0x24);
        }
        piVar5 = piVar6;
        if (uVar11 < 3) {
          piVar5 = piVar6 + uVar11;
        }
        iVar10 = 1;
        *piVar5 = iVar4;
        iVar4 = 0;
      }
    }
    iVar3 = DAT_00272134;
    iVar9 = *(int *)(DAT_00272128 + param_1);
    uVar7 = *DAT_0027212c;
    local_34 = &DAT_00272130;
    pfVar8 = (float *)0x0;
    bVar12 = false;
    local_38 = DAT_00272134;
    if (iVar4 != 0) {
      bVar12 = (*(byte *)(iVar4 + 0x57a) & 1) != 0;
      if (!bVar12) {
        if (**(char **)(iVar4 + 0x300) != '\0') {
          local_34 = *(char **)(iVar4 + 0x300);
        }
        if ((*(byte *)(iVar4 + 0x57a) & 2) != 0) {
          pfVar8 = (float *)(iVar4 + 0x348);
        }
      }
    }
    uVar11 = 2;
    do {
      piVar5 = piVar6;
      if (uVar11 < 3) {
        piVar5 = piVar6 + uVar11;
      }
      iVar4 = *piVar5;
      if ((*(byte *)(iVar4 + 0x57a) & 1) == 0) {
        if ((**(char **)(iVar4 + 0x300) != '\0') && (*local_34 == '\0' && !bVar12)) {
          local_34 = *(char **)(iVar4 + 0x300);
        }
        if ((((*(byte *)(iVar4 + 0x57a) & 2) != 0) && (pfVar8 == (float *)0x0)) && (!bVar12)) {
          pfVar8 = (float *)(iVar4 + 0x348);
        }
      }
      else if (*local_34 == '\0') {
        bVar12 = true;
      }
      uVar11 = uVar11 - 1;
    } while (-1 < (int)uVar11);
    if (iVar10 != 0) {
      uVar11 = *(uint *)(param_1 + 0x7cac);
      if (uVar11 < *(uint *)(param_1 + 0x1c)) {
        iVar10 = *(int *)(param_1 + 0x24) + uVar11 * 0x620;
      }
      else {
        iVar10 = *(int *)(param_1 + 0x24);
      }
      piVar5 = (int *)(param_1 + 0x10);
      uVar11 = (uint)*(char *)(iVar10 + 0x581);
      if (uVar11 < 3) {
        piVar5 = piVar5 + uVar11;
        piVar6 = piVar6 + uVar11;
      }
      *piVar6 = *piVar5;
    }
    if ((bVar12) || (*local_34 == '\0')) {
      return func_00270784(uVar7,iVar9);
    }
    if (pfVar8 == (float *)0x0) {
      (**(code **)(iVar3 + 8))(&local_38);
      piVar6 = func_00689578(auStack_c8,s_Environment__s_00272140,(uint)local_34,pfVar8);
      return func_0027033C(uVar7,piVar6,(undefined4 *)0x0,iVar9);
    }
    fVar16 = *pfVar8 * DAT_00272138;
    iVar10 = (int)fVar16;
    fVar13 = (float)VectorSignedToFloat(iVar10,(byte)(in_fpscr >> 0x15) & 3);
    uVar11 = in_fpscr & 0xfffffff | (uint)(fVar13 == fVar16) << 0x1e |
             (uint)(fVar16 <= fVar13) << 0x1d;
    bVar2 = (byte)(uVar11 >> 0x18);
    bVar12 = (bool)(bVar2 >> 6);
    if (!bVar12) {
      uVar11 = in_fpscr & 0xfffffff | (uint)(DAT_0027213c == fVar16) << 0x1e |
               (uint)(fVar16 <= DAT_0027213c) << 0x1d;
      bVar2 = (byte)(uVar11 >> 0x18);
      bVar12 = (bool)(bVar2 >> 6);
    }
    if ((bool)(bVar2 >> 5 & 1) && !bVar12) {
      iVar10 = iVar10 + -1;
    }
    fVar13 = pfVar8[1] * DAT_00272138;
    iVar4 = (int)fVar13;
    fVar16 = (float)VectorSignedToFloat(iVar4,(byte)(uVar11 >> 0x15) & 3);
    uVar1 = uVar11 & 0xfffffff | (uint)(fVar16 == fVar13) << 0x1e | (uint)(fVar13 <= fVar16) << 0x1d
    ;
    bVar2 = (byte)(uVar1 >> 0x18);
    bVar12 = (bool)(bVar2 >> 6);
    if (!bVar12) {
      uVar1 = uVar11 & 0xfffffff | (uint)(DAT_0027213c == fVar13) << 0x1e |
              (uint)(fVar13 <= DAT_0027213c) << 0x1d;
      bVar2 = (byte)(uVar1 >> 0x18);
      bVar12 = (bool)(bVar2 >> 6);
    }
    if ((bool)(bVar2 >> 5 & 1) && !bVar12) {
      iVar4 = iVar4 + -1;
    }
    fVar13 = pfVar8[2] * DAT_00272138;
    iVar17 = (int)fVar13;
    fVar16 = (float)VectorSignedToFloat(iVar17,(byte)(uVar1 >> 0x15) & 3);
    uVar11 = uVar1 & 0xfffffff | (uint)(fVar16 == fVar13) << 0x1e | (uint)(fVar13 <= fVar16) << 0x1d
    ;
    bVar2 = (byte)(uVar11 >> 0x18);
    bVar12 = (bool)(bVar2 >> 6);
    if (!bVar12) {
      uVar11 = uVar1 & 0xfffffff | (uint)(DAT_0027213c == fVar13) << 0x1e |
               (uint)(fVar13 <= DAT_0027213c) << 0x1d;
      bVar2 = (byte)(uVar11 >> 0x18);
      bVar12 = (bool)(bVar2 >> 6);
    }
    if ((bool)(bVar2 >> 5 & 1) && !bVar12) {
      iVar17 = iVar17 + -1;
    }
    fVar16 = pfVar8[3] * DAT_00272138;
    iVar14 = (int)fVar16;
    fVar15 = (float)VectorSignedToFloat(iVar14,(byte)(uVar11 >> 0x15) & 3);
    fVar13 = fVar15;
    if (fVar15 != fVar16) {
      fVar13 = DAT_0027213c;
    }
    if (fVar16 <= fVar13 && (fVar15 != fVar16 && DAT_0027213c != fVar16)) {
      iVar14 = iVar14 + -1;
    }
    local_28 = CONCAT13((char)iVar14,CONCAT12((char)iVar17,CONCAT11((char)iVar4,(char)iVar10)));
    (**(code **)(iVar3 + 8))(&local_38);
    piVar6 = func_00689578(auStack_c8,s_Environment__s_00272140,(uint)local_34,pfVar8);
    func_0027033C(uVar7,piVar6,&local_28,iVar9);
  }
  return 0;
}

