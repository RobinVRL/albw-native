#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_005568A4(int param_1);
extern int func_005568B0(int param_1);
extern int func_00584B94(int param_1,int param_2);
extern int *DAT_0055c0dc;
extern int *DAT_0055c0e0;
extern int *DAT_0055c0e4;
extern int DAT_0055c0e8;
extern int DAT_0055c0ec;

// USA 0055C01C <- EU 0055BFF4 (Ghidra, non-matching)
// GLOBAL DAT_0055c0dc int *
// GLOBAL DAT_0055c0e0 int *
// GLOBAL DAT_0055c0e4 int *
// GLOBAL DAT_0055c0e8 int
// GLOBAL DAT_0055c0ec int

uint func_0055C01C(ushort *param_1)

{
  int *piVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  piVar1 = DAT_0055c0dc;
  if (999 < *param_1) {
    cVar2 = func_005568A4(*DAT_0055c0dc);
    cVar3 = func_005568B0(*piVar1);
    return (uint)(cVar2 == cVar3);
  }
  uVar8 = 0xffffffff;
  uVar5 = func_00111A64((uint *)(*DAT_0055c0e0 + 0x660));
  uVar7 = 0;
  iVar6 = 0;
  do {
    uVar7 = uVar7 + param_1[iVar6];
    if ((uint)((ulonglong)uVar5 * 1000 >> 0x20) < uVar7) {
      uVar8 = (uint)(char)iVar6;
      if (uVar8 == 0xb) goto LAB_0055c09c;
      break;
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 0xd);
  if (uVar8 == 0xc) {
LAB_0055c09c:
    bVar4 = func_00584B94(*DAT_0055c0e4,DAT_0055c0e8);
    if (bVar4) {
      return uVar8;
    }
  }
  else {
    if (uVar8 != 10) {
      return uVar8;
    }
    bVar4 = func_00584B94(*DAT_0055c0e4,DAT_0055c0ec);
    if (bVar4) {
      return 10;
    }
  }
  return 0xffffffff;
}

