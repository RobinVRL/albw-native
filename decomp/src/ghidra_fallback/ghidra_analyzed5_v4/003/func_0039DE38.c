#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_0014E2A0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5 ,int param_6);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_0039D5C8(int param_1);
extern int func_0039E1DC(int param_1);

// USA 0039DE38 <- EU 0039DE14 (Ghidra, non-matching)

void func_0039DE38(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  int *piVar6;
  uint in_fpscr;
  float fparam_0;
  
  if (*(uint *)(param_1 + 0x4d8) < *(uint *)(param_1 + 0x4dc)) {
    *(uint *)(param_1 + 0x4d8) = *(uint *)(param_1 + 0x4d8) + 1;
  }
  if (*(uint *)(param_1 + 0x4fc) < *(uint *)(param_1 + 0x500)) {
    *(uint *)(param_1 + 0x4fc) = *(uint *)(param_1 + 0x4fc) + 1;
  }
  piVar2 = (int *)(*(int *)(param_1 + 0x428) + *(char *)(param_1 + 0x410) * 8);
  uVar4 = *(uint *)(*(int *)(param_1 + 0x428) + *(char *)(param_1 + 0x410) * 8 + 4);
  piVar6 = (int *)(*(int *)(param_1 + 0x420) + ((int)uVar4 >> 1));
  if ((uVar4 & 1) == 0) {
    pcVar5 = (code *)*piVar2;
  }
  else {
    pcVar5 = *(code **)(*piVar2 + *piVar6);
  }
  (*pcVar5)(piVar6);
  iVar3 = *(int *)(param_1 + 0x40c) + 1;
  *(int *)(param_1 + 0x40c) = iVar3;
  if (*(int *)(param_1 + 0x41c) != 0) {
    fparam_0 = (float)VectorUnsignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(*(int *)(param_1 + 0x41c),1,fparam_0);
  }
  func_00115C54((float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3dc));
  func_0039D5C8(param_1);
  if (*(uint *)(param_1 + 0x4e4) < *(uint *)(param_1 + 0x4e8)) {
    *(uint *)(param_1 + 0x4e4) = *(uint *)(param_1 + 0x4e4) + 1;
  }
  else {
    *(undefined1 *)(*(int *)(param_1 + 0x430) + 0x61) = 0;
  }
  func_0039E1DC(param_1);
  cVar1 = *(char *)(param_1 + 0x410);
  iVar3 = 0x410;
  if (cVar1 != '\0') {
    iVar3 = param_1;
  }
  if ((cVar1 != '\0' && cVar1 != '\x02') && (*(char *)(iVar3 + 0x508) != '\0')) {
    func_0014E2A0(iVar3,*(undefined4 *)(iVar3 + 0x434),iVar3 + 0x4b4,0x1f00,iVar3 + 0x4a4,0);
  }
  return;
}

