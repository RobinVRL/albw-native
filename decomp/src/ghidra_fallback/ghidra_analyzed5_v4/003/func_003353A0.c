#include "ghidra_types.h"

extern int func_001507A8(int param_1,int param_2);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_0054E044(int param_1);
extern int func_00588BE4(int param_1);
extern int func_006658F8(undefined4 *param_1,undefined1 param_2);
extern int *DAT_0033568c;
extern int *DAT_00335690;
extern float DAT_00335694;
extern int *DAT_00335698;
extern int *DAT_0033569c;
extern int *DAT_003356a0;
extern int DAT_003356a4;
extern int *DAT_003356a8;
extern int DAT_003356ac;
extern float DAT_003356b0;
extern float DAT_003356b4;

// USA 003353A0 <- EU 0033537C (Ghidra, non-matching)
// GLOBAL DAT_0033568c int *
// GLOBAL DAT_00335690 int *
// GLOBAL DAT_00335694 float
// GLOBAL DAT_00335698 int *
// GLOBAL DAT_0033569c int *
// GLOBAL DAT_003356a0 int *
// GLOBAL DAT_003356a4 int
// GLOBAL DAT_003356a8 int *
// GLOBAL DAT_003356ac int
// GLOBAL DAT_003356b0 float
// GLOBAL DAT_003356b4 float

bool func_003353A0(int param_1,int param_2,float fparam_0,float fparam_1,float fparam_2)

{
  int *piVar1;
  int *piVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  piVar2 = DAT_00335690;
  piVar1 = DAT_0033568c;
  if (*(char *)(param_1 + 0x508) != '\0') goto LAB_003356c0;
  if (((1 << (*(ushort *)(param_2 + 0x20) & 0x1f) & 7U) == 0) ||
     (*(float *)(param_1 + 0x36c) <= *(float *)(param_1 + 0x3d4))) {
LAB_003354bc:
    fVar9 = DAT_00335694;
    iVar6 = func_0052FBA0(*DAT_0033569c + 0x3dbbc,*(uint *)(param_2 + 0x28));
    if (iVar6 == 0) goto LAB_003356c0;
    iVar5 = func_00588BE4(iVar6);
    iVar7 = *DAT_003356a0;
    bVar3 = iVar5 != iVar7;
    if (bVar3) {
      iVar7 = *piVar1;
    }
    if (bVar3 && iVar5 != iVar7) {
      if (iVar5 != *DAT_003356a8) goto LAB_003356c0;
      cVar4 = *(char *)(*piVar2 + 0x18);
      if (cVar4 != '\x10') goto joined_r0x003355dc;
      if (((*(float *)(iVar6 + 0x3d0) == *(float *)(iVar6 + 0x368)) &&
          (*(float *)(iVar6 + 0x3d4) == *(float *)(iVar6 + 0x36c))) &&
         (*(float *)(iVar6 + 0x3d8) == *(float *)(iVar6 + 0x370))) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      if (bVar3) goto LAB_003356c0;
      fVar10 = *(float *)(iVar6 + 0x3d4) - *(float *)(param_1 + 0xc);
      if (fVar10 <= fVar9) {
        fVar10 = -fVar10;
      }
      if (DAT_003356ac <= (int)ALBW_AS_U32(fVar10)) goto LAB_003356c0;
      fVar9 = DAT_003356b0;
      if (*(int *)(iVar6 + 1000) != 0x40000000) {
        fVar9 = DAT_003356b4;
      }
      if (*(float *)(param_1 + 0x3d0) < *(float *)(iVar6 + 0x3d0) + fVar9) {
        cVar4 = '\x03';
      }
      else {
        cVar4 = '\x01';
      }
    }
    else {
      if (*(int *)(param_2 + 8) == 0x3f800000) {
        if (*(char *)(DAT_003356a4 + iVar6) == '\x01' || *(char *)(DAT_003356a4 + iVar6) == '\x05')
        {
          *(undefined1 *)(param_1 + 0x490) = *(undefined1 *)(iVar6 + 0x490);
        }
        goto LAB_0033547c;
      }
      fVar12 = *(float *)(param_2 + 4);
      fVar10 = fVar12;
      if (fVar12 <= fVar9) {
        fVar10 = -fVar12;
      }
      if (fVar10 == 1.0) {
        if (fVar9 < fVar12) {
          cVar4 = '\x01';
        }
        else {
          cVar4 = '\x03';
        }
      }
      else {
        fVar12 = *(float *)(param_2 + 0xc);
        fVar10 = fVar12;
        if (fVar12 <= fVar9) {
          fVar10 = -fVar12;
        }
        if (fVar10 != 1.0) goto LAB_003356c0;
        if (fVar9 < fVar12) {
          cVar4 = '\0';
        }
        else {
          cVar4 = '\x02';
        }
      }
      if ((*(char *)(iVar6 + 0x490) != cVar4) ||
         (*(char *)(DAT_003356a4 + iVar6) != '\x01' && *(char *)(DAT_003356a4 + iVar6) != '\x05'))
      goto LAB_003356c0;
    }
    *(char *)(param_1 + 0x490) = cVar4;
  }
  else {
    fVar9 = *(float *)(param_2 + 4);
    bVar3 = false;
    if (fVar9 == DAT_00335694) {
      bVar3 = *(float *)(param_2 + 0xc) == DAT_00335694;
    }
    if (bVar3) goto LAB_003354bc;
    fVar10 = fVar9;
    if (fVar9 <= DAT_00335694) {
      fVar10 = -fVar9;
    }
    fVar11 = *(float *)(param_2 + 0xc);
    fVar12 = fVar11;
    if (fVar11 <= DAT_00335694) {
      fVar12 = -fVar11;
    }
    if (fVar10 <= fVar12) {
      if (DAT_00335694 < fVar11) {
        uVar8 = 0;
      }
      else {
        uVar8 = 2;
      }
    }
    else if (DAT_00335694 < fVar9) {
      uVar8 = 1;
    }
    else {
      uVar8 = 3;
    }
    if ((int)*(char *)(param_1 + 0x490) == uVar8) {
      bVar3 = func_0054E044(param_1);
      if ((bVar3) && (uVar8 != **(int **)(*DAT_00335698 + 0x24) + 0x20000000U >> 0x1e))
      goto LAB_003356c0;
    }
    else {
      cVar4 = *(char *)(*DAT_00335690 + 0x18);
joined_r0x003355dc:
      if (cVar4 != '\x0f') goto LAB_003356c0;
      *(undefined1 *)(param_1 + 0x490) = 2;
    }
  }
LAB_0033547c:
  func_006658F8((undefined4 *)(param_1 + 0x504),5);
LAB_003356c0:
  iVar6 = func_00588BE4(param_1);
  if ((iVar6 == *piVar1) &&
     ((((1 << (*(ushort *)(param_2 + 0x20) & 0x1f) & 0xc00U) != 0 ||
       ((*(ushort *)(param_2 + 0x20) & 0x7e0) == 0x200)) && (*(int *)(param_1 + 0x528) != 0)))) {
    return false;
  }
  bVar3 = func_001507A8(param_1,param_2);
  return bVar3;
}

