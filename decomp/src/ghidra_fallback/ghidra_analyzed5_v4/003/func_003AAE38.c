#include "ghidra_types.h"

extern int func_003AAB08(int *param_1,int param_2);
extern void func_004AD9E8(int param_1,uint param_2,uint param_3,uint param_4,float fparam_0);
extern int func_004CEAF0(int param_1);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);
extern int func_0052FBDC(int param_1,int param_2,int param_3);
extern int func_0055E87C(int param_1);
extern int *DAT_003ab01c;
extern int *DAT_003ab020;

// USA 003AAE38 <- EU 003AAE14 (Ghidra, non-matching)
// GLOBAL DAT_003ab01c int *
// GLOBAL DAT_003ab020 int *

undefined4 func_003AAE38(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  float in_s0;
  
  piVar2 = DAT_003ab01c;
  if (*(char *)(param_1 + 0x5b6) == '\0') {
    uVar5 = 0;
    if (*(short *)(param_1 + 0x5b4) != 0) {
      do {
        iVar3 = (int)*(short *)(param_1 + 0x5e + uVar5 * 6);
        if ((0 < iVar3) && (iVar3 = func_0052FBDC(*piVar2 + 0x3dbbc,iVar3,0), iVar3 != 0)) {
          puVar4 = (undefined4 *)(param_1 + 0x434);
          if (uVar5 < 0x60) {
            puVar4 = (undefined4 *)(param_1 + 0x434) + uVar5;
          }
          *puVar4 = *(undefined4 *)(iVar3 + 0x2cc);
        }
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < (int)(uint)*(ushort *)(param_1 + 0x5b4));
    }
    *(undefined1 *)(param_1 + 0x5b6) = 1;
  }
  if ((*(int *)(param_1 + 0x41c) != 0) &&
     ((*(char *)(param_1 + 0x41a) == '\0' || (*(char *)(*(int *)(param_1 + 0x41c) + 0x30) != '\0')))
     ) {
    cVar1 = *(char *)(param_1 + 0x42c);
    if (cVar1 == '\0') {
      iVar3 = func_0055E87C(param_1);
      if (iVar3 != 0) {
        func_003AAB08((int *)param_1,1);
      }
    }
    else {
      if (cVar1 == '\x01') {
        uVar5 = *(uint *)(param_1 + 0x420);
        if (*(uint *)(param_1 + 0x424) <= uVar5) {
          func_004AD9E8(*DAT_003ab020,(uint)*(ushort *)(param_1 + 0x36),
                        (uint)*(byte *)(param_1 + 0x34),(int)*(char *)(param_1 + 0x5b7),in_s0);
          if (*(char *)(param_1 + 0x5b8) != '\0') {
            func_003AAB08((int *)param_1,2);
          }
          goto LAB_003aaff0;
        }
      }
      else {
        if (cVar1 == '\x02') {
          iVar3 = func_0055E87C(param_1);
          if (iVar3 == 0) {
            func_003AAB08((int *)param_1,3);
          }
          goto LAB_003aaff0;
        }
        if (cVar1 != '\x03') goto LAB_003aaff0;
        uVar5 = *(uint *)(param_1 + 0x420);
        if (*(uint *)(param_1 + 0x424) <= uVar5) {
          func_004AD9E8(*DAT_003ab020,(uint)*(ushort *)(param_1 + 0x36),
                        (uint)*(byte *)(param_1 + 0x34),(uint)(*(char *)(param_1 + 0x5b7) == '\0'),
                        in_s0);
          func_003AAB08((int *)param_1,0);
          goto LAB_003aaff0;
        }
      }
      *(uint *)(param_1 + 0x420) = uVar5 + 1;
    }
  }
LAB_003aaff0:
  iVar3 = *(int *)(param_1 + 0x41c);
  *(uint *)(iVar3 + 0x164) = *(uint *)(iVar3 + 0x164) | 0x40000000;
  func_004D8AEC((float *)(iVar3 + 0x80),*(uint *)(param_1 + 1000),(float *)(param_1 + 0x3d0));
  return func_004CEAF0(*(int *)(param_1 + 0x41c));
}

