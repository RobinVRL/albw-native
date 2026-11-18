// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_0010BEB4(int param_1,int *param_2);
extern int func_00166C00(int param_1,int param_2);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_002DFB38(int param_1);
extern int func_003FF898(int param_1,int param_2);
extern int func_003FF904(int param_1,int param_2);
extern int func_00459280(int param_1);
extern int func_0045A090(int param_1);
extern int func_005229AC(int *param_1,int *param_2);
extern int func_0066D544(undefined4 *param_1,char param_2);
extern int func_0066E58C(undefined4 *param_1,char param_2);
extern int DAT_00458dd8;
extern float DAT_00458ddc;
extern int DAT_00458de0;
extern int DAT_00458de4;
extern int *DAT_00458de8;
extern int *DAT_00458dec;

// USA 00458B00 <- EU 00458AD8 (Ghidra, non-matching)
// MAPFIX: tools/ghidra_name_fixes.json applied (do not apply again)
// GLOBAL DAT_00458dd8 int
// GLOBAL DAT_00458ddc float
// GLOBAL DAT_00458de0 int
// GLOBAL DAT_00458de4 int
// GLOBAL DAT_00458de8 int *
// GLOBAL DAT_00458dec int *

undefined4 func_00458B00(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  code *pcVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define iStack_38 (*(int *)(albw_frame + 0x8))
  #define iStack_34 (*(int *)(albw_frame + 0xc))
  *(undefined4 *)(param_1 + 0x1fc) = *(undefined4 *)(DAT_00458dd8 + 4);
  if (*(char *)(param_1 + 0x1a4) == '\0') {
    func_0066D544((undefined4 *)(param_1 + 0x1a0),'\x01');
  }
  else if (*(char *)(param_1 + 0x1a4) == '\x02') {
    func_0045A090(param_1);
  }
  fparam_0 = DAT_00458ddc;
  *(undefined2 *)(param_1 + 0x140) = 2;
  func_002317C0((undefined2 *)(param_1 + 0x140),fparam_0);
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined2 *)(param_1 + 0xfa) = 0x10;
  *(undefined2 *)(param_1 + 0xf8) = 0;
  func_002317C0((undefined2 *)(param_1 + 0xf8),fparam_0);
  *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined2 *)(param_1 + 0x106) = 0x11;
  *(undefined2 *)(param_1 + 0x104) = 0;
  func_002317C0((undefined2 *)(param_1 + 0x104),fparam_0);
  *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined2 *)(param_1 + 0x112) = 0x12;
  *(undefined2 *)(param_1 + 0x110) = 0;
  func_002317C0((undefined2 *)(param_1 + 0x110),fparam_0);
  piVar4 = (int *)(param_1 + 0x1e4);
  if (*(uint *)(param_1 + 0x214) < 3) {
    piVar4 = piVar4 + *(uint *)(param_1 + 0x214);
  }
  func_0066E58C((undefined4 *)(*piVar4 + 200),'\0');
  iVar3 = DAT_00458de4;
  iVar2 = DAT_00458de0;
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
      iVar6 = func_005229AC(*(int **)(param_1 + 0x1c),(int *)(iVar2 + uVar9 * 8));
      func_003FF898(iVar6,*(int *)(iVar10 + 0x10));
      if (*(uint *)(param_1 + 0x230) != uVar9) {
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
          iStack_34 = piVar4[1];
          iStack_38 = iVar3;
          func_0010BEB4(*(int *)(iVar6 + 0xd8),&iStack_38);
        }
        iVar8 = (int)*(char *)(iVar6 + 0xcc);
        iVar10 = *(int *)(iVar6 + 0xe0);
        pcVar7 = *(code **)(iVar10 + iVar8 * 8);
        if ((pcVar7 != (code *)0x0) ||
           ((uVar11 = *(uint *)(iVar10 + iVar8 * 8 + 4), (uVar11 & 1) != 0 && (uVar11 != 0)))) {
          uVar11 = *(uint *)(iVar10 + iVar8 * 8 + 4);
          piVar4 = (int *)(*(int *)(iVar6 + 0xdc) + ((int)uVar11 >> 1));
          if ((uVar11 & 1) != 0) {
            pcVar7 = *(code **)(pcVar7 + *piVar4);
          }
          (*pcVar7)(piVar4);
        }
      }
    }
    uVar9 = uVar9 + 1;
  } while ((int)uVar9 < 3);
  piVar4 = (int *)(param_1 + 0x1e4);
  if (*(uint *)(param_1 + 0x230) < 3) {
    piVar4 = piVar4 + *(uint *)(param_1 + 0x230);
  }
  func_0066E58C((undefined4 *)(*piVar4 + 200),'\x10');
  func_00459280(param_1);
  *(undefined4 *)(param_1 + 0x210) = 0xffffffff;
  func_002DFB38(*DAT_00458de8);
  return func_00166C00(*DAT_00458dec,0);
}

