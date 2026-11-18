#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_00537B38(int param_1);
extern int func_005568A4(int param_1);
extern int func_005568B0(int param_1);
extern int func_0058A7D4(void);
extern int *DAT_002b7c84;

// USA 002B7AD0 <- EU 002B7AAC (Ghidra, non-matching)
// GLOBAL DAT_002b7c84 int *

void func_002B7AD0(int param_1)

{
  int *piVar1;
  byte bVar2;
  byte bVar3;
  short sVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  
  piVar1 = DAT_002b7c84;
  if (*(char *)(param_1 + 0x935) == '\x02' || *(char *)(param_1 + 0x935) == '\x03') {
    return;
  }
  if (*(short *)(param_1 + 0xaf2) != 0) {
    sVar4 = *(short *)(param_1 + 0xaf2) + -1;
    goto LAB_002b7c7c;
  }
  bVar2 = func_005568B0(*DAT_002b7c84);
  bVar3 = func_005568A4(*piVar1);
  if (((bVar2 < bVar3) || (iVar5 = func_00537B38(*piVar1), iVar5 == 0)) &&
     (*(int *)(*(int *)(param_1 + 0x93c) + 4) != *(int *)(param_1 + 0x93c) + 0x53c)) {
    puVar6 = (uint *)func_0058A7D4();
    uVar7 = func_00111A64(puVar6);
    if ((uint)((ulonglong)uVar7 * 0x65 >> 0x20) < 0x33) {
      if (*(char *)(param_1 + 0xb5c) == '\x02') {
LAB_002b7b84:
        *(undefined1 *)(param_1 + 0x935) = 1;
      }
      else {
LAB_002b7b8c:
        *(undefined1 *)(param_1 + 0x935) = 0;
      }
    }
    else {
      puVar6 = (uint *)func_0058A7D4();
      uVar7 = func_00111A64(puVar6);
      if (0x28 < (uint)((ulonglong)uVar7 * 0x65 >> 0x20)) {
        puVar6 = (uint *)func_0058A7D4();
        uVar7 = func_00111A64(puVar6);
        uVar7 = (uint)((ulonglong)uVar7 * 0x65 >> 0x20);
        goto joined_r0x002b7b4c;
      }
      bVar2 = *(byte *)(param_1 + 0x935);
      if (*(int *)(param_1 + 0xa00) < 0x3f800001) {
        if (1 < bVar2) goto LAB_002b7c0c;
        puVar6 = (uint *)func_0058A7D4();
        uVar7 = func_00111A64(puVar6);
        if ((uint)((ulonglong)uVar7 * 0x65 >> 0x20) < 0x33) goto LAB_002b7c24;
LAB_002b7c2c:
        *(undefined1 *)(param_1 + 0x935) = 2;
      }
      else {
        if (bVar2 == 0) goto LAB_002b7b84;
        if (bVar2 == 1) goto LAB_002b7b8c;
LAB_002b7c0c:
        if (bVar2 == 2) {
LAB_002b7c24:
          *(undefined1 *)(param_1 + 0x935) = 3;
        }
        else if (bVar2 == 3) goto LAB_002b7c2c;
      }
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x935) = 1;
    puVar6 = (uint *)func_0058A7D4();
    uVar7 = func_00111A64(puVar6);
    uVar7 = (uint)((ulonglong)uVar7 * 0x65 >> 0x20);
joined_r0x002b7b4c:
    if (uVar7 < 0x33) {
      *(int *)(param_1 + 0xa18) = -*(int *)(param_1 + 0xa18);
    }
  }
  puVar6 = (uint *)func_0058A7D4();
  uVar7 = func_00111A64(puVar6);
  sVar4 = (short)((ulonglong)uVar7 * 0x1f >> 0x20) + 0x1e;
LAB_002b7c7c:
  *(short *)(param_1 + 0xaf2) = sVar4;
  return;
}

