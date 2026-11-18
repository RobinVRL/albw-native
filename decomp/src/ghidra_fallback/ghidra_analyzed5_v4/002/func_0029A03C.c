#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0010F1DC(int *param_1,int *param_2);
extern int func_00110AEC(int param_1);
extern int func_0052FBDC(int param_1,int param_2,int param_3);
extern int func_005817C0(int param_1,int param_2,uint *param_3);
extern int func_00588BE4(int param_1);
extern int *DAT_0029a41c;
extern undefined4 DAT_0029a420;
extern int DAT_0029a424;
extern int *DAT_0029a428;
extern uint *DAT_0029a42c;
extern undefined4 *DAT_0029a430;
extern uint *DAT_0029a434;
extern undefined4 *DAT_0029a438;

// USA 0029A03C <- EU 0029A018 (Ghidra, non-matching)
// GLOBAL DAT_0029a41c int *
// GLOBAL DAT_0029a420 undefined4
// GLOBAL DAT_0029a424 int
// GLOBAL DAT_0029a428 int *
// GLOBAL DAT_0029a42c uint *
// GLOBAL DAT_0029a430 undefined4 *
// GLOBAL DAT_0029a434 uint *
// GLOBAL DAT_0029a438 undefined4 *

void func_0029A03C(int param_1)

{
  char cVar1;
  short sVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  uint *puVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  bool bVar15;
  
  uVar4 = DAT_0029a420;
  piVar3 = DAT_0029a41c;
  if (*(char *)(param_1 + 0x768) == '\0') {
    cVar1 = *(char *)(param_1 + 0x438);
    *(undefined1 *)(param_1 + 0x768) = 1;
    puVar6 = DAT_0029a42c;
    piVar5 = DAT_0029a428;
    iVar12 = DAT_0029a424;
    if (cVar1 == '\x01') {
      if (*(char *)(param_1 + 0x5c) != '\0') {
        iVar12 = 0;
        do {
          puVar7 = (undefined4 *)
                   func_0052FBDC(*piVar3 + 0x3dbbc,(int)*(short *)(param_1 + 4 + iVar12 * 6 + 0x5a),
                                 0);
          if ((puVar7 != (undefined4 *)0x0) &&
             (iVar13 = func_00588BE4((int)puVar7), iVar13 == *piVar5)) {
            if (((*puVar6 & 1) == 0) && (iVar13 = func_00100174((int *)DAT_0029a42c), iVar13 != 0))
            {
              *DAT_0029a430 = uVar4;
            }
            iVar13 = (**(code **)*puVar7)(puVar7,DAT_0029a430);
            if (iVar13 == 0) {
              puVar7 = (undefined4 *)0x0;
            }
            if (puVar7 != (undefined4 *)0x0) {
              sVar2 = *(short *)(param_1 + 0x54);
              if (puVar7[0x12f] != 0) {
                for (iVar13 = puVar7[0x12e]; (int *)(iVar13 + -4) != puVar7 + 300;
                    iVar13 = *(int *)(iVar13 + 4)) {
                  if (*(int *)(iVar13 + -4) == (int)sVar2) goto LAB_0029a1a0;
                }
              }
              if ((int)puVar7[0x12f] < (int)puVar7[0x132]) {
                piVar8 = (int *)puVar7[0x130];
                if (piVar8 != (int *)0x0) {
                  puVar7[0x130] = *piVar8;
                  *piVar8 = (int)sVar2;
                  piVar8[1] = 0;
                  piVar8[2] = 0;
                }
                func_0010F1DC(puVar7 + 0x12d,piVar8 + 1);
                puVar7[0x12f] = puVar7[0x12f] + 1;
              }
            }
          }
LAB_0029a1a0:
          iVar12 = iVar12 + 1;
        } while (iVar12 < (int)(uint)*(byte *)(param_1 + 0x5c));
      }
    }
    else {
      bVar15 = cVar1 != '\x02';
      if (bVar15) {
        cVar1 = *(char *)(param_1 + 0x5c);
      }
      if (bVar15 && cVar1 != '\0') {
        uVar11 = 0;
        do {
          iVar13 = param_1 + uVar11 * 0x14;
          iVar14 = iVar13 + 0x50c;
          if (*(int *)(param_1 + 0x348) != 0) {
            func_005817C0(*(int *)(param_1 + 0x348),iVar14,*(uint **)(iVar12 + uVar11 * 4));
          }
          func_00110AEC(iVar14);
          *(undefined4 *)(param_1 + uVar11 * 4 + 0x570) = *(undefined4 *)(iVar13 + 0x518);
          piVar5 = DAT_0029a428;
          do {
            uVar11 = uVar11 + 1;
            if (4 < (int)uVar11) {
              iVar12 = 0;
              if (*(char *)(param_1 + 0x5c) == '\0') {
                return;
              }
              goto LAB_0029a228;
            }
          } while (4 < uVar11);
        } while( true );
      }
    }
  }
  return;
LAB_0029a228:
  puVar7 = (undefined4 *)
           func_0052FBDC(*piVar3 + 0x3dbbc,(int)*(short *)(param_1 + 4 + iVar12 * 6 + 0x5a),0);
  if (puVar7 != (undefined4 *)0x0) {
    iVar13 = func_00588BE4((int)puVar7);
    if (iVar13 == *piVar5) {
      if (((*DAT_0029a42c & 1) == 0) && (iVar13 = func_00100174((int *)DAT_0029a42c), iVar13 != 0))
      {
        *DAT_0029a430 = uVar4;
      }
      iVar13 = (**(code **)*puVar7)(puVar7,DAT_0029a430);
      if (iVar13 == 0) {
        puVar7 = (undefined4 *)0x0;
      }
      if (puVar7 != (undefined4 *)0x0) {
        sVar2 = *(short *)(puVar7 + 0x15);
        if (*(int *)(param_1 + 0x4bc) != 0) {
          for (iVar13 = *(int *)(param_1 + 0x4b8); (int *)(iVar13 + -4) != (int *)(param_1 + 0x4b0);
              iVar13 = *(int *)(iVar13 + 4)) {
            if (*(int *)(iVar13 + -4) == (int)sVar2) goto LAB_0029a408;
          }
        }
        if (*(int *)(param_1 + 0x4bc) < *(int *)(param_1 + 0x4c8)) {
          piVar8 = *(int **)(param_1 + 0x4c0);
          if (piVar8 != (int *)0x0) {
            *(int *)(param_1 + 0x4c0) = *piVar8;
            *piVar8 = (int)sVar2;
            piVar8[1] = 0;
            piVar8[2] = 0;
          }
          func_0010F1DC((int *)(param_1 + 0x4b4),piVar8 + 1);
          *(int *)(param_1 + 0x4bc) = *(int *)(param_1 + 0x4bc) + 1;
        }
      }
    }
    else if (*(int *)(param_1 + 0x444) < *(int *)(param_1 + 0x450)) {
      if (((*DAT_0029a434 & 1) == 0) && (iVar13 = func_00100174((int *)DAT_0029a434), iVar13 != 0))
      {
        *DAT_0029a438 = uVar4;
      }
      iVar13 = (**(code **)*puVar7)(puVar7,DAT_0029a438);
      puVar9 = (undefined4 *)0x0;
      if (iVar13 != 0) {
        puVar9 = puVar7;
      }
      if ((puVar9 != (undefined4 *)0x0) &&
         (uVar10 = puVar7[0xb3], *(int *)(param_1 + 0x444) < *(int *)(param_1 + 0x450))) {
        puVar7 = *(undefined4 **)(param_1 + 0x448);
        if (puVar7 != (undefined4 *)0x0) {
          *(undefined4 *)(param_1 + 0x448) = *puVar7;
          *puVar7 = uVar10;
          puVar7[1] = 0;
          puVar7[2] = 0;
        }
        func_0010F1DC((int *)(param_1 + 0x43c),puVar7 + 1);
        *(int *)(param_1 + 0x444) = *(int *)(param_1 + 0x444) + 1;
      }
    }
  }
LAB_0029a408:
  iVar12 = iVar12 + 1;
  if ((int)(uint)*(byte *)(param_1 + 0x5c) <= iVar12) {
    return;
  }
  goto LAB_0029a228;
}

