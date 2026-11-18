#include "ghidra_types.h"

extern int func_002C00A8(int param_1);
extern int func_00466B38(int param_1);
extern int func_00467DC4(int param_1);
extern int func_004762C4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
extern int func_00662B58(undefined4 *param_1,undefined1 param_2);
extern int func_0066E65C(undefined4 *param_1,undefined1 param_2);

// USA 002BEAA4 <- EU 002BEA80 (Ghidra, non-matching)

undefined4 func_002BEAA4(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  ushort *puVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  
  uVar7 = 0;
  cVar1 = *(char *)(param_1 + 299) + '\x01';
  *(char *)(param_1 + 299) = cVar1;
  if (cVar1 == '\0') {
    *(undefined1 *)(param_1 + 299) = 1;
  }
  cVar1 = *(char *)(param_1 + 0x126) + '\x01';
  *(char *)(param_1 + 0x126) = cVar1;
  if (cVar1 == '\0') {
    *(undefined1 *)(param_1 + 0x126) = 1;
  }
  cVar1 = *(char *)(param_1 + 0x127) + '\x01';
  *(char *)(param_1 + 0x127) = cVar1;
  if (cVar1 == '\0') {
    *(undefined1 *)(param_1 + 0x127) = 1;
  }
  do {
    piVar2 = (int *)(param_1 + 0x108);
    if (uVar7 < 4) {
      piVar2 = piVar2 + uVar7;
    }
    if (*piVar2 != 0) {
      iVar6 = (int)*(char *)(param_1 + 0x127);
      if ((iVar6 < 0) && (-1 < (int)(iVar6 + uVar7))) {
        piVar2 = (int *)(param_1 + 0x108);
        if (uVar7 < 4) {
          piVar2 = piVar2 + uVar7;
        }
        param_3 = uVar7 + 1;
        iVar3 = *piVar2;
        *(int *)(iVar3 + 0xb0) = iVar6 + param_3;
        func_004762C4(iVar3,iVar6 + param_3,param_3,param_4);
      }
      else {
        piVar2 = (int *)(param_1 + 0x108);
        if (uVar7 < 4) {
          piVar2 = piVar2 + uVar7;
        }
        iVar3 = *piVar2;
        *(uint *)(iVar3 + 0xb0) = iVar6 + uVar7;
        func_004762C4(iVar3,iVar6 + uVar7,param_3,param_4);
      }
    }
    uVar7 = uVar7 + 1;
  } while ((int)uVar7 < 4);
  func_00467DC4(param_1);
  func_00466B38(param_1);
  uVar7 = 0;
  do {
    piVar2 = (int *)(param_1 + 0x108);
    if (uVar7 < 4) {
      piVar2 = piVar2 + uVar7;
    }
    if (*piVar2 != 0) {
      piVar2 = (int *)(param_1 + 0x108);
      if (uVar7 < 4) {
        piVar2 = piVar2 + uVar7;
      }
      iVar3 = (int)*(char *)(param_1 + 299);
      iVar6 = (int)(char)*(undefined4 *)(*piVar2 + 0xb0);
      if (iVar3 == iVar6) {
        piVar2 = (int *)(param_1 + 0x108);
        if (uVar7 < 4) {
          piVar2 = piVar2 + uVar7;
        }
        iVar6 = *piVar2;
        func_0066E65C((undefined4 *)(iVar6 + 0x80),2);
        puVar4 = (ushort *)(*(int *)(iVar6 + 0x14) + 0x16);
        *puVar4 = *puVar4 & 0xffbf;
        func_002C00A8(*(int *)(iVar6 + 0x14));
        puVar4 = (ushort *)(*(int *)(iVar6 + 0x14) + 0x16);
        uVar5 = *puVar4 & 0xfffd;
LAB_002bec5c:
        *puVar4 = uVar5;
      }
      else if ((iVar3 + 1 == iVar6) || ((iVar6 == 1 && (iVar3 == -1)))) {
        piVar2 = (int *)(param_1 + 0x108);
        if (uVar7 < 4) {
          piVar2 = piVar2 + uVar7;
        }
        iVar6 = *piVar2;
        func_0066E65C((undefined4 *)(iVar6 + 0x80),0);
        if (*(char *)(iVar6 + 0xb5) == '\0') {
          puVar4 = (ushort *)(*(int *)(iVar6 + 0x14) + 0x16);
          *puVar4 = *puVar4 | 0x40;
          func_002C00A8(*(int *)(iVar6 + 0x14));
          puVar4 = (ushort *)(*(int *)(iVar6 + 0x14) + 0x16);
          uVar5 = *puVar4 | 2;
          goto LAB_002bec5c;
        }
      }
    }
    uVar7 = uVar7 + 1;
    if (3 < (int)uVar7) {
      cVar1 = *(char *)(param_1 + 0x44c);
      iVar6 = *(int *)(param_1 + 0x120);
      func_002C00A8(*(int *)(iVar6 + 0x14));
      if (cVar1 == '\0') {
        *(undefined1 *)(iVar6 + 0x5c) = 1;
      }
      return func_00662B58((undefined4 *)(iVar6 + 0x38),0);
    }
  } while( true );
}

