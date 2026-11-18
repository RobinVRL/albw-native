#include "ghidra_types.h"

extern int func_0010BEB4(int param_1,int *param_2);
extern int func_00231340(short *param_1);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_002BED00(int param_1);
extern int func_002BEE00(int param_1);
extern int func_00579CEC(int param_1);
extern int func_00584B94(int param_1,int param_2);
extern int func_0066C0CC(undefined4 *param_1,char param_2);
extern int DAT_0047ae00;
extern int *DAT_0047ae04;
extern float DAT_0047ae08;

// USA 0047A9DC <- EU 0047A9B4 (Ghidra, non-matching)
// GLOBAL DAT_0047ae00 int
// GLOBAL DAT_0047ae04 int *
// GLOBAL DAT_0047ae08 float

void func_0047A9DC(int param_1,int param_2)

{
  undefined1 uVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  int iVar5;
  ushort *puVar6;
  int iVar7;
  int iVar8;
  ushort uVar9;
  code *pcVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(int *)(albw_frame + 0x8))
  #define iStack_34 (*(int *)(albw_frame + 0xc))
  if (*(char *)(param_1 + 0x30e) == '\0') {
    uVar11 = 0;
    iVar7 = DAT_0047ae00;
    do {
      piVar4 = (int *)(param_1 + 0x118);
      if (uVar11 < 0x14) {
        piVar4 = piVar4 + uVar11;
      }
      if (*(char *)(*piVar4 + 0xe1) != '\0') {
        piVar4 = (int *)(param_1 + 0x118);
        if (uVar11 < 0x14) {
          piVar4 = piVar4 + uVar11;
        }
        if (*(char *)(*piVar4 + 0xe0) == *(char *)(*(int *)(param_1 + 500) + 0xe4)) {
LAB_0047aa80:
          piVar4 = (int *)(param_1 + 0x118);
          if (uVar11 < 0x14) {
            piVar4 = piVar4 + uVar11;
          }
          iVar12 = *piVar4;
          iVar5 = (int)*(char *)(iVar12 + 0x3c);
          if (iVar5 != -1) {
            iVar8 = *(int *)(iVar12 + 0x58);
            pcVar10 = *(code **)(iVar8 + iVar5 * 8);
            if ((pcVar10 != (code *)0x0) ||
               ((uVar13 = *(uint *)(iVar8 + iVar5 * 8 + 4), (uVar13 & 1) != 0 && (uVar13 != 0)))) {
              uVar13 = *(uint *)(iVar8 + iVar5 * 8 + 4);
              piVar4 = (int *)(*(int *)(iVar12 + 0x4c) + ((int)uVar13 >> 1));
              if ((uVar13 & 1) != 0) {
                pcVar10 = *(code **)(pcVar10 + *piVar4);
              }
              (*pcVar10)(piVar4,2,pcVar10,2,iVar7);
            }
          }
          uVar1 = *(undefined1 *)(iVar12 + 0x3c);
          *(undefined1 *)(iVar12 + 0x3c) = 2;
          *(undefined4 *)(iVar12 + 0x38) = 0;
          *(undefined1 *)(iVar12 + 0x3d) = uVar1;
          if (*(int *)(iVar12 + 0x48) != 0) {
            if (*(uint *)(iVar12 + 0x40) < 3) {
              piVar4 = *(int **)(iVar12 + 0x44);
            }
            else {
              piVar4 = (int *)(*(int *)(iVar12 + 0x44) + 0x48);
            }
            (**(code **)(*piVar4 + 8))(piVar4);
            iStack_34 = piVar4[1];
            local_38 = iVar7;
            func_0010BEB4(*(int *)(iVar12 + 0x48),&local_38);
          }
          iVar8 = (int)*(char *)(iVar12 + 0x3c);
          iVar5 = *(int *)(iVar12 + 0x50);
          pcVar10 = *(code **)(iVar5 + iVar8 * 8);
          if ((pcVar10 != (code *)0x0) ||
             ((uVar13 = *(uint *)(iVar5 + iVar8 * 8 + 4), (uVar13 & 1) != 0 && (uVar13 != 0)))) {
            uVar13 = *(uint *)(iVar5 + iVar8 * 8 + 4);
            piVar4 = (int *)(*(int *)(iVar12 + 0x4c) + ((int)uVar13 >> 1));
joined_r0x0047ab98:
            if ((uVar13 & 1) != 0) {
              pcVar10 = *(code **)(pcVar10 + *piVar4);
            }
            (*pcVar10)();
          }
        }
        else {
          piVar4 = (int *)(param_1 + 0x118);
          if (uVar11 < 0x14) {
            piVar4 = piVar4 + uVar11;
          }
          if (*(char *)(*piVar4 + 0xe0) == *(char *)(*(int *)(param_1 + 0x1f8) + 0xe4))
          goto LAB_0047aa80;
          piVar4 = (int *)(param_1 + 0x118);
          if (uVar11 < 0x14) {
            piVar4 = piVar4 + uVar11;
          }
          iVar12 = *piVar4;
          iVar5 = (int)*(char *)(iVar12 + 0x3c);
          if (iVar5 != -1) {
            iVar8 = *(int *)(iVar12 + 0x58);
            pcVar10 = *(code **)(iVar8 + iVar5 * 8);
            if ((pcVar10 != (code *)0x0) ||
               ((uVar13 = *(uint *)(iVar8 + iVar5 * 8 + 4), (uVar13 & 1) != 0 && (uVar13 != 0)))) {
              uVar13 = *(uint *)(iVar8 + iVar5 * 8 + 4);
              piVar4 = (int *)(*(int *)(iVar12 + 0x4c) + ((int)uVar13 >> 1));
              if ((uVar13 & 1) != 0) {
                pcVar10 = *(code **)(pcVar10 + *piVar4);
              }
              (*pcVar10)(piVar4,4);
            }
          }
          uVar1 = *(undefined1 *)(iVar12 + 0x3c);
          *(undefined1 *)(iVar12 + 0x3c) = 4;
          *(undefined4 *)(iVar12 + 0x38) = 0;
          *(undefined1 *)(iVar12 + 0x3d) = uVar1;
          if (*(int *)(iVar12 + 0x48) != 0) {
            if (*(uint *)(iVar12 + 0x40) < 5) {
              piVar4 = *(int **)(iVar12 + 0x44);
            }
            else {
              piVar4 = (int *)(*(int *)(iVar12 + 0x44) + 0x90);
            }
            (**(code **)(*piVar4 + 8))(piVar4);
            iStack_34 = piVar4[1];
            local_38 = iVar7;
            func_0010BEB4(*(int *)(iVar12 + 0x48),&local_38);
          }
          iVar5 = (int)*(char *)(iVar12 + 0x3c);
          iVar8 = *(int *)(iVar12 + 0x50);
          pcVar10 = *(code **)(iVar8 + iVar5 * 8);
          if ((pcVar10 != (code *)0x0) ||
             ((uVar13 = *(uint *)(iVar8 + iVar5 * 8 + 4), (uVar13 & 1) != 0 && (uVar13 != 0)))) {
            uVar13 = *(uint *)(iVar8 + iVar5 * 8 + 4);
            piVar4 = (int *)(*(int *)(iVar12 + 0x4c) + ((int)uVar13 >> 1));
            goto joined_r0x0047ab98;
          }
        }
        func_00231340((short *)(iVar12 + 0xd4));
        if (param_2 != 0) {
          piVar4 = (int *)(param_1 + 0x118);
          if (uVar11 < 0x14) {
            piVar4 = piVar4 + uVar11;
          }
          iVar12 = *piVar4;
          puVar6 = (ushort *)(*(int *)(iVar12 + 0x14) + 0x16);
          uVar9 = *puVar6 & 0xfffe;
          *puVar6 = uVar9;
          *(ushort *)(*(int *)(iVar12 + 0x14) + 0x16) = uVar9 | 0x40;
        }
      }
      uVar11 = uVar11 + 1;
    } while ((int)uVar11 < 0x14);
    bVar3 = func_00584B94(*DAT_0047ae04,900);
    if (bVar3) {
      iVar7 = *(int *)(param_1 + 0x208);
      *(undefined1 *)(iVar7 + 0x79) = 1;
      cVar2 = *(char *)(iVar7 + 0xd);
      bVar3 = cVar2 == '\0';
      if (bVar3) {
        cVar2 = *(char *)(iVar7 + 0xe);
      }
      if (!bVar3 || cVar2 != '\0') {
        func_0066C0CC((undefined4 *)(iVar7 + 0x20),'\x02');
      }
    }
    else {
      iVar7 = *(int *)(param_1 + 0x208);
      *(undefined1 *)(iVar7 + 0x79) = 0;
      cVar2 = *(char *)(iVar7 + 0xd);
      bVar3 = cVar2 == '\0';
      if (bVar3) {
        cVar2 = *(char *)(iVar7 + 0xe);
      }
      if (!bVar3 || cVar2 != '\0') {
        func_0066C0CC((undefined4 *)(iVar7 + 0x20),'\0');
      }
    }
    *(undefined1 *)(*(int *)(param_1 + 0x208) + 0xe) = 1;
    if ((param_2 == 0) || (iVar7 = func_00579CEC(param_1), iVar7 != 0)) {
      func_002BEE00(*(int *)(param_1 + 0x1fc));
    }
    else {
      func_002BED00(*(int *)(param_1 + 0x1fc));
      *(undefined1 *)(*(int *)(param_1 + 0x1fc) + 0xe) = 1;
    }
    fparam_0 = DAT_0047ae08;
    *(undefined2 *)(param_1 + 0x1b8) = 0;
    func_002317C0((undefined2 *)(param_1 + 0x1b8),fparam_0);
    iVar7 = (**(code **)(**(int **)(param_1 + 0x1fc) + 0x3c))(*(int **)(param_1 + 0x1fc));
    if (iVar7 != 0) {
      *(undefined2 *)(param_1 + 0x1c4) = 0;
      func_002317C0((undefined2 *)(param_1 + 0x1c4),fparam_0);
    }
    *(undefined1 *)(param_1 + 0x30e) = 1;
  }
  return;
}

