#include "ghidra_types.h"

extern int func_001006E0(int param_1);
extern ulonglong func_00110710(uint param_1,uint param_2);
extern int func_0048A4E4(undefined4 *param_1,int param_2);
extern int func_0048A584(undefined4 *param_1,int param_2,int *param_3);
extern undefined4 DAT_0068781c;
extern int DAT_00687820;
extern char *DAT_00687824;

// USA 006875B0 <- EU 00687588 (Ghidra, non-matching)
// GLOBAL DAT_0068781c undefined4
// GLOBAL DAT_00687820 int
// GLOBAL DAT_00687824 char *

undefined4 func_006875B0(int *param_1,int *param_2,uint param_3)

{
  _Alignas(8) unsigned char albw_frame[0xa0]; /* entry_sp - 0x60 .. entry_sp + 0x40 */
#define stack0x00000000 (*(undefined4 *)(albw_frame + 0x60))
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  bool bVar12;
  undefined8 uVar13;
  #define local_58 (*(int *)(albw_frame + 0x8))
  #define local_54 (*(uint *)(albw_frame + 0xc))
  #define local_50 (*(uint *)(albw_frame + 0x10))
  #define uStack_48 (*(undefined4 *)(albw_frame + 0x18))
  #define local_44 (*(int * *)(albw_frame + 0x1c))
  #define local_40 (*(int *)(albw_frame + 0x20))
  #define local_3c (*(int *)(albw_frame + 0x24))
  #define local_38 (*(int *)(albw_frame + 0x28))
  #define piStack_30 (*(int * *)(albw_frame + 0x30))
  #define piStack_2c (*(int * *)(albw_frame + 0x34))
  #define local_28 (*(uint *)(albw_frame + 0x38))
  local_40 = 0;
  uStack_48 = DAT_0068781c;
  local_44 = param_2;
  piStack_30 = param_1;
  piStack_2c = param_2;
  local_28 = param_3;
  func_0048A4E4(&local_58,(int)&uStack_48);
  if (((int)local_28 < 1) && (iVar4 = func_0048A584(&local_28,(int)&uStack_48,param_2), iVar4 == 0))
  {
    return 0;
  }
  uVar3 = local_28;
  iVar4 = DAT_00687820;
  if (local_28 == 10) {
    iVar5 = 0;
    local_3c = -0x80000000;
    bVar12 = false;
    iVar1 = -DAT_00687820;
    local_38 = 0x7fffffff;
    do {
      iVar7 = local_40;
      piVar2 = local_44;
      (**(code **)(*local_44 + 8))(local_44);
      iVar6 = 0;
      do {
        if (*(char *)(piVar2[1] + iVar6) == '\0') {
          if (iVar6 < 0x40001) goto LAB_006876b0;
          break;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < 0x40001);
      iVar6 = 0;
LAB_006876b0:
      pcVar8 = DAT_00687824;
      if (-1 < iVar7 && iVar7 <= iVar6) {
        pcVar8 = (char *)(piVar2[1] + iVar7);
      }
      if ((0x39 < *pcVar8) || (iVar7 = *pcVar8 + -0x30, iVar7 < 0)) {
        if (!bVar12) {
          return 0;
        }
        if (param_1 == (int *)0x0) {
          return 1;
        }
        *param_1 = iVar5;
        return 1;
      }
      bVar12 = SBORROW4(iVar5,iVar1);
      iVar6 = iVar5;
      if (iVar1 <= iVar5) {
        bVar12 = SBORROW4(iVar4,iVar5);
        iVar6 = -iVar5;
      }
      if (iVar6 + iVar4 < 0 != bVar12) {
        return 0;
      }
      iVar5 = iVar5 * 10;
      if (local_58 < 0) {
        if (iVar5 < local_3c + iVar7) {
          return 0;
        }
      }
      else if (local_38 - iVar7 < iVar5) {
        return 0;
      }
      bVar12 = true;
      iVar5 = local_58 * iVar7 + iVar5;
      local_40 = local_40 + 1;
    } while( true );
  }
  uVar10 = 0;
  bVar12 = false;
  uVar13 = func_00110710(0xffffffff,local_28);
  local_50 = (uint)uVar13;
  do {
    iVar4 = local_40;
    piVar2 = local_44;
    (**(code **)(*local_44 + 8))(local_44);
    iVar5 = 0;
    do {
      if (*(char *)(piVar2[1] + iVar5) == '\0') {
        if (iVar5 < 0x40001) goto LAB_00687764;
        break;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0x40001);
    iVar5 = 0;
LAB_00687764:
    pcVar8 = DAT_00687824;
    if (-1 < iVar4 && iVar4 <= iVar5) {
      pcVar8 = (char *)(piVar2[1] + iVar4);
    }
    iVar4 = func_001006E0((int)*pcVar8);
    iVar4 = (int)(char)iVar4;
    if (iVar4 < 0x3a) {
      uVar9 = iVar4 - 0x30;
    }
    else {
      if (5 < iVar4 - 0x61U) goto LAB_006877e4;
      uVar9 = iVar4 - 0x57;
    }
    bVar11 = uVar9 == 0;
    if ((int)uVar9 >= 0) {
      bVar11 = uVar3 == uVar9;
    }
    if (bVar11 || ((int)uVar9 < 0 || (int)uVar3 < (int)uVar9)) {
LAB_006877e4:
      if (!bVar12) {
        return 0;
      }
      if (&stack0x00000000 != (undefined1 *)0x54) {
        local_54 = uVar10;
      }
      *param_1 = local_54 * local_58;
      return 1;
    }
    if (local_50 < uVar10) {
      return 0;
    }
    uVar10 = uVar10 * uVar3;
    if (-uVar9 - 1 <= uVar10 && uVar10 - (-uVar9 - 1) != 0) {
      return 0;
    }
    uVar10 = uVar10 + uVar9;
    bVar12 = true;
    local_40 = local_40 + 1;
  } while( true );
}

