#include "ghidra_types.h"

extern int func_0010BEB4(int param_1,int *param_2);
extern int func_00111A64(uint *param_1);
extern longlong func_003B0D50(undefined4 param_1,short *param_2);
extern int func_00543170(int param_1);
extern int func_0058A7D4(void);
extern int DAT_003b81c4;

// USA 003B7F94 <- EU 003B7F70 (Ghidra, non-matching)
// GLOBAL DAT_003b81c4 int

undefined4 func_003B7F94(int *param_1,undefined4 param_2,undefined4 param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  ushort uVar5;
  code *pcVar6;
  int iVar7;
  int *piVar8;
  bool bVar9;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(int *)(albw_frame + 0x0))
  #define local_2c (*(int *)(albw_frame + 0x4))
  #define piStack_24 (*(int * *)(albw_frame + 0xc))
  #define local_20 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x14))
  (*(undefined2 *)((char *)&local_20 + 0)) = (short)param_2;
  iVar3 = (int)(short)local_20;
  piStack_24 = param_1;
  local_20 = param_2;
  uStack_1c = param_3;
  iVar3 = (**(code **)(*param_1 + 0x13c))(param_1,iVar3);
  if (iVar3 == 0) {
    return 0;
  }
  if ((short)local_20 == 5) {
    local_20 = CONCAT22((*(undefined2 *)((char *)&local_20 + 2)),10);
  }
  iVar3 = func_00543170(param_1[0x12]);
  if ((iVar3 != 0) && ((short)local_20 == 0 || (short)local_20 == 2)) {
    local_20 = CONCAT22((*(undefined2 *)((char *)&local_20 + 2)),1);
  }
  if ((short)local_20 == 10) {
    uVar5 = (ushort)*(byte *)(param_1[0x12] + 0x936);
    bVar9 = uVar5 == 2;
    if (bVar9) {
      uVar5 = *(ushort *)(param_1 + 0x24);
    }
    if (bVar9 && uVar5 == 0) {
      local_20 = CONCAT22((*(undefined2 *)((char *)&local_20 + 2)),0xb);
      if (*(char *)(*(int *)(param_1[0x12] + 0x8bc) + 4) == '\0') {
        uVar4 = 0xb;
      }
      else {
        uVar4 = 0xd;
      }
      (**(code **)(*param_1 + 0x138))(param_1,uVar4,1);
      func_003B0D50(param_1,(short *)&local_20);
      return 1;
    }
  }
  if (((short)local_20 == 0) && (*(char *)(param_1[0x12] + 0xb35) != '\0')) {
    puVar1 = (uint *)func_0058A7D4();
    uVar2 = func_00111A64(puVar1);
    if ((uint)((ulonglong)uVar2 * 0x65 >> 0x20) < 0x33) {
      local_20 = CONCAT22((*(undefined2 *)((char *)&local_20 + 2)),2);
    }
    else {
      local_20 = CONCAT22((*(undefined2 *)((char *)&local_20 + 2)),1);
    }
  }
  *(undefined1 *)(param_1 + 0x27) = 0;
  func_003B0D50(param_1,(short *)&local_20);
  uVar4 = local_20;
  iVar3 = (int)(char)param_1[0x1c];
  if (iVar3 != -1) {
    iVar7 = param_1[0x23];
    pcVar6 = *(code **)(iVar7 + iVar3 * 8);
    if ((pcVar6 != (code *)0x0) ||
       ((uVar2 = *(uint *)(iVar7 + iVar3 * 8 + 4), (uVar2 & 1) != 0 && (uVar2 != 0)))) {
      uVar2 = *(uint *)(iVar7 + iVar3 * 8 + 4);
      if ((uVar2 & 1) != 0) {
        pcVar6 = *(code **)(pcVar6 + *(int *)(param_1[0x20] + ((int)uVar2 >> 1)));
      }
      (*pcVar6)((int)(param_1[0x20]) + ((int)uVar2 >> 1));
    }
  }
  iVar3 = param_1[0x1c];
  *(char *)(param_1 + 0x1c) = (char)uVar4;
  param_1[0x1b] = 0;
  *(char *)((int)param_1 + 0x71) = (char)iVar3;
  if (param_1[0x1f] != 0) {
    if ((uint)(int)(char)param_1[0x1c] < (uint)param_1[0x1d]) {
      piVar8 = (int *)(param_1[0x1e] + (char)param_1[0x1c] * 0x24);
    }
    else {
      piVar8 = (int *)param_1[0x1e];
    }
    (**(code **)(*piVar8 + 8))(piVar8);
    local_2c = piVar8[1];
    local_30 = DAT_003b81c4;
    func_0010BEB4(param_1[0x1f],&local_30);
  }
  iVar7 = (int)(char)param_1[0x1c];
  iVar3 = param_1[0x21];
  pcVar6 = *(code **)(iVar3 + iVar7 * 8);
  if ((pcVar6 != (code *)0x0) ||
     ((uVar2 = *(uint *)(iVar3 + iVar7 * 8 + 4), (uVar2 & 1) != 0 && (uVar2 != 0)))) {
    uVar2 = *(uint *)(iVar3 + iVar7 * 8 + 4);
    if ((uVar2 & 1) != 0) {
      pcVar6 = *(code **)(pcVar6 + *(int *)(param_1[0x20] + ((int)uVar2 >> 1)));
    }
    (*pcVar6)((int)(param_1[0x20]) + ((int)uVar2 >> 1));
  }
  return 1;
}

