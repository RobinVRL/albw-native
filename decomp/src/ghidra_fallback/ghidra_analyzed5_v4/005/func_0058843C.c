#include "ghidra_types.h"

extern int func_00540A78(int param_1,int *param_2);
extern int func_00584B94(int param_1,int param_2);
extern int *DAT_005887c0;
extern int DAT_005887c4;
extern int DAT_005887c8;
extern int DAT_005887cc;

// USA 0058843C <- EU 00588414 (Ghidra, non-matching)
// GLOBAL DAT_005887c0 int *
// GLOBAL DAT_005887c4 int
// GLOBAL DAT_005887c8 int
// GLOBAL DAT_005887cc int

undefined4 func_0058843C(int param_1,char *param_2)

{
  short sVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(int *)(albw_frame + 0x8))
  #define local_34 (*(undefined4 *)(albw_frame + 0xc))
  #define local_30 (*(int *)(albw_frame + 0x10))
  #define local_2c (*(undefined4 *)(albw_frame + 0x14))
  #define local_28 (*(int *)(albw_frame + 0x18))
  #define local_24 (*(undefined4 *)(albw_frame + 0x1c))
  iVar2 = DAT_005887c8;
  iVar5 = DAT_005887c4;
  iVar6 = *DAT_005887c0;
  if (iVar6 == 0) {
    return 0;
  }
  local_34 = *(undefined4 *)(DAT_005887c4 + 8);
  local_38 = DAT_005887c8;
  iVar4 = func_00540A78(*(int *)(param_1 + 0x4c),&local_38);
  if (iVar4 == 0) {
    local_2c = *(undefined4 *)(iVar5 + 0xc);
    local_30 = iVar2;
    iVar4 = func_00540A78(*(int *)(param_1 + 0x4c),&local_30);
    if (iVar4 == 0) {
      local_24 = *(undefined4 *)(iVar5 + 0x10);
      local_28 = iVar2;
      iVar5 = func_00540A78(*(int *)(param_1 + 0x4c),&local_28);
      cVar3 = '\0';
      if (iVar5 == 0) goto LAB_005884a0;
    }
  }
  cVar3 = '\x01';
LAB_005884a0:
  bVar7 = cVar3 == '\0';
  if (bVar7) {
    cVar3 = *param_2;
  }
  if (bVar7 && cVar3 == '\x01') {
    iVar5 = *(int *)(param_2 + 4);
    sVar1 = *(short *)(param_2 + 8);
    if (iVar5 == 0x12) {
      bVar7 = func_00584B94(iVar6,0x20c);
      if (bVar7 || sVar1 != 2) {
        return 0;
      }
      return 1;
    }
    if (iVar5 < 0x12) {
      switch(iVar5) {
      case 0:
        bVar7 = func_00584B94(iVar6,0x230);
        if (bVar7 || sVar1 != 0x19) {
          return 0;
        }
        return 1;
      case 1:
        bVar7 = func_00584B94(iVar6,0x230);
        if (bVar7 || sVar1 != 3) {
          return 0;
        }
        return 1;
      default:
        return 0;
      case 3:
        goto switchD_005884c8_caseD_3;
      case 10:
        bVar7 = func_00584B94(iVar6,DAT_005887cc);
        if (bVar7 || sVar1 != 3) {
          return 0;
        }
        return 1;
      case 0xb:
        bVar7 = func_00584B94(iVar6,DAT_005887cc);
        if (bVar7 || sVar1 != 0x14) {
          return 0;
        }
        return 1;
      case 0xc:
        bVar7 = func_00584B94(iVar6,0x20c);
        if (bVar7) {
          return 0;
        }
        if (sVar1 != 4 && sVar1 != 2) {
          return 0;
        }
        return 1;
      case 0xe:
        bVar7 = func_00584B94(iVar6,0x20c);
        if (bVar7 || sVar1 != 0) {
          return 0;
        }
        return 1;
      case 0xf:
        bVar7 = func_00584B94(iVar6,0x230);
        if (bVar7 || sVar1 != 0xd) {
          return 0;
        }
        return 1;
      }
    }
    if (iVar5 == 0x1e) {
      bVar7 = func_00584B94(iVar6,0x26c);
      if (bVar7) {
        return 0;
      }
      if (sVar1 == 0xc) {
        return 1;
      }
      if (0xc < sVar1) {
        if (sVar1 != 0xd && sVar1 != 0xf) {
          return 0;
        }
        return 1;
      }
      if ((sVar1 != 1 && sVar1 != 10) && sVar1 != 0xb) {
        return 0;
      }
      return 1;
    }
    if (iVar5 < 0x1e) {
      if (iVar5 == 0x15) {
        bVar7 = func_00584B94(iVar6,0x20c);
        if (bVar7 || sVar1 != 4) {
          return 0;
        }
        return 1;
      }
      if (iVar5 != 0x1b) {
        if (iVar5 == 0x1c) {
          bVar7 = func_00584B94(iVar6,0x280);
          if (bVar7) {
            return 0;
          }
          if (sVar1 != 5) {
            if (sVar1 != 3) {
              return 0;
            }
            return 1;
          }
          return 1;
        }
        if (iVar5 != 0x1d) {
          return 0;
        }
        bVar7 = func_00584B94(iVar6,0x20c);
        if (bVar7 || sVar1 != 0x14) {
          return 0;
        }
        return 1;
      }
    }
    else {
      if (iVar5 == 0x22) {
        bVar7 = func_00584B94(iVar6,0x280);
        if (bVar7) {
          return 0;
        }
        if (sVar1 == 0x14) {
          return 1;
        }
        if (sVar1 == 1 || sVar1 == 2) {
          return 1;
        }
        return 0;
      }
      if (iVar5 != 0x23) {
        if (iVar5 != 0x24) {
          return 0;
        }
        bVar7 = func_00584B94(iVar6,0x26c);
        if (bVar7) {
          return 0;
        }
        if (sVar1 == 3) {
          return 1;
        }
        if (sVar1 == 1) {
          return 1;
        }
        return 0;
      }
      bVar7 = func_00584B94(iVar6,0x280);
      if (!bVar7 && sVar1 == 2) {
        return 1;
      }
    }
    bVar7 = func_00584B94(iVar6,0x280);
    if (!bVar7 && sVar1 == 4) {
      return 1;
    }
  }
  return 0;
switchD_005884c8_caseD_3:
  bVar7 = func_00584B94(iVar6,600);
  if (bVar7) {
    return 0;
  }
  if (sVar1 != 3 && sVar1 != 7) {
    return 0;
  }
  return 1;
}

