#include "ghidra_types.h"

extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_0051BDF0(int param_1,undefined4 param_2,undefined4 param_3,int param_4);
extern int func_0051BF44(int param_1,undefined4 param_2,int param_3,int param_4);
extern int func_0058DEB8(int param_1);
extern int *DAT_0047789c;

// USA 004777AC <- EU 00477784 (Ghidra, non-matching)
// GLOBAL DAT_0047789c int *

undefined4 func_004777AC(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 extraout_r1;
  int *piVar4;
  undefined4 in_r2;
  int in_r3;
  bool bVar5;
  uint in_fpscr;
  float fparam_0;
  
  piVar4 = DAT_0047789c;
  if ((*(char *)(param_1 + 0x114) != '\0') && (iVar2 = func_0058DEB8(*DAT_0047789c), iVar2 == 0)) {
    cVar1 = *(char *)(param_1 + 0x114);
    if (cVar1 == '\x01') {
      func_0051BF44(*piVar4,(int)*(char *)(param_1 + 0x115),(int)*(char *)(param_1 + 0x116),in_r3);
    }
    else {
      if (cVar1 != '\x02') goto LAB_004777f4;
      func_0051BDF0(*piVar4,extraout_r1,in_r2,in_r3);
    }
    *(char *)(param_1 + 0x114) = '\0';
  }
LAB_004777f4:
  iVar2 = (int)*(char *)(param_1 + 0xf4);
  if (iVar2 - 2U < 4) {
    uVar3 = *(uint *)(param_1 + 0x1fc);
    bVar5 = *(char *)(uVar3 + 0xd) == '\x03';
    if (bVar5) {
      uVar3 = (uint)*(byte *)(uVar3 + 0xe);
    }
    if ((bVar5 && uVar3 == 3) && ((*(ushort *)(*(int *)(param_1 + 0x14) + 0x16) & 4) != 0)) {
      *(undefined1 *)(param_1 + 0x30d) = 1;
    }
  }
  piVar4 = (int *)(*(int *)(param_1 + 0x10c) + iVar2 * 8);
  uVar3 = *(uint *)(*(int *)(param_1 + 0x10c) + iVar2 * 8 + 4);
  if ((uVar3 & 1) != 0) {
    piVar4 = (int *)(*piVar4 + *(int *)(*(int *)(param_1 + 0x104) + ((int)uVar3 >> 1)));
  }
  (*(code *)*piVar4)();
  iVar2 = *(int *)(param_1 + 0xf0) + 1;
  *(int *)(param_1 + 0xf0) = iVar2;
  if (*(int *)(param_1 + 0x100) == 0) {
    return 0;
  }
  fparam_0 = (float)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
  return func_00352210(*(int *)(param_1 + 0x100),1,fparam_0);
}

