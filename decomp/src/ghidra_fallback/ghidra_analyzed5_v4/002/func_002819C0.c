#include "ghidra_types.h"

extern int func_00100858(uint *param_1,uint *param_2,uint param_3);
extern int func_00521608(int param_1);
extern int func_005843F0(int param_1);
extern int func_00584428(int param_1);
extern int func_00584438(int param_1);
extern int func_005844C4(int param_1);
extern int func_005846E4(int param_1);
extern int *DAT_00281c68;
extern int *DAT_00281c6c;
extern int DAT_00281c70;

// USA 002819C0 <- EU 002819E8 (Ghidra, non-matching)
// GLOBAL DAT_00281c68 int *
// GLOBAL DAT_00281c6c int *
// GLOBAL DAT_00281c70 int

undefined4 func_002819C0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  
  piVar2 = DAT_00281c68;
  switch(param_4) {
  case 0:
    if (*DAT_00281c68 == 0) {
      return 0;
    }
    iVar5 = func_00584438(*DAT_00281c68);
    if (0x31 < iVar5) {
      return 1;
    }
    return 0;
  case 1:
    iVar3 = *DAT_00281c68;
    iVar5 = 0;
    if (iVar3 != 0) {
      iVar5 = *(int *)(iVar3 + 0x584);
    }
    if ((iVar3 != 0 && iVar5 != 0) && -1 < iVar5) {
      return 1;
    }
    break;
  case 2:
    iVar5 = *DAT_00281c6c;
    if (*(char *)(DAT_00281c70 + iVar5) != '\0') {
      return 1;
    }
    if (*(char *)(iVar5 + 0x2f) != '\0') {
      return 2;
    }
    if (*(char *)(iVar5 + 0x2e) == '\0') {
      return 3;
    }
    break;
  case 3:
    if (*DAT_00281c68 == 0) {
      return 0;
    }
    iVar5 = func_00521608(*DAT_00281c68);
    goto joined_r0x00281bd0;
  case 4:
    if (*(char *)(param_1 + 0x998) != '\x01') {
      if (*(char *)(param_1 + 0x998) != '\x02') {
        return 0xffffffff;
      }
      if (*DAT_00281c68 == 0) {
        return 3;
      }
      iVar5 = func_00521608(*DAT_00281c68);
      iVar3 = *piVar2;
      if (iVar5 == 0) {
        if (iVar3 == 0) {
          return 3;
        }
        iVar5 = func_005844C4(iVar3);
        if (iVar5 == 0) {
          return 3;
        }
      }
      else {
        puVar4 = (uint *)func_00584428(iVar3);
        iVar5 = func_00100858((uint *)(param_1 + 0x99c),puVar4,0x3c);
        if (iVar5 == 0) {
          return 1;
        }
      }
      return 2;
    }
    break;
  case 5:
    if (*(char *)(param_1 + 0x992) == '\0') {
      return 1;
    }
    break;
  case 6:
    iVar5 = *DAT_00281c68;
    if (iVar5 != 0) {
      if (*(char *)(iVar5 + 0x5a4) != '\0') {
        if (*(char *)(iVar5 + 0x5a4) == '\x03') {
          *(undefined1 *)(iVar5 + 0x5a4) = 1;
          return 1;
        }
        return 0xffffffff;
      }
      *(undefined1 *)(iVar5 + 0x5a4) = 1;
    }
    break;
  case 7:
    if (*(char *)(param_1 + 0x994) == '\0') {
      return 1;
    }
    *(undefined1 *)(param_1 + 0x994) = 0;
    break;
  case 8:
    if (*DAT_00281c68 == 0) {
      return 0;
    }
    iVar5 = func_005846E4(*DAT_00281c68);
joined_r0x00281bd0:
    if (iVar5 != 0) {
      return 1;
    }
    break;
  case 9:
    if (*DAT_00281c68 == 0) {
      return 0;
    }
    iVar5 = func_005843F0(*DAT_00281c68);
    goto joined_r0x00281c5c;
  case 10:
    iVar5 = *DAT_00281c68;
    if (iVar5 != 0) {
      cVar1 = *(char *)(iVar5 + 0x5ac);
      if (cVar1 == '\x03') {
        *(undefined1 *)(iVar5 + 0x5ac) = 0;
        return 1;
      }
      *(undefined1 *)(iVar5 + 0x5ac) = 0;
      if (cVar1 == '\x04') {
        return 2;
      }
    }
    break;
  case 0xb:
    if (*DAT_00281c68 == 0) {
      return 0;
    }
    iVar5 = func_00521608(*DAT_00281c68);
joined_r0x00281c5c:
    if (iVar5 != 0) {
      return 1;
    }
    return 0;
  }
  return 0;
}

