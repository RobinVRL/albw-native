#include "ghidra_types.h"

extern int func_0010BEB4(int param_1,int *param_2);
extern int func_00260214(int *param_1);
extern int func_00428B84(int param_1,int param_2);
extern int DAT_00428d40;

// USA 00428BEC <- EU 00428BCC (Ghidra, non-matching)
// GLOBAL DAT_00428d40 int

undefined4 func_00428BEC(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(int *)(albw_frame + 0x4))
  iVar1 = param_1[0x15];
  if (iVar1 != 0) {
    *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe | 1;
  }
  uVar2 = func_00260214(param_1);
  iVar1 = (int)(char)param_1[4];
  if (iVar1 != -1) {
    iVar4 = param_1[0xb];
    pcVar3 = *(code **)(iVar4 + iVar1 * 8);
    if ((pcVar3 != (code *)0x0) ||
       ((uVar6 = *(uint *)(iVar4 + iVar1 * 8 + 4), (uVar6 & 1) != 0 && (uVar6 != 0)))) {
      uVar6 = *(uint *)(iVar4 + iVar1 * 8 + 4);
      if ((uVar6 & 1) != 0) {
        pcVar3 = *(code **)(pcVar3 + *(int *)(param_1[8] + ((int)uVar6 >> 1)));
      }
      (*pcVar3)((int)(param_1[8]) + ((int)uVar6 >> 1));
    }
  }
  iVar1 = param_1[4];
  *(byte *)(param_1 + 4) = (byte)uVar2 ^ 1;
  param_1[3] = 0;
  *(char *)((int)param_1 + 0x11) = (char)iVar1;
  if (param_1[7] != 0) {
    if ((uint)(int)(char)param_1[4] < (uint)param_1[5]) {
      piVar5 = (int *)(param_1[6] + (char)param_1[4] * 0x24);
    }
    else {
      piVar5 = (int *)param_1[6];
    }
    (**(code **)(*piVar5 + 8))(piVar5);
    local_1c = piVar5[1];
    local_20 = DAT_00428d40;
    func_0010BEB4(param_1[7],&local_20);
  }
  iVar4 = (int)(char)param_1[4];
  iVar1 = param_1[9];
  pcVar3 = *(code **)(iVar1 + iVar4 * 8);
  if ((pcVar3 != (code *)0x0) ||
     ((uVar6 = *(uint *)(iVar1 + iVar4 * 8 + 4), (uVar6 & 1) != 0 && (uVar6 != 0)))) {
    uVar6 = *(uint *)(iVar1 + iVar4 * 8 + 4);
    if ((uVar6 & 1) != 0) {
      pcVar3 = *(code **)(pcVar3 + *(int *)(param_1[8] + ((int)uVar6 >> 1)));
    }
    (*pcVar3)((int)(param_1[8]) + ((int)uVar6 >> 1));
  }
  return func_00428B84((int)param_1,0);
}

