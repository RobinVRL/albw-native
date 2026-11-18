#include "ghidra_types.h"

extern int func_004653D0(int param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4);
extern int func_00466B38(int param_1);
extern int func_004671E4(int param_1,undefined4 param_2,undefined4 param_3,int param_4);
extern int func_00467DC4(int param_1);
extern int func_00467F44(int param_1);
extern int func_004683CC(int param_1);
extern int func_00581C5C(int param_1);
extern int func_0066DCB0(undefined4 *param_1,undefined1 param_2);
extern int *DAT_0046591c;
extern int *DAT_00465920;

// USA 004655F0 <- EU 004655C8 (Ghidra, non-matching)
// GLOBAL DAT_0046591c int *
// GLOBAL DAT_00465920 int *

undefined4 func_004655F0(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  int *piVar4;
  ushort *puVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  
  uVar7 = 0;
  uVar3 = 0;
  do {
    piVar4 = (int *)(param_1 + 0x108);
    if (uVar3 < 4) {
      piVar4 = piVar4 + uVar3;
    }
    if (*piVar4 != 0) {
      piVar4 = (int *)(param_1 + 0x108);
      if (uVar3 < 4) {
        piVar4 = piVar4 + uVar3;
      }
      if (*(int *)(*piVar4 + 0x1c) != 0) {
        piVar4 = (int *)(param_1 + 0x108);
        if (uVar3 < 4) {
          piVar4 = piVar4 + uVar3;
        }
        if (*(char *)(*piVar4 + 0x84) == '\x01' || *(char *)(*piVar4 + 0x84) == '\x03') {
          uVar7 = 1;
        }
      }
    }
    uVar3 = uVar3 + 1;
  } while ((int)uVar3 < 4);
  uVar3 = 0;
  if (uVar7 != 0) {
    do {
      piVar4 = (int *)(param_1 + 0x108);
      if (uVar3 < 4) {
        piVar4 = piVar4 + uVar3;
      }
      uVar3 = uVar3 + 1;
      puVar5 = (ushort *)(*(int *)(*piVar4 + 0x14) + 0x16);
      *puVar5 = *puVar5 & 0xffbf;
    } while ((int)uVar3 < 4);
    return 0;
  }
  do {
    piVar4 = (int *)(param_1 + 0x108);
    if (uVar3 < 4) {
      piVar4 = piVar4 + uVar3;
    }
    if ((*(uint *)(*piVar4 + 0x18) & 4) == 0) {
      piVar4 = (int *)(param_1 + 0x108);
      if (uVar3 < 4) {
        piVar4 = piVar4 + uVar3;
      }
      iVar6 = *piVar4;
      uVar7 = (uint)*(byte *)(iVar6 + 0x84);
      bVar8 = uVar7 == 0;
      if (bVar8) {
        uVar7 = (uint)*(byte *)(iVar6 + 0xb5);
      }
      if (bVar8 && uVar7 == 0) {
        puVar5 = (ushort *)(*(int *)(iVar6 + 0x14) + 0x16);
        uVar7 = *puVar5 | 0x40;
        *puVar5 = (ushort)uVar7;
      }
    }
    uVar3 = uVar3 + 1;
  } while ((int)uVar3 < 4);
  if (*DAT_0046591c != 0 && *DAT_00465920 != 0) {
    cVar2 = *(char *)(param_1 + 0x129);
    iVar6 = func_00581C5C(*DAT_0046591c);
    if (iVar6 != 0) {
      cVar1 = (char)*(undefined2 *)(iVar6 + 0x46);
      *(char *)(param_1 + 0x129) = cVar1;
      if (cVar1 != cVar2) {
        cVar2 = *(char *)(param_1 + 299);
        func_004653D0(param_1,cVar1,uVar7,param_4);
        func_00467DC4(param_1);
        func_00466B38(param_1);
        if (*(char *)(param_1 + 299) != cVar2) {
          func_004683CC(param_1);
        }
        func_00467F44(param_1);
        goto LAB_00465884;
      }
    }
  }
  iVar6 = *(int *)(param_1 + 0x11c);
  if (((*(char *)(iVar6 + 0x91) == '\0') && (*(char *)(iVar6 + 0x5e) != '\0')) ||
     (*(char *)(iVar6 + 0x90) != '\0')) {
    uVar7 = (int)*(char *)(param_1 + 0x126) + 1;
    if ((int)*(char *)(param_1 + 0x124) < (int)uVar7) {
      if (*(char *)(param_1 + 299) == -1) {
        func_004671E4(param_1,1,uVar7,param_4);
      }
      else {
        func_004671E4(param_1,*(char *)(param_1 + 299) + 1,uVar7,param_4);
      }
    }
    else if ((int)*(char *)(param_1 + 0x126) < (int)*(char *)(param_1 + 0x124)) {
      func_0066DCB0((undefined4 *)(param_1 + 0xe0),1);
    }
  }
  iVar6 = *(int *)(param_1 + 0x120);
  if (((*(char *)(iVar6 + 0x91) == '\0') && (*(char *)(iVar6 + 0x5e) != '\0')) ||
     (*(char *)(iVar6 + 0x90) != '\0')) {
    uVar7 = (int)*(char *)(param_1 + 0x127) - 1;
    if ((int)uVar7 < (int)*(char *)(param_1 + 0x125)) {
      if (*(char *)(param_1 + 299) == 1) {
        func_004671E4(param_1,0xffffffff,uVar7,param_4);
      }
      else {
        func_004671E4(param_1,*(char *)(param_1 + 299) + -1,uVar7,param_4);
      }
    }
    else if ((int)*(char *)(param_1 + 0x125) < (int)*(char *)(param_1 + 0x127)) {
      func_0066DCB0((undefined4 *)(param_1 + 0xe0),2);
    }
  }
LAB_00465884:
  uVar3 = 0;
  do {
    piVar4 = (int *)(param_1 + 0x108);
    if (uVar3 < 4) {
      piVar4 = piVar4 + uVar3;
    }
    if (*piVar4 != 0) {
      piVar4 = (int *)(param_1 + 0x108);
      if (uVar3 < 4) {
        piVar4 = piVar4 + uVar3;
      }
      if ((*(uint *)(*piVar4 + 0x18) & 4) == 0) {
        if ((4 < *(byte *)(param_1 + 0x128)) && (uVar3 == 3)) {
          return 0;
        }
        piVar4 = (int *)(param_1 + 0x108);
        if (uVar3 < 4) {
          piVar4 = piVar4 + uVar3;
        }
        if (*(char *)(*piVar4 + 0xb4) != '\0') {
          piVar4 = (int *)(param_1 + 0x108);
          if (uVar3 < 4) {
            piVar4 = piVar4 + uVar3;
          }
          return func_004671E4(param_1,*(undefined4 *)(*piVar4 + 0xb0),uVar7,param_4);
        }
      }
    }
    uVar3 = uVar3 + 1;
    if (3 < (int)uVar3) {
      return 0;
    }
  } while( true );
}

