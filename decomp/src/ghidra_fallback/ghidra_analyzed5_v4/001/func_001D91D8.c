#include "ghidra_types.h"

extern int func_0014E2A0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5 ,int param_6);
extern int func_0034CA24(undefined4 *param_1);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_0065CACC(undefined4 *param_1,undefined1 param_2);

// USA 001D91D8 <- EU 001D91D8 (Ghidra, non-matching)

undefined4 func_001D91D8(int param_1)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  bool bVar6;
  uint in_fpscr;
  float fparam_0;
  
  if (*(int *)(param_1 + 0x480) != 0) {
    *(int *)(param_1 + 0x480) = *(int *)(param_1 + 0x480) + -1;
  }
  func_0034CA24(*(undefined4 **)(param_1 + 0x43c));
  func_0014E2A0(param_1,*(undefined4 *)(param_1 + 0x460),param_1 + 0x440,0x1600,param_1 + 0x450,0);
  piVar5 = (int *)(param_1 + 0x414);
  piVar3 = (int *)(*(int *)(param_1 + 0x430) + *(char *)(param_1 + 0x418) * 8);
  uVar2 = *(uint *)(*(int *)(param_1 + 0x430) + *(char *)(param_1 + 0x418) * 8 + 4);
  if ((uVar2 & 1) != 0) {
    piVar3 = (int *)(*piVar3 + *(int *)(*(int *)(param_1 + 0x428) + ((int)uVar2 >> 1)));
  }
  (*(code *)*piVar3)();
  iVar4 = *piVar5;
  *piVar5 = iVar4 + 1;
  if (*(int *)(param_1 + 0x424) != 0) {
    fparam_0 = (float)VectorUnsignedToFloat(iVar4 + 1,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(*(int *)(param_1 + 0x424),1,fparam_0);
  }
  piVar3 = *(int **)(param_1 + 0x43c);
  if (*piVar3 == 0) {
    if (*(int *)(param_1 + 0x480) == 0) {
      *(undefined1 *)(param_1 + 0x49f) = 0;
    }
    return 0;
  }
  uVar2 = param_1 + 0x400;
  if (*(char *)(param_1 + 0x418) != '\x03' && *(char *)(param_1 + 0x418) != '\x02') {
    bVar6 = *(int *)(param_1 + 0x480) == 0;
    if (bVar6) {
      uVar2 = (uint)*(byte *)(param_1 + 0x49f);
    }
    if (bVar6 && uVar2 == 0) {
      uVar2 = *(uint *)(param_1 + 0x490);
      if (uVar2 < *(uint *)(param_1 + 0x494)) {
        uVar2 = uVar2 + 1;
        *(uint *)(param_1 + 0x490) = uVar2;
      }
      if (uVar2 < *(uint *)(param_1 + 0x494)) {
        cVar1 = *(char *)((int)piVar3 + 0x21);
        if ((cVar1 != '\x01') &&
           (((cVar1 != '\x03' || (*(char *)((int)piVar3 + 0x23) == '\x02')) && (cVar1 != '\r')))) {
          return func_0065CACC(piVar5,1);
        }
        return func_0065CACC(piVar5,2);
      }
      func_0065CACC(piVar5,3);
    }
  }
  return 0;
}

