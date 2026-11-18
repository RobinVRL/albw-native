#include "ghidra_types.h"

extern int func_003AAB08(int *param_1,int param_2);
extern void func_004AD9E8(int param_1,uint param_2,uint param_3,uint param_4,float fparam_0);
extern int func_004CEAF0(int param_1);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);
extern int func_0052FBDC(int param_1,int param_2,int param_3);
extern int func_0055E87C(int param_1);
extern int *DAT_003ab01c;
extern int *DAT_003ab020;

// USA 00338B20 <- EU 00338AFC (Ghidra, non-matching)
// GLOBAL DAT_003ab01c int *
// GLOBAL DAT_003ab020 int *

void func_003AAE3C(int *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  float in_s0;
  
  piVar2 = DAT_003ab01c;
  if (*(char *)((int)param_1 + 0x5b6) == '\0') {
    uVar5 = 0;
    if ((short)param_1[0x16d] != 0) {
      do {
        iVar3 = (int)*(short *)((int)param_1 + uVar5 * 6 + 0x5e);
        if ((0 < iVar3) && (iVar3 = func_0052FBDC(*piVar2 + 0x3dbbc,iVar3,0), iVar3 != 0)) {
          piVar4 = param_1 + 0x10d;
          if (uVar5 < 0x60) {
            piVar4 = param_1 + 0x10d + uVar5;
          }
          *piVar4 = *(int *)(iVar3 + 0x2cc);
        }
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < (int)(uint)*(ushort *)(param_1 + 0x16d));
    }
    *(undefined1 *)((int)param_1 + 0x5b6) = 1;
  }
  if ((param_1[0x107] != 0) &&
     ((*(char *)((int)param_1 + 0x41a) == '\0' || (*(char *)(param_1[0x107] + 0x30) != '\0')))) {
    cVar1 = (char)param_1[0x10b];
    if (cVar1 == '\0') {
      iVar3 = func_0055E87C((int)param_1);
      if (iVar3 != 0) {
        func_003AAB08(param_1,1);
      }
    }
    else {
      if (cVar1 == '\x01') {
        uVar5 = param_1[0x108];
        if ((uint)param_1[0x109] <= uVar5) {
          func_004AD9E8(*DAT_003ab020,(uint)*(ushort *)((int)param_1 + 0x36),
                        (uint)*(byte *)(param_1 + 0xd),(int)*(char *)((int)param_1 + 0x5b7),in_s0);
          if ((char)param_1[0x16e] != '\0') {
            func_003AAB08(param_1,2);
          }
          goto LAB_003aaff0;
        }
      }
      else {
        if (cVar1 == '\x02') {
          iVar3 = func_0055E87C((int)param_1);
          if (iVar3 == 0) {
            func_003AAB08(param_1,3);
          }
          goto LAB_003aaff0;
        }
        if (cVar1 != '\x03') goto LAB_003aaff0;
        uVar5 = param_1[0x108];
        if ((uint)param_1[0x109] <= uVar5) {
          func_004AD9E8(*DAT_003ab020,(uint)*(ushort *)((int)param_1 + 0x36),
                        (uint)*(byte *)(param_1 + 0xd),
                        (uint)(*(char *)((int)param_1 + 0x5b7) == '\0'),in_s0);
          func_003AAB08(param_1,0);
          goto LAB_003aaff0;
        }
      }
      param_1[0x108] = uVar5 + 1;
    }
  }
LAB_003aaff0:
  iVar3 = param_1[0x107];
  *(uint *)(iVar3 + 0x164) = *(uint *)(iVar3 + 0x164) | 0x40000000;
  func_004D8AEC((float *)(iVar3 + 0x80),param_1[0xfa],(float *)(param_1 + 0xf4));
  func_004CEAF0(param_1[0x107]);
  return;
}

