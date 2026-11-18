#include "ghidra_types.h"

extern int func_0014E2A0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5 ,int param_6);
extern int func_0019B04C(uint param_1);
extern int func_002DFF7C(undefined4 *param_1);
extern int func_0034CA20(undefined4 *param_1);
extern int func_00491E80(float *param_1,uint param_2,uint param_3,uint param_4);
extern int func_004A8304(undefined4 param_1,int param_2);
extern int func_004A9120(undefined4 param_1,int param_2);
extern int func_004C4AF4(int param_1,int *param_2,int param_3);
extern int func_004CEAF0(int param_1);
extern int func_004CF478(int param_1,int param_2);
extern undefined4 *puRam001bcc1c;
extern uint *DAT_001bcc20;
extern int *DAT_001bcc24;

// USA 001BC8C8 <- EU 001BC8C8 (Ghidra, non-matching)
// GLOBAL DAT_001bcc20 uint *
// GLOBAL DAT_001bcc24 int *
// GLOBAL UNK_001bcc1c undefined4 *

/* WARNING: Variable defined which should be unmapped: objStack_2f8 */

void func_001BC8C8(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  _Alignas(8) unsigned char albw_frame[0x300];
  #define objStack_2f8 ((uint *)(albw_frame + 0x8))
  iVar5 = 0;
  uVar7 = 0;
  iVar8 = *(int *)(param_1 + 0x620);
  iVar6 = *(int *)(param_1 + 0x624);
  if (iVar8 != 0) {
    do {
      pcVar4 = (char *)(iVar6 + iVar5 * 0xd8);
      cVar1 = *pcVar4;
      iVar9 = *(int *)(pcVar4 + 8);
      if (cVar1 != '\x04') {
        if (uVar7 < *(uint *)(param_1 + 0x478)) {
          iVar10 = *(int *)(*(int *)(param_1 + 0x480) + uVar7 * 4);
        }
        else {
          iVar10 = 0;
        }
        if (cVar1 == '\x01') {
          func_004CF478(iVar9,0);
          iVar9 = iVar6 + iVar5 * 0xd8;
          *(undefined1 *)(iVar6 + iVar5 * 0xd8) = 4;
          puVar2 = puRam001bcc1c;
          if (*(char *)(iVar9 + 0xd4) == '\x01') {
            *(undefined1 *)(iVar9 + 0xd4) = 0;
            func_004A9120(*puVar2,iVar6 + iVar5 * 0xd8 + 0x10);
            func_004A8304(*puVar2,iVar6 + iVar5 * 0xd8 + 0x74);
          }
        }
        else if (cVar1 == '\x02' || cVar1 == '\x03') {
          objStack_2f8[8] = 0;
          objStack_2f8[9] = 0;
          objStack_2f8[7] = 0;
          func_002DFF7C(objStack_2f8);
          objStack_2f8[0] = func_0019B04C(*DAT_001bcc20);
          objStack_2f8[4] = *(uint *)(param_1 + 0x14);
          objStack_2f8[5] = *(uint *)(param_1 + 0x18);
          objStack_2f8[6] = *(uint *)(param_1 + 0x1c);
          iVar10 = *(int *)(iVar6 + iVar5 * 0xd8 + 0xc);
          objStack_2f8[1] = *(uint *)(iVar10 + 4);
          objStack_2f8[3] = *(uint *)(iVar10 + 0xc);
          objStack_2f8[2] = (uint)ALBW_AS_U32((*(float *)(iVar10 + 8) - *(float *)(param_1 + 0x61c)));
          func_004C4AF4(*DAT_001bcc24,(int *)objStack_2f8,0);
          func_004CF478(iVar9,0);
          iVar9 = iVar6 + iVar5 * 0xd8;
          *(undefined1 *)(iVar6 + iVar5 * 0xd8) = 4;
          puVar2 = puRam001bcc1c;
          if (*(char *)(iVar9 + 0xd4) == '\x01') {
            *(undefined1 *)(iVar9 + 0xd4) = 0;
            func_004A9120(*puVar2,iVar6 + iVar5 * 0xd8 + 0x10);
            func_004A8304(*puVar2,iVar6 + iVar5 * 0xd8 + 0x74);
          }
        }
        else {
          *(uint *)(iVar9 + 0x164) = *(uint *)(iVar9 + 0x164) | 0x40000000;
          func_00491E80((float *)(iVar9 + 0x80),0,
                        *(int *)(iVar10 + 0x20) + *(int *)(iVar6 + iVar5 * 0xd8 + 4),0);
          *(uint *)(iVar9 + 0x164) = *(uint *)(iVar9 + 0x164) | 0x40000000;
          *(undefined4 *)(iVar9 + 0x8c) = *(undefined4 *)(iVar10 + 4);
          *(undefined4 *)(iVar9 + 0x9c) = *(undefined4 *)(iVar10 + 8);
          *(undefined4 *)(iVar9 + 0xac) = *(undefined4 *)(iVar10 + 0xc);
          func_004CEAF0(iVar9);
          func_0034CA20(*(undefined4 **)(param_1 + 0x628));
          objStack_2f8[0] = 0;
          objStack_2f8[1] = 0;
          func_0014E2A0(param_1,*(undefined4 *)(iVar6 + iVar5 * 0xd8 + 0xc),param_1 + 0x62c,0x1000,0
                        ,0);
          piVar3 = *(int **)(param_1 + 0x628);
          if (*piVar3 != 0) {
            cVar1 = *(char *)((int)piVar3 + 0x21);
            if ((cVar1 == '\x01') ||
               ((cVar1 == '\x03' && (*(char *)((int)piVar3 + 0x23) == '\x01')))) {
              *(undefined1 *)(iVar6 + iVar5 * 0xd8) = 3;
            }
            else if (cVar1 == '\x0f') {
              *(undefined1 *)(iVar6 + iVar5 * 0xd8) = 2;
            }
          }
        }
      }
      iVar5 = iVar5 + 1;
      uVar7 = uVar7 + 1;
    } while (iVar5 != iVar8);
  }
  return;
}

