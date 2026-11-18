#include "ghidra_types.h"

extern int func_00110080(int *param_1,int param_2,undefined4 param_3);
extern int func_001100CC(int *param_1,int param_2,undefined4 param_3);
extern int func_00110118(int param_1,int param_2);
extern int func_001101DC(int *param_1,int param_2,uint *param_3,undefined4 param_4);
extern int func_00110244(int *param_1,int param_2,uint *param_3,undefined4 param_4);

// USA 004A6354 <- EU 004A632C (Ghidra, non-matching)

void func_004A6354(int *param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define aiStack_28 ((int *)(albw_frame + 0x8))
  iVar2 = *param_1;
  if (iVar2 != 0) {
    iVar7 = *(int *)(param_2 + 0x34);
    iVar6 = *(int *)(*(int *)(param_2 + 0xc) + 0xc);
    if (param_1[1] < param_1[2]) {
      param_1[2] = param_1[1] + -1;
    }
    iVar5 = (int)*(short *)(iVar2 + 8);
    if (iVar5 <= *(short *)(iVar2 + 10)) {
      do {
        iVar2 = *(int *)(iVar6 + 0x14) + iVar5 * 0x3c;
        uVar3 = *(uint *)(iVar2 + 0x10);
        if ((param_1[1] < (int)uVar3) ||
           (-1 < *(int *)(iVar2 + 0x14) && *(int *)(iVar2 + 0x14) <= param_1[1])) {
          bVar8 = (*(ushort *)(iVar2 + 0x18) & 8) != 0;
          if (bVar8) {
            uVar3 = (uint)*(byte *)(iVar7 + iVar5);
          }
          if (bVar8 && uVar3 != 0) {
            if ((*(ushort *)(iVar2 + 0x18) & 0x10) == 0) {
              func_001101DC(aiStack_28,param_2,*(uint **)(*(int *)(iVar2 + 0xc) + 4),iVar2);
            }
            else {
              func_00110080(aiStack_28,param_2,iVar2);
            }
          }
        }
        else {
          uVar1 = *(ushort *)(iVar2 + 0x18);
          if ((uVar1 & 8) == 0) {
            if (param_1[2] < (int)uVar3) {
              bVar8 = (uVar1 & 1) != 0;
              if (bVar8) {
                uVar3 = (uint)*(byte *)(iVar7 + iVar5);
              }
              if (!bVar8 || uVar3 == 0) goto LAB_004a63cc;
            }
          }
          else {
LAB_004a63cc:
            if ((uVar1 & 0x10) == 0) {
              puVar4 = *(uint **)(*(int *)(iVar2 + 0xc) + 4);
              if ((uVar1 & 8) == 0) {
                func_00110244(aiStack_28,param_2,puVar4,iVar2);
              }
              else {
                func_001101DC(aiStack_28,param_2,puVar4,iVar2);
              }
            }
            else if ((uVar1 & 8) == 0) {
              func_001100CC(aiStack_28,param_2,iVar2);
            }
            else {
              func_00110080(aiStack_28,param_2,iVar2);
            }
            *(undefined1 *)(iVar7 + iVar5) = 1;
          }
        }
        if ((param_1[2] < *(int *)(iVar2 + 0x14)) && (*(int *)(iVar2 + 0x14) <= param_1[1])) {
          func_00110118(param_2,iVar2);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 <= *(short *)(*param_1 + 10));
    }
  }
  param_1[2] = param_1[1];
  return;
}

