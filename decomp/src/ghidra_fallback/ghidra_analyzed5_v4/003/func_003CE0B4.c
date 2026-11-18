#include "ghidra_types.h"

extern int func_003CDD84(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4);
extern int func_003CDE88(void);
extern int func_003D3554(longlong *param_1,int *param_2);
extern int func_003D3588(longlong *param_1,int param_2,int param_3,int param_4,int param_5,int param_6, int param_7,int param_8);
extern int func_003D35F8(undefined4 *param_1);
extern int func_00564398(int *param_1,uint *param_2);
extern uint DAT_003ce448;
extern uint DAT_003ce44c;
extern uint DAT_003ce450;
extern uint DAT_003ce454;
extern uint DAT_003ce458;

// USA 003CE0B4 <- EU 003CE090 (Ghidra, non-matching)
// GLOBAL DAT_003ce448 uint
// GLOBAL DAT_003ce44c uint
// GLOBAL DAT_003ce450 uint
// GLOBAL DAT_003ce454 uint
// GLOBAL DAT_003ce458 uint

/* WARNING: Variable defined which should be unmapped: objStack_a0 */

void func_003CE0B4(int param_1)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  ushort *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  _Alignas(8) unsigned char albw_frame[0xa0];
  #define objStack_a0 ((uint *)(albw_frame + 0x0))
  #define local_90 (*(uint *)(albw_frame + 0x10))
  #define uStack_8c (*(undefined4 *)(albw_frame + 0x14))
  #define local_88 (*(uint *)(albw_frame + 0x18))
  #define uStack_84 (*(uint *)(albw_frame + 0x1c))
  #define local_7c (*(uint *)(albw_frame + 0x24))
  #define local_78 (*(uint *)(albw_frame + 0x28))
  #define local_74 (*(int *)(albw_frame + 0x2c))
  #define local_70 (*(undefined4 *)(albw_frame + 0x30))
  #define local_6c (*(uint *)(albw_frame + 0x34))
  #define local_68 (*(undefined4 *)(albw_frame + 0x38))
  #define local_64 (*(undefined4 *)(albw_frame + 0x3c))
  #define local_60 (*(undefined4 *)(albw_frame + 0x40))
  #define local_5c ((ushort *)(albw_frame + 0x44))
  #define local_58 (*(uint *)(albw_frame + 0x48))
  #define local_32 (*(ushort *)(albw_frame + 0x6e))
  #define local_30 (*(uint *)(albw_frame + 0x70))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x74))
  func_003D35F8(&local_90);
  local_30 = local_90;
  uStack_2c = uStack_8c;
  func_00564398((int *)objStack_a0,&local_30);
  local_6c = objStack_a0[0];
  local_68 = objStack_a0[1] & 0xffffff;
  local_64 = 0;
  func_003D3554((longlong *)objStack_a0,(int *)&local_6c);
  uVar2 = objStack_a0[1];
  uVar3 = objStack_a0[0];
  objStack_a0[0] = 0;
  objStack_a0[1] = 0;
  objStack_a0[2] = 0;
  objStack_a0[3] = 0;
  func_003D3588((longlong *)&local_88,(int)*(short *)(param_1 + 0x10),(int)*(char *)(param_1 + 0x12)
                ,(int)*(char *)(param_1 + 0x13),0,0,0,0);
  uVar9 = local_88;
  objStack_a0[3] = func_003CDE88();
  local_78 = uVar9;
  local_7c = uStack_84;
  if ((int)(uVar2 - (uStack_84 + (uVar3 < uVar9))) < 0 ==
      (SBORROW4(uVar2,uStack_84) != SBORROW4(uVar2 - uStack_84,(uint)(uVar3 < uVar9)))) {
    uVar7 = *(uint *)(param_1 + 8);
    bVar13 = objStack_a0[3] <= uVar7;
    if (uVar7 <= objStack_a0[3]) {
      bVar13 = 299 < *(ushort *)(param_1 + 4);
    }
    if ((!bVar13) && ((uVar3 != uVar9 || uVar2 != uStack_84 || (*(ushort *)(param_1 + 6) < 10)))) {
      uVar10 = uStack_84;
      if (objStack_a0[3] - uVar7 < 100) {
        return;
      }
      for (; (int)(uVar2 - (uVar10 + (uVar3 < uVar9))) < 0 ==
             (SBORROW4(uVar2,uVar10) != SBORROW4(uVar2 - uVar10,(uint)(uVar3 < uVar9)));
          uVar10 = uVar10 + (iVar5 >> 0x12) + (uint)CARRY4(uVar7,-local_74) + (uint)bVar13) {
        func_003CDD84(&local_60,0x18,uVar9,uVar10);
        uVar7 = local_60 & 0xffff;
        iVar5 = 0;
        iVar8 = 0xb;
        puVar4 = (ushort *)&local_60;
        do {
          uVar7 = uVar7 + (*(undefined2 *)((char *)&local_60 + 2));
          (*(undefined2 *)((char *)&local_60 + 2)) = puVar4[3];
          iVar8 = iVar8 + -1;
          iVar5 = iVar5 + (uint)puVar4[2];
          puVar4 = puVar4 + 2;
        } while (iVar8 != 0);
        uVar11 = 0;
        uVar12 = (uint)local_32 + uVar7 + iVar5;
        uVar7 = 0;
        if (local_78 == uVar9 && uVar10 == local_7c) {
          uVar11 = (uint)*(ushort *)(param_1 + 6);
          uVar7 = *(uint *)(param_1 + 0xc) & 0xffff;
        }
        iVar5 = -(uint)(uVar12 < uVar7);
        if ((int)-(iVar5 + (uint)(uVar12 != uVar7)) < 0 ==
            (SBORROW4(0,iVar5) != SBORROW4((uint)(uVar12 < uVar7),(uint)(uVar12 != uVar7)))) {
          uVar7 = 0;
        }
        else {
          uVar7 = uVar12 - uVar7;
        }
        uVar6 = (uint)((ulonglong)uVar7 * (ulonglong)DAT_003ce448 >> 0x25);
        uVar7 = uVar7 + uVar6 * -100;
        if (9 < uVar11 + (uVar6 & 0xffff)) {
          uVar6 = 10 - uVar11;
          if ((int)uVar6 < 1) {
            uVar6 = 0;
          }
          uVar7 = 0;
        }
        uVar6 = uVar6 & 0xffff;
        if (299 < *(ushort *)(param_1 + 4) + uVar6) {
          uVar6 = 300 - *(ushort *)(param_1 + 4);
          if ((int)uVar6 < 1) {
            uVar6 = 0;
          }
          uVar7 = 0;
          uVar6 = uVar6 & 0xffff;
        }
        if (uVar9 == uVar3 && uVar10 == uVar2) {
          iVar5 = -(uint)(objStack_a0[3] < uVar7);
          *(short *)(param_1 + 6) = (short)uVar11 + (short)uVar6;
          if ((int)-(iVar5 + (uint)(objStack_a0[3] != uVar7)) < 0 ==
              (SBORROW4(0,iVar5) !=
              SBORROW4((uint)(objStack_a0[3] < uVar7),(uint)(objStack_a0[3] != uVar7)))) {
            iVar5 = 0;
          }
          else {
            iVar5 = objStack_a0[3] - uVar7;
          }
          iVar8 = -(uint)(uVar12 < uVar7);
          *(int *)(param_1 + 8) = iVar5;
          if ((int)-(iVar8 + (uint)(uVar12 != uVar7)) < 0 ==
              (SBORROW4(0,iVar8) != SBORROW4((uint)(uVar12 < uVar7),(uint)(uVar12 != uVar7)))) {
            iVar5 = 0;
          }
          else {
            iVar5 = uVar12 - uVar7;
          }
          *(int *)(param_1 + 0xc) = iVar5;
        }
        uVar7 = DAT_003ce450;
        *(short *)(param_1 + 4) = *(short *)(param_1 + 4) + (short)uVar6;
        local_74 = (int)uVar7 >> 0x1f;
        local_60 = 0;
        local_88 = (uint)((ulonglong)DAT_003ce454 * (ulonglong)DAT_003ce44c >> 0x20);
        local_5c[0] = 0;
        local_5c[1] = 0;
        local_70 = 0;
        lVar1 = (ulonglong)DAT_003ce454 * (ulonglong)uVar7 +
                CONCAT44(local_74 * DAT_003ce454,local_88);
        local_58 = (uint)lVar1;
        uVar6 = (uint)((ulonglong)lVar1 >> 0x20);
        uVar11 = (uint)((ulonglong)DAT_003ce458 * (ulonglong)uVar7);
        uVar12 = (int)((ulonglong)DAT_003ce458 * (ulonglong)DAT_003ce44c >> 0x20) +
                 (uint)CARRY4((uint)((ulonglong)DAT_003ce458 * (ulonglong)DAT_003ce44c),local_58);
        iVar5 = local_74 * DAT_003ce458 + (int)((ulonglong)DAT_003ce458 * (ulonglong)uVar7 >> 0x20)
                + ((int)uVar12 >> 0x1f) + ((int)uVar6 >> 0x1f) + (uint)CARRY4(uVar12,uVar6) +
                (uint)CARRY4(uVar11,uVar12 + uVar6);
        uVar7 = uVar11 + uVar12 + uVar6 >> 0x12 | iVar5 * 0x4000;
        uVar11 = uVar7 + -local_74;
        bVar13 = CARRY4(uVar9,uVar11);
        uVar9 = uVar9 + uVar11;
      }
      goto LAB_003ce418;
    }
  }
  if (uVar2 != uStack_84 || uVar3 != uVar9) {
    *(undefined2 *)(param_1 + 6) = 0;
  }
  *(uint *)(param_1 + 8) = objStack_a0[3];
  func_003CDD84(&local_60,0x18,uVar3,uVar2);
  uVar3 = local_60 & 0xffff;
  iVar5 = 0;
  iVar8 = 0xb;
  puVar4 = (ushort *)&local_60;
  do {
    uVar3 = uVar3 + (*(undefined2 *)((char *)&local_60 + 2));
    (*(undefined2 *)((char *)&local_60 + 2)) = puVar4[3];
    iVar8 = iVar8 + -1;
    iVar5 = iVar5 + (uint)puVar4[2];
    puVar4 = puVar4 + 2;
  } while (iVar8 != 0);
  *(uint *)(param_1 + 0xc) = uVar3 + iVar5 + (uint)local_32;
LAB_003ce418:
  *(short *)(param_1 + 0x10) = (short)local_6c;
  *(undefined1 *)(param_1 + 0x12) = (undefined1)local_68;
  *(undefined1 *)(param_1 + 0x13) = (*(undefined1 *)((char *)&local_68 + 1));
  if (300 < *(ushort *)(param_1 + 4)) {
    *(undefined2 *)(param_1 + 4) = 300;
  }
  return;
}

