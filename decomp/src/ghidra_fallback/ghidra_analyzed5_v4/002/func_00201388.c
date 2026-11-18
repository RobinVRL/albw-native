#include "ghidra_types.h"

extern int func_0010BEB4(int param_1,int *param_2);
extern int func_00291E20(int param_1,int param_2);
extern int func_004FC244(int *param_1,int *param_2,int param_3,undefined4 param_4,int param_5);
extern int func_0053F7A8(int param_1);
extern int func_00588BE4(int param_1);
extern int *DAT_002015e0;
extern int *DAT_002015e4;
extern uint DAT_002015e8;

// USA 00201388 <- EU 00201388 (Ghidra, non-matching)
// GLOBAL DAT_002015e0 int *
// GLOBAL DAT_002015e4 int *
// GLOBAL DAT_002015e8 uint

/* WARNING: Variable defined which should be unmapped: objStack_28 */

uint func_00201388(int *param_1,uint param_2,int param_3)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  code *pcVar6;
  int iVar7;
  bool bVar8;
  bool bVar9;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define objStack_28 ((uint *)(albw_frame + 0x8))
  if (param_2 == 3) {
    return 0;
  }
  iVar3 = func_00588BE4((int)param_1);
  piVar2 = DAT_002015e4;
  piVar5 = DAT_002015e0;
  if (iVar3 == *DAT_002015e0) {
    bVar8 = (short)param_1[0x142] == 0;
    if ((short)param_1[0x142] < 1) {
      bVar8 = param_2 == 0x1f;
    }
    if (bVar8) {
      return 0x11;
    }
  }
  cVar1 = *(char *)(param_3 + 0x24);
  if (((*DAT_002015e4 != 0) && (iVar3 = func_0053F7A8(*DAT_002015e4), iVar3 == 0)) &&
     (*(char *)(param_1[0x108] + 0x22) == '\x06')) {
    if (cVar1 == '\x05') {
      if (*(char *)(param_3 + 0x28) != '\x04') goto LAB_00201540;
    }
    else {
      if (cVar1 == '\b') {
LAB_00201540:
        func_00291E20(*piVar2,-(uint)*(ushort *)(param_1[0x108] + 0x30));
        return 0;
      }
      if (cVar1 == '\x11') {
        return 0;
      }
    }
  }
  iVar3 = func_00588BE4((int)param_1);
  if ((iVar3 == *piVar5) && (0 < (short)param_1[0x142])) {
    uVar4 = param_2 & 0xff;
    bVar8 = 0x1d < uVar4;
    bVar9 = uVar4 != 0x1e;
    if (bVar9) {
      uVar4 = uVar4 - 0xe;
      bVar8 = 2 < uVar4;
    }
    if (!bVar8 || (!bVar9 || uVar4 == 3)) {
      objStack_28[0] = 1;
      func_004FC244(param_1,(int *)param_1[0x10f],0xc,1,1);
      iVar3 = (int)(char)param_1[0x238];
      if (iVar3 != 0) {
        if (iVar3 != -1) {
          iVar7 = param_1[0x23f];
          pcVar6 = *(code **)(iVar7 + iVar3 * 8);
          if ((pcVar6 != (code *)0x0) ||
             (uVar4 = *(uint *)(iVar7 + iVar3 * 8 + 4), (uVar4 & 1) != 0 && uVar4 != 0)) {
            uVar4 = *(uint *)(iVar7 + iVar3 * 8 + 4);
            piVar5 = (int *)(param_1[0x23c] + ((int)uVar4 >> 1));
            if ((uVar4 & 1) != 0) {
              pcVar6 = *(code **)(pcVar6 + *piVar5);
            }
            (*pcVar6)(piVar5,0);
          }
        }
        iVar3 = param_1[0x238];
        *(undefined1 *)(param_1 + 0x238) = 0;
        param_1[0x237] = 0;
        *(char *)((int)param_1 + 0x8e1) = (char)iVar3;
        if (param_1[0x23b] != 0) {
          piVar5 = (int *)param_1[0x23a];
          (**(code **)(*piVar5 + 8))(piVar5);
          objStack_28[1] = piVar5[1];
          objStack_28[0] = DAT_002015e8;
          func_0010BEB4(param_1[0x23b],(int *)objStack_28);
        }
        iVar7 = (int)(char)param_1[0x238];
        iVar3 = param_1[0x23d];
        pcVar6 = *(code **)(iVar3 + iVar7 * 8);
        if ((pcVar6 != (code *)0x0) ||
           ((uVar4 = *(uint *)(iVar3 + iVar7 * 8 + 4), (uVar4 & 1) != 0 && (uVar4 != 0)))) {
          uVar4 = *(uint *)(iVar3 + iVar7 * 8 + 4);
          if ((uVar4 & 1) != 0) {
            pcVar6 = *(code **)(pcVar6 + *(int *)(param_1[0x23c] + ((int)uVar4 >> 1)));
          }
          (*pcVar6)((int)(param_1[0x23c]) + ((int)uVar4 >> 1));
        }
      }
      param_1[0x24e] = 0x18;
      return 0;
    }
  }
  param_1[0x168] = param_1[0x168] | 0x80;
  return param_2;
}

