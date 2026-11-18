#include "ghidra_types.h"

extern int func_002C00A8(int param_1);
extern int func_004762C4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
extern int func_0066E65C(undefined4 *param_1,undefined1 param_2);

// USA 004653D0 <- EU 004653A8 (Ghidra, non-matching)

void func_004653D0(int param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  ushort *puVar5;
  char cVar6;
  ushort uVar7;
  uint uVar8;
  uint uVar9;
  
  if (*(char *)(param_1 + 300) == '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x129) = param_2;
  cVar6 = *(char *)(param_1 + 0x129);
  uVar8 = (uint)cVar6;
  *(char *)(param_1 + 299) = cVar6;
  cVar1 = *(char *)(param_1 + 0x124);
  iVar2 = (int)cVar1;
  if (*(char *)(param_1 + 0x129) == iVar2) {
    uVar8 = (uint)*(char *)(param_1 + 0x125);
    if (iVar2 == 2 || iVar2 == 1) {
      iVar2 = iVar2 + -3;
    }
    else {
      iVar2 = iVar2 + -2;
    }
    cVar6 = (char)iVar2;
    if (iVar2 <= (int)uVar8) {
      cVar6 = *(char *)(param_1 + 0x125);
    }
    *(char *)(param_1 + 0x127) = cVar6;
  }
  else {
    uVar9 = (uint)*(char *)(param_1 + 0x125);
    if (uVar8 == uVar9) {
      *(char *)(param_1 + 0x127) = *(char *)(param_1 + 0x125);
      if (uVar9 < 0xfffffffe) {
        iVar4 = uVar9 + 2;
      }
      else {
        iVar4 = uVar9 + 3;
      }
      if (iVar4 < iVar2) {
        cVar1 = (char)iVar4;
      }
    }
    else {
      if (uVar8 == 1) {
        *(undefined1 *)(param_1 + 0x127) = 0xff;
      }
      else {
        *(char *)(param_1 + 0x127) = cVar6 + -1;
        if (uVar8 == 0xffffffff) {
          cVar1 = '\x01';
          goto LAB_0046547c;
        }
      }
      cVar1 = cVar6 + '\x01';
    }
  }
LAB_0046547c:
  uVar9 = 0;
  *(char *)(param_1 + 0x126) = cVar1;
  do {
    piVar3 = (int *)(param_1 + 0x108);
    if (uVar9 < 4) {
      piVar3 = piVar3 + uVar9;
    }
    if (*piVar3 != 0) {
      cVar6 = *(char *)(param_1 + 0x127);
      iVar2 = (int)cVar6 + uVar9;
      if ((*(char *)(param_1 + 0x125) < '\0') && (-1 < iVar2)) {
        iVar2 = iVar2 + 1;
      }
      piVar3 = (int *)(param_1 + 0x108);
      if (uVar9 < 4) {
        piVar3 = piVar3 + uVar9;
      }
      iVar4 = *piVar3;
      *(int *)(iVar4 + 0xb0) = iVar2;
      func_004762C4(iVar4,(int)cVar6,uVar8,param_4);
      if (*(char *)(param_1 + 0x129) == iVar2) {
        piVar3 = (int *)(param_1 + 0x108);
        if (uVar9 < 4) {
          piVar3 = piVar3 + uVar9;
        }
        iVar2 = *piVar3;
        func_0066E65C((undefined4 *)(iVar2 + 0x80),2);
        puVar5 = (ushort *)(*(int *)(iVar2 + 0x14) + 0x16);
        *puVar5 = *puVar5 & 0xffbf;
        func_002C00A8(*(int *)(iVar2 + 0x14));
        puVar5 = (ushort *)(*(int *)(iVar2 + 0x14) + 0x16);
        uVar7 = *puVar5 & 0xfffd;
      }
      else {
        piVar3 = (int *)(param_1 + 0x108);
        if (uVar9 < 4) {
          piVar3 = piVar3 + uVar9;
        }
        iVar2 = *piVar3;
        func_0066E65C((undefined4 *)(iVar2 + 0x80),0);
        if (*(char *)(iVar2 + 0xb5) != '\0') goto LAB_00465570;
        puVar5 = (ushort *)(*(int *)(iVar2 + 0x14) + 0x16);
        *puVar5 = *puVar5 | 0x40;
        func_002C00A8(*(int *)(iVar2 + 0x14));
        puVar5 = (ushort *)(*(int *)(iVar2 + 0x14) + 0x16);
        uVar7 = *puVar5 | 2;
      }
      *puVar5 = uVar7;
    }
LAB_00465570:
    uVar9 = uVar9 + 1;
    if (3 < (int)uVar9) {
      return;
    }
  } while( true );
}

