#include "ghidra_types.h"

extern int func_0010BEB4(int param_1,int *param_2);
extern int func_00439040(int param_1);
extern int func_00439178(undefined4 param_1,undefined4 param_2);
extern int func_00533078(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0058DBA4(int param_1);
extern int func_0066C2E0(undefined4 *param_1,undefined1 param_2);
extern int func_0066DB6C(undefined4 *param_1,undefined1 param_2);
extern int DAT_00439a1c;
extern int *DAT_00439a20;
extern int *DAT_00439a3c;
extern char s_SE_S_WARP_CANCEL_DECIDE_00439a24[];

// USA 0043939C <- EU 0043937C (Ghidra, non-matching)
// GLOBAL DAT_00439a1c int
// GLOBAL DAT_00439a20 int *
// GLOBAL DAT_00439a3c int *
// GLOBAL s_SE_S_WARP_CANCEL_DECIDE_00439a24 string

undefined4 func_0043939C(int param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined1 uVar9;
  code *UNRECOVERED_JUMPTABLE;
  uint *puVar10;
  uint uVar11;
  int iVar12;
  bool bVar13;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(int *)(albw_frame + 0x0))
  #define local_2c (*(char * *)(albw_frame + 0x4))
  iVar5 = DAT_00439a1c;
  bVar2 = false;
  uVar11 = 0;
  do {
    if ((int)*(short *)(param_1 + 0x1b0) == uVar11) {
      piVar3 = (int *)(param_1 + 0xec);
      if (uVar11 < 0xd) {
        piVar3 = piVar3 + uVar11;
      }
      if (*(char *)(*piVar3 + 0x54) == '\x04') {
        *(undefined1 *)(param_1 + 0x1b2) = 1;
        iVar4 = (int)*(char *)(param_1 + 0xcc);
        if (iVar4 != -1) {
          iVar12 = *(int *)(param_1 + 0xe8);
          UNRECOVERED_JUMPTABLE = *(code **)(iVar12 + iVar4 * 8);
          if ((UNRECOVERED_JUMPTABLE != (code *)0x0) ||
             ((uVar11 = *(uint *)(iVar12 + iVar4 * 8 + 4), (uVar11 & 1) != 0 && (uVar11 != 0)))) {
            uVar11 = *(uint *)(iVar12 + iVar4 * 8 + 4);
            piVar3 = (int *)(*(int *)(param_1 + 0xdc) + ((int)uVar11 >> 1));
            if ((uVar11 & 1) != 0) {
              UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *piVar3);
            }
            (*UNRECOVERED_JUMPTABLE)(piVar3,3);
          }
        }
        uVar9 = *(undefined1 *)(param_1 + 0xcc);
        *(undefined1 *)(param_1 + 0xcc) = 3;
        *(undefined4 *)(param_1 + 200) = 0;
        *(undefined1 *)(param_1 + 0xcd) = uVar9;
        if (*(int *)(param_1 + 0xd8) != 0) {
          if (*(uint *)(param_1 + 0xd0) < 4) {
            piVar3 = *(int **)(param_1 + 0xd4);
          }
          else {
            piVar3 = (int *)(*(int *)(param_1 + 0xd4) + 0x6c);
          }
          (**(code **)(*piVar3 + 8))(piVar3);
          local_2c = (char *)piVar3[1];
          local_30 = iVar5;
          func_0010BEB4(*(int *)(param_1 + 0xd8),&local_30);
        }
        iVar4 = (int)*(char *)(param_1 + 0xcc);
        iVar5 = *(int *)(param_1 + 0xe0);
        UNRECOVERED_JUMPTABLE = *(code **)(iVar5 + iVar4 * 8);
        if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
          uVar11 = *(uint *)(iVar5 + iVar4 * 8 + 4);
          if ((uVar11 & 1) == 0) {
            return 0;
          }
          if (uVar11 == 0) {
            return 0;
          }
        }
        uVar11 = *(uint *)(iVar5 + iVar4 * 8 + 4);
        if ((uVar11 & 1) != 0) {
          UNRECOVERED_JUMPTABLE =
               *(code **)(UNRECOVERED_JUMPTABLE +
                         *(int *)(*(int *)(param_1 + 0xdc) + ((int)uVar11 >> 1)));
        }
                    /* WARNING: Could not recover jumptable at 0x004394e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return 0;
      }
    }
    else {
      piVar3 = (int *)(param_1 + 0xec);
      if (uVar11 < 0xd) {
        piVar3 = piVar3 + uVar11;
      }
      if (((*(ushort *)(*(int *)(*piVar3 + 0x14) + 0x16) & 8) != 0) &&
         (*(int *)(*(int *)(*piVar3 + 0x14) + 8) == 0)) {
        uVar8 = 0;
        do {
          if (uVar11 != uVar8) {
            piVar3 = (int *)(param_1 + 0xec);
            if (uVar8 < 0xd) {
              piVar3 = piVar3 + uVar8;
            }
            if (*(char *)(*piVar3 + 0x98) != '\0') {
              piVar3 = (int *)(param_1 + 0xec);
              if (uVar8 < 0xd) {
                piVar3 = piVar3 + uVar8;
              }
              if (*(char *)(*piVar3 + 0x98) != '\0') {
                func_0066DB6C((undefined4 *)(*piVar3 + 0x50),5);
              }
            }
          }
          uVar8 = uVar8 + 1;
        } while ((int)uVar8 < 0xd);
      }
      piVar3 = (int *)(param_1 + 0xec);
      if (uVar11 < 0xd) {
        piVar3 = piVar3 + uVar11;
      }
      if ((*(ushort *)(*(int *)(*piVar3 + 0x14) + 0x16) & 0x10) != 0) {
        *(char *)(param_1 + 0x1a0) = '\x01' - *(char *)(param_1 + 0x1a0);
        uVar8 = 0;
        do {
          if (uVar11 != uVar8) {
            piVar3 = (int *)(param_1 + 0xec);
            if (uVar8 < 0xd) {
              piVar3 = piVar3 + uVar8;
            }
            puVar7 = (undefined4 *)(param_1 + 0x198);
            if (*(byte *)(param_1 + 0x1a0) < 2) {
              puVar7 = puVar7 + *(byte *)(param_1 + 0x1a0);
            }
            *(undefined4 *)(*piVar3 + 0x138) = *puVar7;
          }
          uVar8 = uVar8 + 1;
        } while ((int)uVar8 < 0xd);
        puVar7 = (undefined4 *)(param_1 + 0xec);
        if (uVar11 < 0xd) {
          puVar7 = puVar7 + uVar11;
        }
        *(short *)(param_1 + 0x1b0) = (short)uVar11;
        return func_00439178(param_1,*puVar7);
      }
      piVar3 = (int *)(param_1 + 0xec);
      if (uVar11 < 0xd) {
        piVar3 = piVar3 + uVar11;
      }
      if (*(char *)(*piVar3 + 0x9a) != '\0') {
        piVar3 = (int *)(param_1 + 0xec);
        if ((uint)(int)*(short *)(param_1 + 0x1b0) < 0xd) {
          piVar3 = piVar3 + *(short *)(param_1 + 0x1b0);
        }
        iVar4 = *piVar3;
        *(undefined1 *)(iVar4 + 0x13c) = 2;
        func_0066DB6C((undefined4 *)(iVar4 + 0x50),1);
      }
    }
    piVar3 = DAT_00439a20;
    piVar6 = (int *)(param_1 + 0xec);
    if (uVar11 < 0xd) {
      piVar6 = piVar6 + uVar11;
    }
    uVar11 = uVar11 + 1;
    if ((*(ushort *)(*(int *)(*piVar6 + 0x14) + 0x16) & 8) != 0) {
      bVar2 = true;
    }
  } while ((int)uVar11 < 0xd);
  iVar4 = *DAT_00439a20 + (uint)*(byte *)(param_1 + 0x70) * 400;
  uVar11 = *(uint *)(param_1 + 0x1a8);
  puVar10 = (uint *)(iVar4 + 0x20);
  if (*(char *)(uVar11 + 0x5e) == '\0') {
    if ((*(ushort *)(*(int *)(uVar11 + 0x14) + 0x16) & 8) == 0) {
      if (*(char *)(*(int *)(param_1 + 0x1ac) + 0x5e) != '\0') {
        piVar3 = (int *)(param_1 + 0xec);
        if ((uint)(int)*(short *)(param_1 + 0x1b0) < 0xd) {
          piVar3 = piVar3 + *(short *)(param_1 + 0x1b0);
        }
        iVar4 = *piVar3;
        cVar1 = *(char *)(iVar4 + 0x98);
        goto joined_r0x00439818;
      }
    }
    else {
      bVar2 = true;
    }
    iVar12 = *(int *)(param_1 + 0x1ac);
    if ((*(ushort *)(*(int *)(iVar12 + 0x14) + 0x16) & 8) == 0) {
      bVar13 = *(char *)(uVar11 + 0xd) == '\x03';
      if (bVar13) {
        uVar11 = (uint)*(byte *)(uVar11 + 0xe);
      }
      if (((bVar13 && uVar11 == 3) && ((*puVar10 & 1) != 0)) && (!bVar2)) {
        *(undefined1 *)(param_1 + 0x1b2) = 1;
        piVar3 = (int *)(param_1 + 0xec);
        if ((uint)(int)*(short *)(param_1 + 0x1b0) < 0xd) {
          piVar3 = piVar3 + *(short *)(param_1 + 0x1b0);
        }
        func_0066DB6C((undefined4 *)(*piVar3 + 0x50),4);
        return func_0066C2E0((undefined4 *)(param_1 + 200),3);
      }
      cVar1 = *(char *)(iVar12 + 0xd);
      bVar13 = cVar1 == '\x03';
      if (bVar13) {
        cVar1 = *(char *)(iVar12 + 0xe);
      }
      if (((!bVar13 || cVar1 != '\x03') || ((*puVar10 & 2) == 0)) || (bVar2)) {
        if (((*(uint *)(iVar4 + 300) & 0xff0000) == 0) || (bVar2)) {
          iVar5 = 0x14;
        }
        else {
          if ((*(int *)(param_1 + 0x1b8) == 0) || ((*puVar10 & 0xff0000) != 0)) {
            iVar5 = func_0058DBA4(*DAT_00439a3c);
            if ((iVar5 != 0) && (uVar11 = func_00439040(param_1), -1 < (int)uVar11)) {
              puVar7 = (undefined4 *)(param_1 + 0xec);
              if (uVar11 < 0xd) {
                puVar7 = puVar7 + uVar11;
              }
              func_00439178(param_1,*puVar7);
              *(short *)(param_1 + 0x1b0) = (short)uVar11;
              *(char *)(param_1 + 0x1a0) = '\x01' - *(char *)(param_1 + 0x1a0);
              uVar8 = 0;
              do {
                if ((int)(short)uVar11 != uVar8) {
                  piVar6 = (int *)(param_1 + 0xec);
                  if (uVar8 < 0xd) {
                    piVar6 = piVar6 + uVar8;
                  }
                  puVar7 = (undefined4 *)(param_1 + 0x198);
                  if (*(byte *)(param_1 + 0x1a0) < 2) {
                    puVar7 = puVar7 + *(byte *)(param_1 + 0x1a0);
                  }
                  *(undefined4 *)(*piVar6 + 0x138) = *puVar7;
                }
                uVar8 = uVar8 + 1;
              } while ((int)uVar8 < 0xd);
              uVar9 = 2;
              iVar5 = *piVar3 + 0x10 + (uint)*(byte *)(param_1 + 0x70) * 400;
              if (((*(uint *)(iVar5 + 0x10) & 0x990000) != 0) ||
                 (((*(uint *)(iVar5 + 0x11c) & 0x990000) != 0 && (*(int *)(param_1 + 0x1b8) == 0))))
              {
                uVar9 = 0;
              }
              if (((*(uint *)(iVar5 + 0x10) & 0x660000) != 0) ||
                 (((*(uint *)(iVar5 + 0x11c) & 0x660000) != 0 && (*(int *)(param_1 + 0x1b8) == 0))))
              {
                uVar9 = 1;
              }
              piVar3 = (int *)(param_1 + 0xec);
              if ((uint)(int)*(short *)(param_1 + 0x1b0) < 0xd) {
                piVar3 = piVar3 + *(short *)(param_1 + 0x1b0);
              }
              iVar5 = *piVar3;
              *(undefined1 *)(iVar5 + 0x13c) = uVar9;
              func_0066DB6C((undefined4 *)(iVar5 + 0x50),1);
              uVar11 = 0;
              do {
                if ((int)*(short *)(param_1 + 0x1b0) != uVar11) {
                  piVar3 = (int *)(param_1 + 0xec);
                  if (uVar11 < 0xd) {
                    piVar3 = piVar3 + uVar11;
                  }
                  if (*(char *)(*piVar3 + 0x98) != '\0') {
                    piVar3 = (int *)(param_1 + 0xec);
                    if (uVar11 < 0xd) {
                      piVar3 = piVar3 + uVar11;
                    }
                    if (*(char *)(*piVar3 + 0x98) != '\0') {
                      func_0066DB6C((undefined4 *)(*piVar3 + 0x50),5);
                    }
                  }
                }
                uVar11 = uVar11 + 1;
              } while ((int)uVar11 < 0xd);
            }
            uVar11 = *(uint *)(param_1 + 0x1b8);
            if (uVar11 < 0xd) {
              uVar11 = 0xc;
            }
            *(uint *)(param_1 + 0x1b8) = uVar11;
            if (uVar11 == 0) {
              return 0;
            }
          }
          iVar5 = *(int *)(param_1 + 0x1b8) + -1;
        }
        *(int *)(param_1 + 0x1b8) = iVar5;
        return 0;
      }
      *(undefined1 *)(param_1 + 0x1b2) = 1;
      piVar3 = (int *)(param_1 + 0xec);
      if ((uint)(int)*(short *)(param_1 + 0x1b0) < 0xd) {
        piVar3 = piVar3 + *(short *)(param_1 + 0x1b0);
      }
      iVar4 = *piVar3;
      cVar1 = *(char *)(iVar4 + 0x98);
joined_r0x00439818:
      if (cVar1 != '\0') {
        func_0066DB6C((undefined4 *)(iVar4 + 0x50),5);
      }
      *(undefined2 *)(param_1 + 0x1b0) = 0xffff;
      func_0066C2E0((undefined4 *)(param_1 + 200),3);
      local_2c = s_SE_S_WARP_CANCEL_DECIDE_00439a24;
      local_30 = iVar5;
      return func_00533078(*(undefined4 *)(param_1 + 0x1ac),&local_30,0);
    }
  }
  else {
    piVar3 = (int *)(param_1 + 0xec);
    if ((uint)(int)*(short *)(param_1 + 0x1b0) < 0xd) {
      piVar3 = piVar3 + *(short *)(param_1 + 0x1b0);
    }
    func_0066DB6C((undefined4 *)(*piVar3 + 0x50),4);
    func_0066C2E0((undefined4 *)(param_1 + 200),3);
  }
  return 0;
}

