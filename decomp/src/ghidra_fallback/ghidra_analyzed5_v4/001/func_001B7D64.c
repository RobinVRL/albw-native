#include "ghidra_types.h"

extern int func_0010C0B8(int param_1);
extern int func_0010EEE0(int param_1);
extern int func_001B8048(int param_1,int param_2,uint param_3);
extern int func_004CFA28(int param_1,int *param_2,int *param_3,float *param_4,float *param_5);

// USA 001B7D64 <- EU 001B7D64 (Ghidra, non-matching)

undefined4 func_001B7D64(float *param_1,int param_2,float param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  bool bVar6;
  
  func_001B8048((int)param_1,param_2,(uint)ALBW_AS_U32(param_3));
  if ((uint)ALBW_AS_U32(param_3) < (uint)ALBW_AS_U32(param_1[0x20])) {
    piVar5 = (int *)((int)ALBW_AS_U32(param_1[0x22]) + (int)ALBW_AS_U32(param_3) * 0x70);
  }
  else {
    piVar5 = (int *)ALBW_PTR_BITS(param_1[0x22]);
  }
  bVar6 = (char)piVar5[0x1b] != '\0';
  iVar1 = 0;
  if (bVar6) {
    iVar1 = piVar5[0x13];
  }
  if ((bVar6 && iVar1 != 0) && (*(char *)((int)piVar5 + 0x6d) == '\0')) {
    func_0010C0B8((int)(piVar5 + 0x14));
    func_004CFA28(piVar5[0x13],piVar5 + 2,piVar5,(float *)(piVar5 + 7),param_1);
    uVar2 = 0;
    if (0 < piVar5[4]) {
      do {
        uVar3 = piVar5[4];
        uVar4 = uVar3;
        if (uVar2 < uVar3) {
          uVar4 = piVar5[6];
        }
        if (uVar2 < uVar3) {
          iVar1 = uVar4 + uVar2;
        }
        else {
          iVar1 = piVar5[6];
        }
        *(bool *)iVar1 = *(char *)(*piVar5 + uVar2 * 0xc + 8) == '\0';
        uVar2 = uVar2 + 1;
      } while ((int)uVar2 < piVar5[4]);
    }
    return func_0010EEE0((int)(piVar5 + 0x14));
  }
  return 0;
}

