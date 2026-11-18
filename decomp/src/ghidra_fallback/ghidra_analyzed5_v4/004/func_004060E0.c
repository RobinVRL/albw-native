#include "ghidra_types.h"

extern int func_0040411C(undefined4 param_1);
extern int func_00404138(undefined4 param_1,undefined1 param_2);
extern int func_00406660(undefined4 param_1,uint *param_2);
extern int func_0058FBE8(uint *param_1,uint param_2);
extern uint DAT_00406574;
extern uint DAT_00406578;

// USA 004060E0 <- EU 004060C0 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 uint
// PARAM param_6 Stack[0x4]:4 uint
// PARAM param_7 Stack[0x8]:4 uint
// PARAM param_8 Stack[0xc]:4 uint
// PARAM param_9 Stack[0x10]:4 uint
// PARAM param_10 Stack[0x14]:4 uint
// GLOBAL DAT_00406574 uint
// GLOBAL DAT_00406578 uint

undefined4
func_004060E0(int param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
             uint param_7,uint param_8,uint param_9,uint param_10)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined2 *puVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  bool bVar10;
  bool bVar11;
  undefined8 in_d0;
  undefined4 uVar12;
  undefined4 local_40;
  
  uVar2 = *(uint *)(param_1 + 0x74);
  local_40 = 1;
  bVar11 = (uVar2 & 3) <= param_2;
  bVar10 = param_2 == (uVar2 & 3);
  if (!bVar11 || bVar10) {
    uVar6 = (uVar2 << 0x1c) >> 0x1e;
    bVar11 = uVar6 <= param_3;
    bVar10 = param_3 == uVar6;
  }
  if (!bVar11 || bVar10) {
    uVar6 = (uVar2 << 0x1a) >> 0x1e;
    bVar11 = uVar6 <= param_4;
    bVar10 = param_4 == uVar6;
    if (!bVar11 || bVar10) {
      uVar6 = (uVar2 << 0x17) >> 0x1d;
      bVar11 = uVar6 <= param_5;
      bVar10 = param_5 == uVar6;
    }
    if (!bVar11 || bVar10) {
      uVar6 = -((int)(uVar2 << 0x16) >> 0x1f);
      bVar11 = uVar6 <= param_6;
      bVar10 = param_6 == uVar6;
      if (!bVar11 || bVar10) {
        uVar6 = (uVar2 << 0x14) >> 0x1e;
        bVar11 = uVar6 <= param_7;
        bVar10 = param_7 == uVar6;
      }
      if (!bVar11 || bVar10) {
        uVar6 = -((int)(uVar2 << 0x13) >> 0x1f);
        bVar11 = uVar6 <= param_8;
        bVar10 = param_8 == uVar6;
        if (!bVar11 || bVar10) {
          uVar6 = (uVar2 << 0x10) >> 0x1d;
          bVar11 = uVar6 <= param_9;
          bVar10 = param_9 == uVar6;
        }
        if (!bVar11 || bVar10) {
          uVar2 = -((int)(uVar2 << 0xf) >> 0x1f);
          bVar11 = uVar2 <= param_10;
          bVar10 = param_10 == uVar2;
        }
        if (!bVar11 || bVar10) {
          return 1;
        }
      }
    }
  }
  if (*(int *)(param_1 + 0x7c) != 0) {
    func_0040411C(*(int *)(param_1 + 0x7c));
    *(undefined4 *)(param_1 + 0x7c) = 0;
    func_00406660(param_1,(uint *)(param_1 + 0x74));
    func_00406660(param_1,(uint *)(param_1 + 0x78));
  }
  iVar3 = func_00404138(param_2 * 0x20 + param_3 * 0x14 + param_4 * 8 + param_6 * 8 + param_7 * 4 +
                        param_8 * 0xc + param_5 * 4 + param_9 * 0x14 + param_10 * 8,4);
  *(int *)(param_1 + 0x7c) = iVar3;
  uVar2 = DAT_00406574;
  if (iVar3 == 0) {
    local_40 = 0;
  }
  else {
    uVar6 = (param_3 & 3) << 2;
    uVar8 = *(uint *)(param_1 + 0x78) & 0xfffffff3 | uVar6;
    *(uint *)(param_1 + 0x74) =
         (param_4 & 3) << 4 | uVar6 | param_2 & 3 | *(uint *)(param_1 + 0x74) & 0xfffe0000 |
         (param_5 & 7) << 6 | (param_6 & 1) << 9 | (param_7 & 3) << 10 | (param_8 & 1) << 0xc |
         (param_9 & 7) << 0xd | (param_10 & 1) << 0x10;
    *(uint *)(param_1 + 0x78) = uVar8;
    uVar1 = DAT_00406578;
    uVar6 = (uVar8 << 0x1c) >> 0x1e;
    if (uVar6 != 0) {
      in_d0 = CONCAT44(DAT_00406578,uVar2);
    }
    uVar8 = 0;
    if (uVar6 != 0) {
      do {
        uVar5 = uVar8 + 1;
        puVar9 = (undefined4 *)(iVar3 + (((param_2 & 3) << 0x1e) >> 0x19) + uVar8 * 0x14);
        uVar12 = (undefined4)((ulonglong)in_d0 >> 0x20);
        puVar9[2] = uVar12;
        *puVar9 = uVar12;
        puVar9[1] = uVar12;
        puVar9[3] = (int)in_d0;
        puVar9[4] = (int)in_d0;
        uVar8 = uVar5;
      } while (uVar5 < uVar6);
    }
    uVar6 = *(uint *)(param_1 + 0x74);
    uVar8 = uVar6 & 0x200;
    *(uint *)(param_1 + 0x78) = *(uint *)(param_1 + 0x78) & 0xfffffdff | uVar8;
    if (uVar8 != 0) {
      puVar7 = (uint *)(*(int *)(param_1 + 0x7c) +
                       (uVar6 >> 1 & 0x18) +
                       ((uVar6 << 0x1e) >> 0x19) + ((uVar6 << 0x1c) >> 0x1e) * 0x14);
      *puVar7 = uVar8 | 7;
      puVar7[1] = uVar1;
    }
    uVar6 = *(uint *)(param_1 + 0x74);
    *(uint *)(param_1 + 0x78) = uVar6 & 0xc00 | *(uint *)(param_1 + 0x78) & 0xfffff3ff;
    if (((uVar6 & 0xc00) != 0) &&
       (*(undefined4 *)
         (*(int *)(param_1 + 0x7c) +
         (uVar6 >> 6 & 8) +
         ((uVar6 << 0x1e) >> 0x19) + ((uVar6 << 0x1c) >> 0x1e) * 0x14 + (uVar6 >> 1 & 0x18)) =
             0x50400, (uint)(*(int *)(param_1 + 0x78) << 0x14) >> 0x1e == 2)) {
      uVar6 = *(uint *)(param_1 + 0x74);
      *(undefined4 *)
       (*(int *)(param_1 + 0x7c) +
       (uVar6 >> 6 & 8) +
       ((uVar6 << 0x1e) >> 0x19) + ((uVar6 << 0x1c) >> 0x1e) * 0x14 + (uVar6 >> 1 & 0x18) + 4) =
           0x50400;
    }
    uVar6 = *(uint *)(param_1 + 0x74);
    *(uint *)(param_1 + 0x78) = *(uint *)(param_1 + 0x78) & 0xffffefff | uVar6 & 0x1000;
    if ((uVar6 & 0x1000) != 0) {
      puVar7 = (uint *)((uVar6 >> 8 & 0xc) +
                        ((uVar6 << 0x1e) >> 0x19) + ((uVar6 << 0x1c) >> 0x1e) * 0x14 +
                        (uVar6 >> 1 & 0x18) + (uVar6 >> 6 & 8) + *(int *)(param_1 + 0x7c));
      *puVar7 = uVar1;
      puVar7[1] = uVar2;
      puVar7[2] = uVar2;
    }
    uVar2 = *(uint *)(param_1 + 0x74);
    *(uint *)(param_1 + 0x78) = *(uint *)(param_1 + 0x78) & 0xfffeffff | uVar2 & 0x10000;
    if (((uVar2 & 0x10000) != 0) &&
       (puVar4 = (undefined2 *)
                 ((uVar2 >> 8 & 0xc) +
                  (uVar2 >> 1 & 0x18) + ((uVar2 << 0x1e) >> 0x19) + ((uVar2 << 0x1c) >> 0x1e) * 0x14
                  + (uVar2 >> 6 & 8) + ((int)(uVar2 << 0x13) >> 0x1f) * -0xc + (uVar2 >> 4 & 0x1c) +
                  ((uVar2 << 0x10) >> 0x1d) * 0x14 + *(int *)(param_1 + 0x7c)),
       puVar4 != (undefined2 *)0x0)) {
      *puVar4 = 0;
      *(undefined1 *)(puVar4 + 1) = 0;
      func_0058FBE8((uint *)((int)puVar4 + 3),0xff);
    }
  }
  return local_40;
}

