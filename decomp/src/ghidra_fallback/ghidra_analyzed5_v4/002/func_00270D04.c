#include "ghidra_types.h"

extern int func_00567904(int param_1,int *param_2,uint param_3,int param_4);
extern int func_00567AFC(int param_1,int *param_2,uint param_3,int param_4,float *param_5,float *param_6);

// USA 00270D04 <- EU 00270D2C (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 undefined4 *
// PARAM param_6 Stack[0x4]:8 undefined8
// PARAM param_7 Stack[0xc]:4 int

void func_00270D04(uint *param_1,uint param_2,int param_3,int *param_4,undefined4 *param_5,
                  undefined8 param_6,int param_7)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  
  uVar5 = 0;
  if (0 < (int)*param_1) {
    do {
      if (param_7 == 0) {
        bVar1 = 0;
      }
      else {
        bVar1 = (byte)param_1[0x14] & 1;
        if (((byte)param_1[0x14] & 1) != 0) {
          bVar1 = 1;
        }
      }
      if (uVar5 < *param_1) {
        iVar6 = *(int *)(param_1[2] + uVar5 * 4);
      }
      else {
        iVar6 = 0;
      }
      uVar4 = param_3 + uVar5 & 0xffff;
      bVar7 = *(char *)(iVar6 + 0x29) != '\0';
      *(bool *)(iVar6 + 0x29) = bVar1 != 0 && bVar7;
      uVar2 = param_5[1];
      uVar3 = param_5[2];
      *(undefined4 *)(iVar6 + 0x1c) = *param_5;
      *(undefined4 *)(iVar6 + 0x20) = uVar2;
      *(undefined4 *)(iVar6 + 0x24) = uVar3;
      func_00567904(iVar6,param_4,param_2 & 0xffff,uVar4);
      func_00567AFC(iVar6,param_4,param_2 & 0xffff,uVar4,(float *)param_6,
                    (float *)((ulonglong)param_6 >> 0x20));
      *(bool *)(iVar6 + 0x29) = bVar7;
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < (int)*param_1);
  }
  return;
}

