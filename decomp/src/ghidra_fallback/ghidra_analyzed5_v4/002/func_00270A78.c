#include "ghidra_types.h"

extern int func_00567734(int param_1,int *param_2,uint param_3,int param_4,float *param_5);
extern int func_00567904(int param_1,int *param_2,uint param_3,int param_4);

// USA 00270A78 <- EU 00270AA0 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 undefined4 *
// PARAM param_6 Stack[0x4]:4 uint
// PARAM param_7 Stack[0x8]:4 int

uint func_00270A78(uint *param_1,uint param_2,int param_3,int *param_4,undefined4 *param_5,
                  uint param_6,int param_7)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  ulonglong uVar8;
  
  uVar5 = 0;
  uVar2 = *param_1;
  uVar8 = (ulonglong)param_6;
  if (0 < (int)uVar2) {
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
      bVar7 = *(char *)(iVar6 + 0x29) != '\0';
      uVar2 = param_3 + uVar5 & 0xffff;
      *(bool *)(iVar6 + 0x29) = bVar1 != 0 && bVar7;
      uVar3 = param_5[1];
      uVar4 = param_5[2];
      *(undefined4 *)(iVar6 + 0x1c) = *param_5;
      *(undefined4 *)(iVar6 + 0x20) = uVar3;
      *(undefined4 *)(iVar6 + 0x24) = uVar4;
      func_00567904(iVar6,param_4,param_2 & 0xffff,uVar2);
      func_00567734(iVar6,param_4,param_2 & 0xffff,uVar2,(float *)uVar8);
      *(bool *)(iVar6 + 0x29) = bVar7;
      uVar2 = *param_1;
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < (int)uVar2);
  }
  return uVar2;
}

