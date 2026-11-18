#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0010B3EC(undefined4 *param_1,int param_2,int param_3);
extern int func_004A8930(int param_1,float *param_2,int *param_3,uint param_4);
extern int func_004ED9F4(int param_1,int param_2,int param_3,int param_4);
extern int func_00589A64(int param_1);
extern int DAT_004a8534;
extern uint *DAT_004a8538;

// USA 004A8334 <- EU 004A830C (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 uint
// GLOBAL DAT_004a8534 int
// GLOBAL DAT_004a8538 uint *

void func_004A8334(int param_1,int param_2,int param_3,int param_4,uint param_5)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  bool bVar12;
  uint local_4c;
  
  iVar1 = DAT_004a8534;
  if (((*(uint *)(DAT_004a8534 + 0x14) & 1) == 0) &&
     (iVar3 = func_00100174((int *)(DAT_004a8534 + 0x14)), puVar2 = DAT_004a8538, iVar3 != 0)) {
    puVar7 = DAT_004a8538 + 3;
    *DAT_004a8538 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    func_0010B3EC(puVar2,9,(int)puVar7);
  }
  local_4c = 5;
  do {
    if ((param_5 & 1 << (local_4c & 0xff)) != 0) {
      iVar10 = *(int *)(param_1 + 0xbf48);
      for (iVar3 = *(int *)(param_1 + 0xbf40) - iVar10; puVar2 = DAT_004a8538,
          iVar3 != (param_1 + 0xbf3c) - *(int *)(param_1 + 0xbf48);
          iVar3 = *(int *)(iVar3 + iVar10 + 4) - iVar10) {
        iVar6 = iVar3 + 0xb4;
        iVar4 = iVar3 + 0xb4;
        if (local_4c < 6) {
          iVar6 = iVar6 + local_4c * 0xc;
          iVar4 = iVar3 + 0xb4 + local_4c * 0xc;
        }
        for (iVar4 = *(int *)(iVar4 + 4); iVar4 != iVar6; iVar4 = *(int *)(iVar4 + 4)) {
          iVar5 = *(int *)(iVar4 + 8);
          *(int *)(iVar1 + 8) = iVar5;
          uVar9 = *(uint *)(iVar5 + 0x20);
          bVar12 = *(uint *)(param_2 + 0xc) != uVar9;
          if (bVar12) {
            uVar9 = (uint)*(byte *)(iVar5 + 0x44);
          }
          if ((bVar12 && uVar9 != 0) && (bVar12 = func_00589A64(iVar5), bVar12)) {
            func_004ED9F4(*(int *)(iVar4 + 8),param_2,param_3,param_4);
          }
          *(undefined4 *)(iVar1 + 8) = 0;
        }
      }
      *DAT_004a8538 = 0;
      func_004A8930(param_1,(float *)(param_4 + 4),(int *)puVar2,local_4c);
      uVar11 = *puVar2;
      uVar9 = 0;
      if (0 < (int)uVar11) {
        do {
          if (uVar9 < *DAT_004a8538) {
            iVar3 = *(int *)(DAT_004a8538[2] + uVar9 * 4);
            iVar10 = *(int *)(DAT_004a8538[2] + uVar9 * 4);
          }
          else {
            iVar3 = 0;
            iVar10 = 0;
          }
          for (iVar10 = *(int *)(iVar10 + 4); iVar10 != iVar3; iVar10 = *(int *)(iVar10 + 4)) {
            iVar6 = *(int *)(iVar10 + 8);
            *(int *)(iVar1 + 8) = iVar6;
            uVar8 = *(uint *)(iVar6 + 0x20);
            bVar12 = *(uint *)(param_2 + 0xc) != uVar8;
            if (bVar12) {
              uVar8 = (uint)*(byte *)(iVar6 + 0x44);
            }
            if ((bVar12 && uVar8 != 0) && (bVar12 = func_00589A64(iVar6), bVar12)) {
              func_004ED9F4(*(int *)(iVar10 + 8),param_2,param_3,param_4);
            }
            *(undefined4 *)(iVar1 + 8) = 0;
          }
          uVar9 = uVar9 + 1;
        } while ((int)uVar9 < (int)uVar11);
      }
    }
    local_4c = local_4c - 1;
  } while (-1 < (int)local_4c);
  return;
}

