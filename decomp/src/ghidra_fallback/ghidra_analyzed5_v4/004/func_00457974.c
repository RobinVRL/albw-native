// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_0010BEB4(int param_1,int *param_2);
extern int func_003FF898(int param_1,int param_2);
extern int func_003FF904(int param_1,int param_2);
extern int func_005229AC(int *param_1,int *param_2);
extern int func_00532C78(int param_1);
extern int func_0066D544(undefined4 *param_1,char param_2);
extern int DAT_00457b60;
extern int DAT_00457b64;

// USA 00457974 <- EU 0045794C (Ghidra, non-matching)
// MAPFIX: tools/ghidra_name_fixes.json applied (do not apply again)
// GLOBAL DAT_00457b60 int
// GLOBAL DAT_00457b64 int

void func_00457974(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  bool bVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  code *pcVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define iStack_30 (*(int *)(albw_frame + 0x0))
  #define iStack_2c (*(int *)(albw_frame + 0x4))
  bVar3 = func_00532C78(param_1 + 0x140);
  if ((!bVar3) && (bVar3 = func_00532C78(param_1 + 0xf8), iVar2 = DAT_00457b60, !bVar3)) {
    piVar4 = (int *)(param_1 + 0x1e4);
    if (*(uint *)(param_1 + 0x214) < 3) {
      piVar4 = piVar4 + *(uint *)(param_1 + 0x214);
    }
    if (*(char *)(*piVar4 + 0xcc) == '\x03') {
      uVar9 = 0;
      do {
        if (*(uint *)(param_1 + 0x214) != uVar9) {
          piVar4 = (int *)(param_1 + 0x1e4);
          if (uVar9 < 3) {
            piVar4 = piVar4 + uVar9;
          }
          piVar5 = (int *)(param_1 + 0x1e4);
          if (uVar9 < 3) {
            piVar5 = piVar5 + uVar9;
          }
          func_003FF904(*(int *)(*(int *)(**(int **)(*piVar4 + 0x1c) + 0x10) + 0xc),
                        *(int *)(**(int **)(*piVar5 + 0x1c) + 0x10));
          piVar4 = (int *)(param_1 + 0x1e4);
          if (uVar9 < 3) {
            piVar4 = piVar4 + uVar9;
          }
          iVar10 = **(int **)(*piVar4 + 0x1c);
          iVar6 = func_005229AC(*(int **)(param_1 + 0x1c),(int *)(DAT_00457b64 + uVar9 * 8));
          func_003FF898(iVar6,*(int *)(iVar10 + 0x10));
          piVar4 = (int *)(param_1 + 0x1e4);
          if (uVar9 < 3) {
            piVar4 = piVar4 + uVar9;
          }
          iVar6 = *piVar4;
          iVar10 = (int)*(char *)(iVar6 + 0xcc);
          if (iVar10 != -1) {
            iVar8 = *(int *)(iVar6 + 0xe8);
            pcVar7 = *(code **)(iVar8 + iVar10 * 8);
            if ((pcVar7 != (code *)0x0) ||
               ((uVar11 = *(uint *)(iVar8 + iVar10 * 8 + 4), (uVar11 & 1) != 0 && (uVar11 != 0)))) {
              uVar11 = *(uint *)(iVar8 + iVar10 * 8 + 4);
              piVar4 = (int *)(*(int *)(iVar6 + 0xdc) + ((int)uVar11 >> 1));
              if ((uVar11 & 1) != 0) {
                pcVar7 = *(code **)(pcVar7 + *piVar4);
              }
              (*pcVar7)(piVar4,0);
            }
          }
          uVar1 = *(undefined1 *)(iVar6 + 0xcc);
          *(undefined1 *)(iVar6 + 0xcc) = 0;
          *(undefined4 *)(iVar6 + 200) = 0;
          *(undefined1 *)(iVar6 + 0xcd) = uVar1;
          if (*(int *)(iVar6 + 0xd8) != 0) {
            piVar4 = *(int **)(iVar6 + 0xd4);
            (**(code **)(*piVar4 + 8))(piVar4);
            iStack_2c = piVar4[1];
            iStack_30 = iVar2;
            func_0010BEB4(*(int *)(iVar6 + 0xd8),&iStack_30);
          }
          iVar8 = (int)*(char *)(iVar6 + 0xcc);
          iVar10 = *(int *)(iVar6 + 0xe0);
          pcVar7 = *(code **)(iVar10 + iVar8 * 8);
          if ((pcVar7 != (code *)0x0) ||
             ((uVar11 = *(uint *)(iVar10 + iVar8 * 8 + 4), (uVar11 & 1) != 0 && (uVar11 != 0)))) {
            uVar11 = *(uint *)(iVar10 + iVar8 * 8 + 4);
            if ((uVar11 & 1) != 0) {
              pcVar7 = *(code **)(pcVar7 + *(int *)(*(int *)(iVar6 + 0xdc) + ((int)uVar11 >> 1)));
            }
            (*pcVar7)((int)(*(int *)(iVar6 + 0xdc)) + ((int)uVar11 >> 1));
          }
        }
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < 3);
      func_0066D544((undefined4 *)(param_1 + 0x17c),'\x06');
    }
  }
  return;
}

