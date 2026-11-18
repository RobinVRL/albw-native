#include "ghidra_types.h"

extern int func_001006E0(int param_1);
extern ulonglong func_00110710(uint param_1,uint param_2);
extern int func_0048A4E4(undefined4 *param_1,int param_2);
extern int func_0048A584(undefined4 *param_1,int param_2,int *param_3);
extern undefined4 DAT_00687abc;
extern uint DAT_00687ac0;
extern char *DAT_00687ac4;

// USA 00687854 <- EU 0068782C (Ghidra, non-matching)
// GLOBAL DAT_00687abc undefined4
// GLOBAL DAT_00687ac0 uint
// GLOBAL DAT_00687ac4 char *

undefined4 func_00687854(uint *param_1,int *param_2,uint param_3)

{
  _Alignas(8) unsigned char albw_frame[0xa0]; /* entry_sp - 0x60 .. entry_sp + 0x40 */
#define stack0x00000000 (*(undefined4 *)(albw_frame + 0x60))
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  undefined8 uVar10;
  #define local_58 (*(int *)(albw_frame + 0x8))
  #define local_54 (*(uint *)(albw_frame + 0xc))
  #define local_50 (*(uint *)(albw_frame + 0x10))
  #define uStack_48 (*(undefined4 *)(albw_frame + 0x18))
  #define local_44 (*(int * *)(albw_frame + 0x1c))
  #define local_40 (*(int *)(albw_frame + 0x20))
  #define local_3c (*(int *)(albw_frame + 0x24))
  #define local_38 (*(int *)(albw_frame + 0x28))
  #define puStack_30 (*(uint * *)(albw_frame + 0x30))
  #define piStack_2c (*(int * *)(albw_frame + 0x34))
  #define local_28 (*(uint *)(albw_frame + 0x38))
  local_40 = 0;
  uStack_48 = DAT_00687abc;
  local_44 = param_2;
  puStack_30 = param_1;
  piStack_2c = param_2;
  local_28 = param_3;
  func_0048A4E4(&local_58,(int)&uStack_48);
  if (((int)local_28 < 1) && (iVar3 = func_0048A584(&local_28,(int)&uStack_48,param_2), iVar3 == 0))
  {
    return 0;
  }
  uVar7 = local_28;
  uVar8 = DAT_00687ac0;
  if (local_28 == 10) {
    uVar7 = 0;
    bVar1 = false;
    local_3c = 0;
    local_38 = -1;
    do {
      iVar3 = local_40;
      piVar2 = local_44;
      (**(code **)(*local_44 + 8))(local_44);
      iVar4 = 0;
      do {
        if (*(char *)(piVar2[1] + iVar4) == '\0') {
          if (iVar4 < 0x40001) goto LAB_00687950;
          break;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < 0x40001);
      iVar4 = 0;
LAB_00687950:
      pcVar5 = DAT_00687ac4;
      if (-1 < iVar3 && iVar3 <= iVar4) {
        pcVar5 = (char *)(piVar2[1] + iVar3);
      }
      if ((0x39 < *pcVar5) || (iVar3 = *pcVar5 + -0x30, iVar3 < 0)) {
        if (!bVar1) {
          return 0;
        }
        if (param_1 == (uint *)0x0) {
          return 1;
        }
        *param_1 = uVar7;
        return 1;
      }
      if (uVar8 < uVar7) {
        return 0;
      }
      uVar7 = uVar7 * 10;
      if (local_58 < 0) {
        if (uVar7 < (uint)(local_3c + iVar3)) {
          return 0;
        }
      }
      else if ((uint)(local_38 - iVar3) < uVar7) {
        return 0;
      }
      bVar1 = true;
      uVar7 = local_58 * iVar3 + uVar7;
      local_40 = local_40 + 1;
    } while( true );
  }
  uVar8 = 0;
  bVar1 = false;
  uVar10 = func_00110710(0xffffffff,local_28);
  local_50 = (uint)uVar10;
  do {
    iVar3 = local_40;
    piVar2 = local_44;
    (**(code **)(*local_44 + 8))(local_44);
    iVar4 = 0;
    do {
      if (*(char *)(piVar2[1] + iVar4) == '\0') {
        if (iVar4 < 0x40001) goto LAB_00687a04;
        break;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x40001);
    iVar4 = 0;
LAB_00687a04:
    pcVar5 = DAT_00687ac4;
    if (-1 < iVar3 && iVar3 <= iVar4) {
      pcVar5 = (char *)(piVar2[1] + iVar3);
    }
    iVar3 = func_001006E0((int)*pcVar5);
    iVar3 = (int)(char)iVar3;
    if (iVar3 < 0x3a) {
      uVar6 = iVar3 - 0x30;
    }
    else {
      if (5 < iVar3 - 0x61U) goto LAB_00687a84;
      uVar6 = iVar3 - 0x57;
    }
    bVar9 = uVar6 == 0;
    if ((int)uVar6 >= 0) {
      bVar9 = uVar7 == uVar6;
    }
    if (bVar9 || ((int)uVar6 < 0 || (int)uVar7 < (int)uVar6)) {
LAB_00687a84:
      if (!bVar1) {
        return 0;
      }
      if (&stack0x00000000 != (undefined1 *)0x54) {
        local_54 = uVar8;
      }
      *param_1 = local_54 * local_58;
      return 1;
    }
    if (local_50 < uVar8) {
      return 0;
    }
    uVar8 = uVar8 * uVar7;
    if (-uVar6 - 1 <= uVar8 && uVar8 - (-uVar6 - 1) != 0) {
      return 0;
    }
    uVar8 = uVar8 + uVar6;
    bVar1 = true;
    local_40 = local_40 + 1;
  } while( true );
}

