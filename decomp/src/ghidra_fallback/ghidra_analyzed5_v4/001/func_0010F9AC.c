#include "ghidra_types.h"

extern int func_00110080(int *param_1,int param_2,undefined4 param_3);
extern int func_001100CC(int *param_1,int param_2,undefined4 param_3);
extern int func_00110118(int param_1,int param_2);
extern int func_001101DC(int *param_1,int param_2,uint *param_3,undefined4 param_4);
extern int func_00110244(int *param_1,int param_2,uint *param_3,undefined4 param_4);
extern int func_00110318(int *param_1,uint *param_2);

// USA 0010F9AC <- EU 0010F9AC (Ghidra, non-matching)

void func_0010F9AC(int param_1,uint *param_2,int param_3,int param_4)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define aiStack_28 ((int *)(albw_frame + 0x8))
  piVar8 = (int *)(*(int *)(param_1 + 0x24) + param_4 * 0xc);
  if (param_1 != 0) {
    piVar6 = *(int **)(*(int *)(param_1 + 0xc) + 0xc);
    iVar2 = func_00110318(piVar6,param_2);
    iVar3 = *piVar8;
    if ((iVar3 != 0) && (iVar5 = (int)*(short *)(iVar3 + 8), iVar5 <= *(short *)(iVar3 + 10))) {
      do {
        iVar3 = piVar6[5] + iVar5 * 0x3c;
        if (-1 < *(short *)(iVar3 + 0x1a)) {
          func_00110118(param_1,iVar3);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 <= *(short *)(*piVar8 + 10));
    }
    piVar8[1] = param_3;
    *piVar8 = iVar2;
    piVar8[2] = param_3;
    if (iVar2 != 0) {
      iVar3 = (int)*(short *)(iVar2 + 8);
      iVar5 = *(int *)(param_1 + 0x34);
      iVar7 = *(int *)(*(int *)(param_1 + 0xc) + 0xc);
      if (iVar3 <= *(short *)(iVar2 + 10)) {
        do {
          iVar2 = *(int *)(iVar7 + 0x14);
          *(undefined1 *)(iVar5 + iVar3) = 0;
          iVar2 = iVar2 + iVar3 * 0x3c;
          if ((*(int *)(iVar2 + 0x10) <= piVar8[1]) &&
             (*(int *)(iVar2 + 0x14) < 0 || piVar8[1] < *(int *)(iVar2 + 0x14))) {
            uVar1 = *(ushort *)(iVar2 + 0x18);
            if ((uVar1 & 0x10) == 0) {
              puVar4 = *(uint **)(*(int *)(iVar2 + 0xc) + 4);
              if ((uVar1 & 8) == 0) {
                func_00110244(aiStack_28,param_1,puVar4,iVar2);
              }
              else {
                func_001101DC(aiStack_28,param_1,puVar4,iVar2);
              }
            }
            else if ((uVar1 & 8) == 0) {
              func_001100CC(aiStack_28,param_1,iVar2);
            }
            else {
              func_00110080(aiStack_28,param_1,iVar2);
            }
            *(undefined1 *)(iVar5 + iVar3) = 1;
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 <= *(short *)(*piVar8 + 10));
      }
    }
    return;
  }
  return;
}

