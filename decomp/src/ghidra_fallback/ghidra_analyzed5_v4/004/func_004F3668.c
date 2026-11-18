#include "ghidra_types.h"

extern int func_002906A4(int param_1,int param_2,undefined4 param_3,int param_4,float fparam_0);
extern int func_00588BE4(int param_1);
extern int func_0058A1F4(int param_1);
extern int func_0066ACA4(undefined4 *param_1,undefined1 param_2);
extern int func_0068C690(float *param_1);
extern int *DAT_004f3770;
extern int *DAT_004f3774;
extern float DAT_004f3778;
extern int *DAT_004f377c;

// USA 004F3668 <- EU 004F3640 (Ghidra, non-matching)
// GLOBAL DAT_004f3770 int *
// GLOBAL DAT_004f3774 int *
// GLOBAL DAT_004f3778 float
// GLOBAL DAT_004f377c int *

uint func_004F3668(int param_1,uint param_2,int param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  
  iVar2 = func_00588BE4(param_1);
  if (iVar2 == *DAT_004f3770) {
    bVar4 = *(short *)(param_1 + 0x508) == 0;
    cVar1 = *(char *)(param_3 + 0x24);
    if (*(short *)(param_1 + 0x508) < 1) {
      bVar4 = cVar1 == '\r';
    }
    if (!bVar4) {
      bVar4 = cVar1 == '\x01';
    }
    if (bVar4) {
LAB_004f36d4:
      func_0066ACA4((undefined4 *)(param_1 + 0x8d4),6);
      return 0;
    }
    if (cVar1 == '\x03') {
      if (*(char *)(param_3 + 0x25) == '\x01') goto LAB_004f36d4;
    }
    else if (cVar1 == '\x02') {
      return 0;
    }
    if (*(char *)(param_3 + 0x25) == '\x03') {
      return 0;
    }
  }
  iVar2 = func_00588BE4(param_1);
  if (((iVar2 == *DAT_004f3774) && (uVar3 = func_0058A1F4(param_1), uVar3 == 0)) &&
     ((cVar1 = *(char *)(param_3 + 0x24), cVar1 == '\x05' || (cVar1 == '\b' || cVar1 == '\x0e')))) {
    iVar2 = func_0068C690((float *)(param_3 + 0x18));
    func_002906A4(*DAT_004f377c,0,iVar2,-(int)**(short **)(param_1 + 0x3a0),DAT_004f3778);
  }
  if (0 < *(short *)(param_1 + 0x508)) {
    uVar3 = param_2 & 0xff;
    bVar4 = 0x1d < uVar3;
    bVar5 = uVar3 == 0x1e;
    if (!bVar5) {
      uVar3 = uVar3 - 0xe;
      bVar4 = 2 < uVar3;
    }
    if (!bVar4 || (bVar5 || uVar3 == 3)) {
      return 0x10;
    }
  }
  *(uint *)(param_1 + 0x5a0) = *(uint *)(param_1 + 0x5a0) | 0x80;
  return param_2;
}

