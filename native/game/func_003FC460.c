/* USA 003FC460 (EU 003FC440): nw::h3d material <-> texture/shader binding. Ghidra text with
 * one fix: the call to 003FC354 lost r3 and its 4 stack arguments (EU 003FC71C..003FC744).
 * Rest unchanged. Confidence: high. */
#include "ghidra_types.h"

extern int func_00103CBC(char *param_1);
extern int func_0010FBAC(uint *param_1,uint *param_2);
extern int func_003CD3DC(undefined4 *param_1);
extern int func_003FC354();
extern int func_00564ABC(short *param_1,uint *param_2,uint param_3);

// USA 003FC460 <- EU 003FC440 (Ghidra, non-matching)

uint func_003FC460(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  uint *puVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  _Alignas(8) unsigned char albw_frame[0x120];
  #define local_114 ((int * *)(albw_frame + 0xc))
  #define auStack_108 ((uint *)(albw_frame + 0x18))
  #define auStack_cc ((undefined1 *)(albw_frame + 0x54))
  #define auStack_a8 ((undefined1 *)(albw_frame + 0x78))
  #define local_60 (*(int * *)(albw_frame + 0xc0))
  #define local_50 (*(uint *)(albw_frame + 0xd0))
  #define local_4c ((uint * *)(albw_frame + 0xd4))
  #define local_3c (*(undefined1 * *)(albw_frame + 0xe4))
  #define local_34 (*(int *)(albw_frame + 0xec))
  #define iStack_30 (*(int *)(albw_frame + 0xf0))
  #define local_2c (*(undefined4 *)(albw_frame + 0xf4))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0xf8))
  local_50 = 0;
  piVar9 = *(int **)(param_1 + 0x34);
  local_60 = piVar9 + (uint)*(ushort *)(param_1 + 0x38) * 0xb;
  if (piVar9 != local_60) {
    local_4c[3] = (uint *)auStack_cc;
    local_3c = auStack_a8;
    local_34 = param_1;
    iStack_30 = param_2;
    local_2c = param_3;
    uStack_28 = param_4;
    do {
      iVar11 = *piVar9;
      if (iVar11 != 0) {
        if (*(int *)(iVar11 + 8) == 0) {
          iVar1 = *(int *)(param_2 + 0x30);
          puVar6 = *(uint **)(iVar11 + 0x104);
          uVar2 = func_00103CBC((char *)puVar6);
          uVar2 = func_00564ABC((short *)(iVar1 + 0x1c),puVar6,uVar2);
          if (uVar2 == 0xffff) {
            local_50 = local_50 | 0x80000010;
          }
          else {
            *(undefined4 *)(iVar11 + 8) =
                 *(undefined4 *)(*(int *)(*(int *)(param_2 + 0x30) + 0x18) + uVar2 * 4);
          }
        }
        iVar1 = 0;
        do {
          iVar10 = iVar11 + iVar1 * 4;
          if (((*(int *)(iVar10 + 0x8c) == 0) &&
              (puVar6 = *(uint **)(iVar10 + 0xd4), puVar6 != (uint *)0x0)) &&
             (*(int *)(iVar10 + 0xec) != 0)) {
            iVar4 = *(int *)(param_2 + 0x30);
            uVar2 = func_00103CBC((char *)puVar6);
            uVar2 = func_00564ABC((short *)(iVar4 + 0x34),puVar6,uVar2);
            if (uVar2 == 0xffff) {
              local_50 = local_50 | 0x80000020;
            }
            else {
              puVar6 = *(uint **)(iVar10 + 0xec);
              piVar8 = *(int **)(*(int *)(*(int *)(param_2 + 0x30) + 0x30) + uVar2 * 4);
              if (puVar6 == (uint *)0x0) {
LAB_003fc5b0:
                iVar4 = 0;
              }
              else {
                iVar4 = *piVar8;
                iVar7 = iVar4 + piVar8[1] * 0x10;
                while ((iVar4 != iVar7 &&
                       (uVar2 = func_0010FBAC(*(uint **)(iVar4 + 0xc),puVar6), uVar2 != 0))) {
                  iVar4 = iVar4 + 0x10;
                }
                if (iVar4 == *piVar8 + piVar8[1] * 0x10) goto LAB_003fc5b0;
              }
              *(int *)(iVar10 + 0x8c) = iVar4;
            }
          }
          iVar1 = iVar1 + 1;
        } while (iVar1 < 6);
      }
      func_003CD3DC(auStack_108);
      local_4c[0] = auStack_108;
      local_4c[1] = local_4c[3];
      iVar11 = 0;
      local_4c[2] = (uint *)local_3c;
      uVar2 = 0;
      local_114[0] = piVar9 + 1;
      local_114[1] = piVar9 + 2;
      local_114[2] = piVar9 + 3;
      do {
        piVar8 = local_114[uVar2];
        if ((*piVar8 == 0) && (puVar6 = (uint *)piVar9[uVar2 + 7], puVar6 != (uint *)0x0)) {
          iVar1 = *(int *)(param_2 + 0x30);
          uVar3 = func_00103CBC((char *)puVar6);
          uVar3 = func_00564ABC((short *)(iVar1 + 0x28),puVar6,uVar3);
          if (uVar3 == 0xffff) {
            local_50 = local_50 | 0x80000008;
          }
          else {
            iVar11 = iVar11 + 1;
            *piVar8 = *(int *)(*(int *)(*(int *)(param_2 + 0x30) + 0x24) + uVar3 * 4);
          }
        }
        iVar1 = *piVar8;
        puVar5 = (undefined1 *)(piVar9[6] + uVar2 * 0x10);
        puVar6 = local_4c[uVar2];
        if (iVar1 != 0) {
          *(undefined1 *)(puVar6 + 2) = *(undefined1 *)(iVar1 + 0x18);
          *(undefined1 *)((int)puVar6 + 10) = puVar5[1];
          *(undefined1 *)((int)puVar6 + 9) = puVar5[2];
          *(undefined1 *)((int)puVar6 + 0xb) = puVar5[3];
          *(undefined1 *)(puVar6 + 3) = puVar5[4];
          puVar6[4] = *(uint *)(puVar5 + 8);
          *(undefined1 *)(puVar6 + 5) = puVar5[5];
          *(char *)((int)puVar6 + 0x15) = *(char *)(iVar1 + 0x19) + -1;
          *(undefined1 *)((int)puVar6 + 0x16) = puVar5[0xc];
          *(undefined1 *)((int)puVar6 + 0x17) = puVar5[0xd];
          *(undefined1 *)(puVar6 + 6) = puVar5[0xe];
          *(undefined1 *)((int)puVar6 + 0x19) = puVar5[0xf];
          if (uVar2 < 3) {
            *(undefined1 *)(puVar6 + 7) = *puVar5;
          }
        }
        uVar2 = uVar2 + 1;
      } while ((int)uVar2 < 3);
      if (iVar11 != 0) {
        func_003FC354(local_34,piVar9 + 4,auStack_108,piVar9[6],piVar9[6] + 0x10,piVar9[6] + 0x20,
                      param_3,param_4);  /* EU 003FC71C..003FC744: r3 and 4 stack args */
      }
      piVar9 = piVar9 + 0xb;
    } while (piVar9 != local_60);
  }
  return local_50;
}

