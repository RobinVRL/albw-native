#include "ghidra_types.h"

extern ulonglong func_00110710(uint param_1,uint param_2);
extern ulonglong func_00115F34(uint param_1,uint param_2,uint param_3,uint param_4);
extern int func_004143B4(int param_1,int param_2,undefined4 param_3);
extern int func_004143C0(int param_1,short param_2);
extern int func_004145B8(int param_1,short param_2);
extern int func_0041497C(int param_1);
extern int func_00415F4C(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4, uint param_5);
extern int func_004196AC(int *param_1,int param_2);
extern int func_004197B8(int param_1,int param_2,uint param_3,int param_4,uint param_5);
extern int func_00419924(void);
extern int DAT_0041a260;
extern uint DAT_0041a264;
extern int DAT_0041a268;
extern uint DAT_0041a26c;
extern int DAT_0041a270;

// USA 00419D34 <- EU 00419D14 (Ghidra, non-matching)
// GLOBAL DAT_0041a260 int
// GLOBAL DAT_0041a264 uint
// GLOBAL DAT_0041a268 int
// GLOBAL DAT_0041a26c uint
// GLOBAL DAT_0041a270 int

undefined1 func_00419D34(int *param_1,int param_2,int param_3,uint param_4)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  undefined1 *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 *unaff_r10;
  uint uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_48 ((undefined4 *)(albw_frame + 0x8))
  if ((char)param_1[0x14] == '\0') {
    return 0;
  }
  if (*(ushort *)(DAT_0041a260 + (int)param_1) == param_4) {
    if (param_2 == 0) {
      *(undefined1 *)((int)param_1 + 0xf) = 1;
      (**(code **)(*param_1 + 0x14))(param_1);
      return 0;
    }
    uVar8 = 0;
    if (param_1[0x40] != 0) {
      do {
        puVar4 = (undefined1 *)((int)param_1 + uVar8 * 0xd + 0xb4);
        iVar5 = DAT_0041a264 + 1;
        uVar6 = DAT_0041a264 | (int)DAT_0041a264 >> 0xb;
        uVar2 = DAT_0041a264 + 3;
        *(undefined1 *)((int)param_1 + DAT_0041a264 + uVar8 * 0x24) = *puVar4;
        *(undefined1 *)((int)param_1 + iVar5 + uVar8 * 0x24) =
             *(undefined1 *)((int)param_1 + uVar8 * 0xd + 0xb5);
        *(undefined1 *)((int)param_1 + uVar6 + uVar8 * 0x24) =
             *(undefined1 *)((int)param_1 + uVar8 * 0xd + 0xb6);
        *(undefined1 *)((int)param_1 + uVar2 + uVar8 * 0x24) =
             *(undefined1 *)((int)param_1 + uVar8 * 0xd + 0xb8);
        uVar2 = uVar2 | (int)uVar2 >> 0xc;
        uVar6 = uVar2 + 1;
        *(undefined1 *)((int)param_1 + uVar2 + uVar8 * 0x24) =
             *(undefined1 *)((int)param_1 + uVar8 * 0xd + 0xb9);
        *(undefined1 *)((int)param_1 + uVar6 + uVar8 * 0x24) =
             *(undefined1 *)((int)param_1 + uVar8 * 0xd + 0xba);
        uVar6 = uVar6 | (int)uVar6 >> 0xb;
        *(undefined1 *)((int)param_1 + uVar6 + uVar8 * 0x24) =
             *(undefined1 *)((int)param_1 + uVar8 * 0xd + 0xbb);
        *(undefined1 *)((int)param_1 + uVar6 + 1 + uVar8 * 0x24) =
             *(undefined1 *)((int)param_1 + uVar8 * 0xd + 0xbc);
        *(undefined1 *)((int)param_1 + uVar6 + 2 + uVar8 * 0x24) =
             *(undefined1 *)((int)param_1 + uVar8 * 0xd + 0xbd);
        *(undefined1 *)((int)param_1 + uVar6 + 3 + uVar8 * 0x24) =
             *(undefined1 *)((int)param_1 + uVar8 * 0xd + 0xb7);
        *(undefined1 *)((int)param_1 + (uVar6 - 7) + uVar8 * 0x24) =
             *(undefined1 *)((int)param_1 + uVar8 * 0xd + 0xbe);
        uVar6 = (uint)*(byte *)((int)param_1 + uVar8 * 0xd + 0xbe);
        uVar2 = 0;
        if ((uVar6 != 0) && (uVar2 = uVar6 & 1, uVar2 == 1)) {
          *(int **)((int)param_1 + DAT_0041a268 + uVar8 * 0x24) =
               param_1 + (uint)*(byte *)((int)param_1 + uVar8 * 0xd + 0xbf) * 0xd0 + 0x41;
        }
        if (uVar2 < *(byte *)((int)param_1 + uVar8 * 0xd + 0xbe)) {
          do {
            iVar7 = uVar2 + 0x6c3;
            param_1[uVar8 * 9 + uVar2 + 0x6c2] =
                 (int)(param_1 + (uint)(byte)puVar4[uVar2 + 0xb] * 0xd0 + 0x41);
            iVar5 = uVar2 + 0xc;
            uVar2 = uVar2 + 2;
            param_1[uVar8 * 9 + iVar7] = (int)(param_1 + (uint)(byte)puVar4[iVar5] * 0xd0 + 0x41);
          } while ((int)uVar2 < (int)(uint)*(byte *)((int)param_1 + uVar8 * 0xd + 0xbe));
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < (uint)param_1[0x40]);
    }
    if ((uint)param_1[0x28] < 0x2001) {
      uVar9 = func_00110710(*(uint *)(param_1[0x19] + 8),param_1[0x28]);
      uVar8 = (uint)uVar9;
      param_1[0x1a] = uVar8;
      if (3 < uVar8) {
        if (0x20 < uVar8) {
          uVar8 = 0x20;
        }
        param_1[0x1a] = uVar8;
        param_1[0x1b] = 0;
        param_1[0x1c] = 0;
        param_1[0x1d] = 0;
        uVar2 = 0;
        if (uVar8 != 0) {
          unaff_r10 = local_48;
        }
        param_1[0x17] = 0;
        if (uVar8 != 0) {
          do {
            uVar8 = 0;
            if (param_1[0x3f] != 0) {
              do {
                unaff_r10[uVar8] = param_1[uVar8 * 0xd0 + 0x41] + param_1[0x28] * param_1[0x1b];
                uVar8 = uVar8 + 1;
              } while (uVar8 < (uint)param_1[0x3f]);
            }
            iVar5 = 0;
            if ((char)param_1[0x1e] == '\0') {
              iVar5 = param_1[0x1f];
            }
            else if ((char)param_1[0x1e] == '\x01') {
              uVar6 = param_1[0x1f];
              uVar8 = param_1[0x21];
              uVar10 = func_00115F34((uint)((ulonglong)uVar8 * (ulonglong)uVar6),
                                     ((int)uVar6 >> 0x1f) * uVar8 +
                                     (int)((ulonglong)uVar8 * (ulonglong)uVar6 >> 0x20),1000,0);
              if ((int)(uVar10 >> 0x20) == 0) {
                uVar10 = func_00115F34((uint)((ulonglong)uVar8 * (ulonglong)uVar6),
                                       ((int)uVar6 >> 0x1f) * uVar8 +
                                       (int)((ulonglong)uVar8 * (ulonglong)uVar6 >> 0x20),1000,0);
                iVar5 = (int)uVar10;
              }
              else {
                iVar5 = -1;
              }
            }
            param_1[0x1f] = 0;
            if (*(char *)((int)param_1 + 0xd) == '\0') {
              uVar8 = 1;
            }
            else {
              uVar8 = 2;
            }
            func_00415F4C(param_1[0x18],local_48,param_1[0x1b],iVar5,uVar8);
            iVar5 = param_1[0x1b];
            uVar2 = uVar2 + 1;
            param_1[0x1b] = iVar5 + 1U;
            if ((uint)param_1[0x1a] <= iVar5 + 1U) {
              param_1[0x1b] = 0;
            }
            param_1[0x17] = param_1[0x17] + 1;
          } while (uVar2 < (uint)param_1[0x1a]);
        }
        uVar8 = DAT_0041a26c;
        uVar2 = 0;
        if (param_1[0x3f] != 0) {
          do {
            puVar4 = func_00419924();
            piVar3 = func_004197B8((int)puVar4,1,uVar8,DAT_0041a270,
                                   (uint)(param_1 + uVar2 * 0xd0 + 0x41));
            if (piVar3 == (int *)0x0) {
              uVar8 = 0;
              if (uVar2 != 0) {
                do {
                  if (param_1[uVar8 * 0xd0 + 0x4d] != 0) {
                    func_0041497C(param_1[uVar8 * 0xd0 + 0x4d]);
                    param_1[uVar8 * 0xd0 + 0x4d] = 0;
                  }
                  uVar8 = uVar8 + 1;
                } while (uVar8 < uVar2);
              }
              uVar8 = 0;
              if (param_1[0x3f] == 0) {
                return 0;
              }
              do {
                if (param_1[uVar8 * 0xd0 + 0x41] != 0) {
                  func_004196AC((int *)param_1[0x19],param_1[uVar8 * 0xd0 + 0x41]);
                  param_1[uVar8 * 0xd0 + 0x41] = 0;
                }
                uVar8 = uVar8 + 1;
              } while (uVar8 < (uint)param_1[0x3f]);
              return 0;
            }
            param_1[uVar2 * 0xd0 + 0x4d] = (int)piVar3;
            uVar2 = uVar2 + 1;
          } while (uVar2 < (uint)param_1[0x3f]);
        }
        uVar8 = 0;
        if (param_1[0x40] != 0) {
          do {
            iVar5 = 0;
            if (*(byte *)(param_1 + uVar8 * 9 + 0x6c4) != 0) {
              do {
                cVar1 = *(char *)((int)param_1 + uVar8 * 0x24 + 0x1b1a);
                iVar7 = *(int *)(param_1[uVar8 * 9 + iVar5 + 0x6c2] + 0x30);
                if (cVar1 == '\0') {
                  func_004143C0(iVar7,0);
                  func_004145B8(iVar7,0);
                }
                else if (cVar1 == '\x01') {
                  func_004143C0(iVar7,1);
                  func_004145B8(iVar7,0);
                }
                else if (cVar1 == '\x02') {
                  func_004143C0(iVar7,0);
                  func_004145B8(iVar7,1);
                }
                iVar5 = iVar5 + 1;
              } while (iVar5 < (int)(uint)*(byte *)(param_1 + uVar8 * 9 + 0x6c4));
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 < (uint)param_1[0x40]);
        }
        uVar8 = 0;
        if (param_1[0x3f] != 0) {
          do {
            iVar5 = *(int *)(param_3 + uVar8 * 4);
            if (iVar5 != 0) {
              func_004143B4(param_1[uVar8 * 0xd0 + 0x4d],0,iVar5);
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 < (uint)param_1[0x3f]);
        }
        return 1;
      }
    }
  }
  return 0;
}

