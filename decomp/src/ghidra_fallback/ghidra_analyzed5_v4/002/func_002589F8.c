#include "ghidra_types.h"

extern int func_0010CF7C(undefined4 *param_1,undefined1 param_2);
extern int func_0048BCF4(int *param_1,undefined4 param_2);
extern int func_005883E8(int param_1);
extern int *DAT_00258b44;
extern int *DAT_00258b48;
extern int *DAT_00258b4c;
extern uint DAT_00258b50;

// USA 002589F8 <- EU 00258A20 (Ghidra, non-matching)
// GLOBAL DAT_00258b44 int *
// GLOBAL DAT_00258b48 int *
// GLOBAL DAT_00258b4c int *
// GLOBAL DAT_00258b50 uint

void func_002589F8(int param_1,int param_2,int param_3)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  
  piVar1 = DAT_00258b4c;
  if (*(char *)(param_1 + 0x67) != '\0') {
    cVar2 = *(char *)(*DAT_00258b44 + 0x25);
    bVar5 = cVar2 == '\x03';
    if (bVar5) {
      cVar2 = '\x01';
    }
    if (!bVar5) {
      cVar2 = '\0';
    }
    if (*DAT_00258b48 == 0 && cVar2 == '\0') {
      func_0010CF7C((undefined4 *)(param_1 + 0x14),0);
    }
    else {
      uVar3 = (uint)*(ushort *)(param_1 + 0x62) *
              (*(int *)(*DAT_00258b4c + 0x68) - *(int *)(param_1 + 0x54));
      iVar4 = (int)((longlong)(int)uVar3 * (longlong)(int)DAT_00258b50 + ((ulonglong)uVar3 << 0x20)
                   >> 0x20);
      if ((int)(((uint)*(ushort *)(param_1 + 0x62) * (DAT_00258b50 & ~((int)DAT_00258b50 >> 0xd)) >>
                0x15) * 2) < param_2 - ((iVar4 >> 5) - (iVar4 >> 0x1f))) {
        if (param_3 == 0) {
          return;
        }
        if (*(char *)(param_1 + 0x65) != '\0') {
          return;
        }
        if (*(char *)(param_1 + 0x66) != '\0') {
          return;
        }
        iVar4 = func_005883E8(*DAT_00258b4c);
        if (iVar4 != 0) {
          return;
        }
        iVar4 = *(int *)(param_1 + 0x5c) + 1;
        *(int *)(param_1 + 0x5c) = iVar4;
        if (iVar4 != 0xf) {
          return;
        }
      }
    }
    cVar2 = *(char *)(param_1 + 0x65);
    bVar5 = cVar2 == '\0';
    if (bVar5) {
      cVar2 = *(char *)(param_1 + 0x66);
    }
    if ((bVar5 && cVar2 == '\0') && (iVar4 = func_005883E8(*piVar1), iVar4 == 0)) {
      func_0048BCF4((int *)(param_1 + 0xc),0x1e);
    }
    *(undefined1 *)(param_1 + 0x67) = 0;
  }
  return;
}

