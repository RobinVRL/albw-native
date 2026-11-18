#include "ghidra_types.h"

extern int func_003ABB24(int *param_1,uint param_2,int param_3);
extern int func_003B147C(int *param_1,undefined4 param_2,undefined4 param_3);
extern int func_00542D5C(void);
extern undefined4 DAT_003bef2c;
extern float DAT_003bef30;

// USA 003BEE2C <- EU 003BEE08 (Ghidra, non-matching)
// GLOBAL DAT_003bef2c undefined4
// GLOBAL DAT_003bef30 float

undefined4 func_003BEE2C(int *param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  *(undefined2 *)(param_1[0x12] + 0xaf4) = 2;
  bVar1 = func_00542D5C();
  if (bVar1) {
    *(undefined4 *)(param_1[0x12] + 0xa60) = DAT_003bef2c;
  }
  puVar2 = (uint *)(**(code **)(*param_1 + 0xd4))(param_1);
  if ((*puVar2 < 6) && (iVar3 = param_1[0x12], *(char *)(iVar3 + 0xe02) != '\0')) {
    iVar4 = param_1[0x25];
    iVar5 = param_1[0x26];
    *(int *)(iVar3 + 0x3dc) = param_1[0x24];
    *(int *)(iVar3 + 0x3e0) = iVar4;
    *(int *)(iVar3 + 0x3e4) = iVar5;
  }
  iVar4 = param_1[0x12];
  iVar3 = *(int *)(*(int *)(iVar4 + 0x8dc) + 0x14);
  if (*(char *)(iVar3 + 0x1c) == '\0') {
    if (*(float *)(iVar3 + 0x10) < DAT_003bef30) {
      if (DAT_003bef30 < *(float *)(iVar3 + 8)) {
        return 0;
      }
    }
    else if (*(float *)(iVar3 + 8) != *(float *)(iVar3 + 0x14)) {
      return 0;
    }
    iVar3 = iVar4 + 0xdb8;
    bVar1 = *(char *)(iVar4 + 0xe01) == '\0';
    if (bVar1) {
      iVar3 = *(int *)(iVar4 + 0xe04);
    }
    if (bVar1 && iVar3 == 0) {
      piVar6 = *(int **)(iVar4 + 0x93c);
      iVar3 = func_003ABB24(piVar6,1,1);
      if (iVar3 != 0) {
        return func_003B147C((int *)piVar6[1],1,1);
      }
    }
  }
  return 0;
}

