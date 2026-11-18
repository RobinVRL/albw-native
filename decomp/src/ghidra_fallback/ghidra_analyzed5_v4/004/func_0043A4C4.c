#include "ghidra_types.h"

extern int func_0010BEB4(int param_1,int *param_2);
extern int func_00439178(undefined4 param_1,undefined4 param_2);
extern int func_00533078(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0066C2E0(undefined4 *param_1,undefined1 param_2);
extern int func_0066DB6C(undefined4 *param_1,undefined1 param_2);
extern int DAT_0043a8c0;
extern int *DAT_0043a8dc;
extern int *DAT_0043a8e0;
extern float DAT_0043a8e4;
extern char s_SE_S_WARP_CANCEL_DECIDE_0043a8c4[];

// USA 0043A4C4 <- EU 0043A4A4 (Ghidra, non-matching)
// GLOBAL DAT_0043a8c0 int
// GLOBAL DAT_0043a8dc int *
// GLOBAL DAT_0043a8e0 int *
// GLOBAL DAT_0043a8e4 float
// GLOBAL s_SE_S_WARP_CANCEL_DECIDE_0043a8c4 string

undefined4 func_0043A4C4(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined1 uVar5;
  uint *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  code *UNRECOVERED_JUMPTABLE;
  int iVar9;
  uint uVar10;
  bool bVar11;
  bool bVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(char * *)(albw_frame + 0xc))
  iVar4 = DAT_0043a8c0;
  bVar12 = false;
  uVar10 = 0;
  do {
    piVar1 = (int *)(param_1 + 0xec);
    if (uVar10 < 0xd) {
      piVar1 = piVar1 + uVar10;
    }
    if ((*(ushort *)(*(int *)(*piVar1 + 0x14) + 0x16) & 0x10) != 0) {
      *(char *)(param_1 + 0x1a0) = '\x01' - *(char *)(param_1 + 0x1a0);
      uVar2 = 0;
      do {
        if (uVar10 != uVar2) {
          piVar1 = (int *)(param_1 + 0xec);
          if (uVar2 < 0xd) {
            piVar1 = piVar1 + uVar2;
          }
          puVar8 = (undefined4 *)(param_1 + 0x198);
          if (*(byte *)(param_1 + 0x1a0) < 2) {
            puVar8 = puVar8 + *(byte *)(param_1 + 0x1a0);
          }
          *(undefined4 *)(*piVar1 + 0x138) = *puVar8;
        }
        uVar2 = uVar2 + 1;
      } while ((int)uVar2 < 0xd);
      puVar8 = (undefined4 *)(param_1 + 0xec);
      if (uVar10 < 0xd) {
        puVar8 = puVar8 + uVar10;
      }
      func_00439178(param_1,*puVar8);
      *(short *)(param_1 + 0x1b0) = (short)uVar10;
      iVar3 = (int)*(char *)(param_1 + 0xcc);
      if (iVar3 != -1) {
        iVar9 = *(int *)(param_1 + 0xe8);
        UNRECOVERED_JUMPTABLE = *(code **)(iVar9 + iVar3 * 8);
        if ((UNRECOVERED_JUMPTABLE != (code *)0x0) ||
           ((uVar10 = *(uint *)(iVar9 + iVar3 * 8 + 4), (uVar10 & 1) != 0 && (uVar10 != 0)))) {
          uVar10 = *(uint *)(iVar9 + iVar3 * 8 + 4);
          piVar1 = (int *)(*(int *)(param_1 + 0xdc) + ((int)uVar10 >> 1));
          if ((uVar10 & 1) != 0) {
            UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *piVar1);
          }
          (*UNRECOVERED_JUMPTABLE)(piVar1,2);
        }
      }
      uVar5 = *(undefined1 *)(param_1 + 0xcc);
      *(undefined1 *)(param_1 + 0xcc) = 2;
      *(undefined4 *)(param_1 + 200) = 0;
      *(undefined1 *)(param_1 + 0xcd) = uVar5;
      if (*(int *)(param_1 + 0xd8) != 0) {
        if (*(uint *)(param_1 + 0xd0) < 3) {
          piVar1 = *(int **)(param_1 + 0xd4);
        }
        else {
          piVar1 = (int *)(*(int *)(param_1 + 0xd4) + 0x48);
        }
        (**(code **)(*piVar1 + 8))(piVar1);
        local_24 = (char *)piVar1[1];
        local_28 = iVar4;
        func_0010BEB4(*(int *)(param_1 + 0xd8),&local_28);
      }
      iVar3 = (int)*(char *)(param_1 + 0xcc);
      iVar4 = *(int *)(param_1 + 0xe0);
      UNRECOVERED_JUMPTABLE = *(code **)(iVar4 + iVar3 * 8);
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        uVar10 = *(uint *)(iVar4 + iVar3 * 8 + 4);
        if ((uVar10 & 1) == 0) {
          return 0;
        }
        if (uVar10 == 0) {
          return 0;
        }
      }
      uVar10 = *(uint *)(iVar4 + iVar3 * 8 + 4);
      if ((uVar10 & 1) != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(UNRECOVERED_JUMPTABLE +
                       *(int *)(*(int *)(param_1 + 0xdc) + ((int)uVar10 >> 1)));
      }
                    /* WARNING: Could not recover jumptable at 0x0043a6e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return 0;
    }
    piVar1 = (int *)(param_1 + 0xec);
    if (uVar10 < 0xd) {
      piVar1 = piVar1 + uVar10;
    }
    uVar10 = uVar10 + 1;
    if ((*(ushort *)(*(int *)(*piVar1 + 0x14) + 0x16) & 8) != 0) {
      bVar12 = true;
    }
  } while ((int)uVar10 < 0xd);
  uVar10 = *(uint *)(param_1 + 0x1a4);
  if (*(char *)(uVar10 + 0x5e) == '\0') {
    if ((*(ushort *)(*(int *)(uVar10 + 0x14) + 0x16) & 8) != 0) {
      return 0;
    }
    bVar11 = *(char *)(uVar10 + 0xd) == '\x03';
    if (bVar11) {
      uVar10 = (uint)*(byte *)(uVar10 + 0xe);
    }
    iVar3 = *DAT_0043a8dc;
    if (((!bVar11 || uVar10 != 3) ||
        ((*(uint *)(iVar3 + (uint)*(byte *)(param_1 + 0x70) * 400 + 0x20) & 2) == 0)) || (bVar12)) {
      if (!(bool)((*(uint *)(iVar3 + (uint)*(byte *)(param_1 + 0x70) * 400 + 0x20) & 0xff0000) != 0
                 & ~bVar12)) {
        return 0;
      }
      uVar10 = 0xffffffff;
      uVar2 = 0;
      fVar13 = DAT_0043a8e4;
      do {
        puVar6 = (uint *)(param_1 + 0xec);
        if (uVar2 < 0xd) {
          puVar6 = puVar6 + uVar2;
        }
        uVar7 = *puVar6;
        bVar12 = *(char *)(uVar7 + 0xd) == '\x03';
        if (bVar12) {
          uVar7 = (uint)*(byte *)(uVar7 + 0xe);
        }
        if (bVar12 && uVar7 == 3) {
          piVar1 = (int *)(param_1 + 0xec);
          if (uVar2 < 0xd) {
            piVar1 = piVar1 + uVar2;
          }
          fVar14 = **(float **)(*DAT_0043a8e0 + 0x1c) - *(float *)(*piVar1 + 0x74);
          fVar15 = (*(float **)(*DAT_0043a8e0 + 0x1c))[2] - *(float *)(*piVar1 + 0x78);
          fVar14 = fVar14 * fVar14 + fVar15 * fVar15;
          if (fVar14 < fVar13) {
            uVar10 = uVar2;
            fVar13 = fVar14;
          }
        }
        uVar2 = uVar2 + 1;
      } while ((int)uVar2 < 0xd);
      if (0xc < uVar10) {
        return 0;
      }
      *(char *)(param_1 + 0x1a0) = '\x01' - *(char *)(param_1 + 0x1a0);
      uVar2 = 0;
      do {
        if (uVar10 != uVar2) {
          piVar1 = (int *)(param_1 + 0xec);
          if (uVar2 < 0xd) {
            piVar1 = piVar1 + uVar2;
          }
          puVar8 = (undefined4 *)(param_1 + 0x198);
          if (*(byte *)(param_1 + 0x1a0) < 2) {
            puVar8 = puVar8 + *(byte *)(param_1 + 0x1a0);
          }
          *(undefined4 *)(*piVar1 + 0x138) = *puVar8;
        }
        uVar2 = uVar2 + 1;
      } while ((int)uVar2 < 0xd);
      *(short *)(param_1 + 0x1b0) = (short)uVar10;
      uVar5 = 2;
      uVar2 = *(uint *)(iVar3 + (uint)*(byte *)(param_1 + 0x70) * 400 + 0x20);
      if ((uVar2 & 0x990000) != 0) {
        uVar5 = 0;
      }
      if ((uVar2 & 0x660000) != 0) {
        uVar5 = 1;
      }
      piVar1 = (int *)(param_1 + 0xec);
      if (uVar10 < 0xd) {
        piVar1 = piVar1 + uVar10;
      }
      iVar4 = *piVar1;
      *(undefined1 *)(iVar4 + 0x13c) = uVar5;
      func_0066DB6C((undefined4 *)(iVar4 + 0x50),1);
      func_0066C2E0((undefined4 *)(param_1 + 200),2);
      puVar8 = (undefined4 *)(param_1 + 0xec);
      if (uVar10 < 0xd) {
        puVar8 = puVar8 + uVar10;
      }
      return func_00439178(param_1,*puVar8);
    }
    *(undefined1 *)(param_1 + 0x1b2) = 1;
  }
  *(undefined2 *)(param_1 + 0x1b0) = 0xffff;
  func_0066C2E0((undefined4 *)(param_1 + 200),3);
  local_24 = s_SE_S_WARP_CANCEL_DECIDE_0043a8c4;
  local_28 = iVar4;
  return func_00533078(*(undefined4 *)(param_1 + 0x1ac),&local_28,0);
}

