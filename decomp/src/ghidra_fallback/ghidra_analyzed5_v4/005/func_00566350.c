#include "ghidra_types.h"

extern int func_00114F58(float *param_1,float *param_2);
extern int func_003FB500(uint *param_1,int *param_2,uint param_3,int param_4,...);
extern int func_00566750(int param_1,int param_2);
extern uint DAT_005664dc;

// USA 00566350 <- EU 00566328 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// GLOBAL DAT_005664dc uint

void func_00566350(int *param_1,int param_2,byte *param_3,int param_4,int param_5)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined2 *puVar5;
  int iVar6;
  uint *puVar7;
  undefined2 *puVar8;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define local_68 (*(int *)(albw_frame + 0x8))
  #define local_64 (*(int *)(albw_frame + 0xc))
  #define local_60 (*(uint *)(albw_frame + 0x10))
  #define uStack_5c (*(uint *)(albw_frame + 0x14))
  #define local_58 (*(uint *)(albw_frame + 0x18))
  #define local_54 (*(uint *)(albw_frame + 0x1c))
  #define local_34 (*(int * *)(albw_frame + 0x3c))
  #define iStack_30 (*(int *)(albw_frame + 0x40))
  #define pbStack_2c (*(byte * *)(albw_frame + 0x44))
  #define iStack_28 (*(int *)(albw_frame + 0x48))
  local_64 = *(int *)(param_5 + 8) + param_4;
  local_68 = param_4;
  local_34 = param_1;
  iStack_30 = param_2;
  pbStack_2c = param_3;
  iStack_28 = param_4;
  func_003FB500(&local_58,&local_68,*(uint *)(param_5 + 0x2c),4);
  *(uint *)(param_3 + 4) = local_58;
  *(uint *)(param_3 + 8) = local_54 >> 1;
  for (uVar2 = 0; uVar2 < local_54 >> 1; uVar2 = uVar2 + 1) {
  }
  func_003FB500(&local_58,&local_68,*(uint *)(param_5 + 0x34),4);
  uVar2 = local_54 >> 6;
  *(uint *)(param_3 + 0xc) = local_58;
  *(uint *)(param_3 + 0x10) = uVar2;
  uVar3 = 0;
  if (uVar2 != 0) {
    do {
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  func_003FB500(&local_58,&local_68,*(uint *)(param_5 + 0x3c),4);
  uVar3 = DAT_005664dc;
  *(uint *)(param_3 + 0x14) = local_58;
  uVar2 = (uint)((ulonglong)local_54 * (ulonglong)uVar3 >> 0x25);
  *(uint *)(param_3 + 0x18) = uVar2;
  for (uVar4 = 0; uVar4 < uVar2; uVar4 = uVar4 + 1) {
  }
  if (*(char *)(param_2 + 1) == '\x02') {
    func_003FB500(&local_60,&local_68,*(uint *)(param_5 + 0x44),4);
    *(uint *)(param_3 + 0x1c) = local_60;
    uVar2 = (uint)((ulonglong)uStack_5c * (ulonglong)uVar3 >> 0x23);
    *(uint *)(param_3 + 0x20) = uVar2;
    for (uVar3 = 0; uVar3 < uVar2; uVar3 = uVar3 + 1) {
    }
  }
  puVar5 = *(undefined2 **)(param_3 + 4);
  iVar6 = 0;
  bVar1 = false;
  puVar8 = puVar5 + *(int *)(param_3 + 8);
  while (puVar5 != puVar8) {
    puVar7 = (uint *)(*(int *)(param_2 + 0x70) + iVar6 * 100);
    *puVar5 = (short)puVar7[1];
    func_00114F58((float *)(*(int *)(param_3 + 0x14) + iVar6 * 0x30),(float *)(puVar7 + 0xb));
    puVar5 = puVar5 + 1;
    iVar6 = iVar6 + 1;
    if ((*puVar7 & 0x70000) != 0) {
      bVar1 = true;
    }
  }
  func_00566750(param_2,(int)param_3);
  param_3[1] = *(byte *)(param_2 + 1);
  if (bVar1) {
    *param_3 = *param_3 | 1;
  }
  *local_34 = local_68;
  local_34[1] = 0;
  return;
}

