#include "ghidra_types.h"

extern int func_0010BEB4(int param_1,int *param_2);
extern int func_002CDFC4(int param_1,undefined4 param_2);
extern int func_002CF084(int param_1);
extern int func_00361610(int param_1,undefined1 param_2);
extern int func_0036720C(int param_1,int param_2,undefined2 param_3,int param_4,int param_5, undefined1 param_6,int param_7);
extern int func_0051D27C(int *param_1,int param_2,int param_3);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_005841A8(int param_1,undefined4 param_2,int *param_3);
extern int func_00687E28(undefined4 *param_1);
extern int DAT_0050ec88;
extern int *DAT_0050ec8c;
extern int *DAT_0050ec90;
extern undefined4 *DAT_0050ec94;
extern int DAT_0050ec98;
extern uint DAT_0050ec9c;

// USA 0050E868 <- EU 0050E840 (Ghidra, non-matching)
// GLOBAL DAT_0050ec88 int
// GLOBAL DAT_0050ec8c int *
// GLOBAL DAT_0050ec90 int *
// GLOBAL DAT_0050ec94 undefined4 *
// GLOBAL DAT_0050ec98 int
// GLOBAL DAT_0050ec9c uint

/* WARNING: Variable defined which should be unmapped: objStack_20 */

char func_0050E868(int param_1,undefined4 param_2)

{
  char cVar1;
  undefined1 uVar2;
  short sVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  undefined4 *puVar8;
  code *pcVar9;
  int iVar10;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define objStack_20 ((uint *)(albw_frame + 0x0))
  switch(param_2) {
  case 0:
    bVar4 = func_0051D27C((int *)(param_1 + 1000),0,DAT_0050ec88);
    if (!bVar4) {
      return '\0';
    }
    break;
  case 1:
    iVar10 = *(int *)(param_1 + 0xa10);
    if (iVar10 != 8) {
      if (iVar10 != 5 && iVar10 != 6) {
        return '\0';
      }
      *(undefined1 *)(param_1 + 0x855) = 8;
      *(undefined4 *)(param_1 + 0xa10) = 7;
      return '\0';
    }
    puVar8 = (undefined4 *)func_0052FBA0(*DAT_0050ec8c + 0x3dbbc,*(uint *)(param_1 + 0xa08));
    puVar8 = func_00687E28(puVar8);
    cVar1 = '\0';
    if (puVar8 != (undefined4 *)0x0) {
      cVar1 = *(char *)((int)puVar8 + 0x4a1);
    }
    if (puVar8 == (undefined4 *)0x0 || cVar1 == '\0') {
      return cVar1;
    }
    break;
  case 2:
    puVar8 = (undefined4 *)func_0052FBA0(*DAT_0050ec8c + 0x3dbbc,*(uint *)(param_1 + 0xa08));
    puVar8 = func_00687E28(puVar8);
    if (puVar8 == (undefined4 *)0x0) {
      return '\0';
    }
    func_002CF084((int)puVar8);
    *(undefined1 *)(param_1 + 0x855) = 7;
    *(undefined4 *)(param_1 + 0xa10) = 9;
    func_00361610(*DAT_0050ec90,0);
    break;
  case 3:
    if (*(int *)(param_1 + 0xa10) != 2) {
      *(undefined4 *)(param_1 + 0xa10) = 2;
      objStack_20[0] = 0;
      objStack_20[1] = 3;
      objStack_20[2] = 1;
      func_0036720C(param_1 + 0x9cc,0x1e,0x3c,0x1e,0,3,1);
      return '\0';
    }
    if (*(short *)(param_1 + 0x9dc) != 0) {
      return '\0';
    }
    sVar3 = *(short *)(param_1 + 0x9de);
    goto joined_r0x0050ea6c;
  case 4:
    sVar3 = *(short *)(param_1 + 0x9e0);
    goto joined_r0x0050ea80;
  case 5:
    if (*(int *)(param_1 + 0xa10) != 6) {
      *(undefined4 *)(param_1 + 0xa10) = 6;
      objStack_20[0] = 0;
      objStack_20[1] = 3;
      objStack_20[2] = 1;
      func_0036720C(param_1 + 0x9cc,0x1e,0x3c,0x1e,0,3,1);
      return '\0';
    }
    if (*(short *)(param_1 + 0x9dc) != 0) {
      return '\0';
    }
    sVar3 = *(short *)(param_1 + 0x9de);
joined_r0x0050ea6c:
    if (sVar3 == 0) {
      return '\0';
    }
    break;
  case 6:
    sVar3 = *(short *)(param_1 + 0x9e0);
joined_r0x0050ea80:
    if (sVar3 != 0) {
      return '\0';
    }
    return '\x01';
  case 7:
    puVar8 = (undefined4 *)
             func_005841A8(*DAT_0050ec8c,*DAT_0050ec94,*(int **)(DAT_0050ec98 + *DAT_0050ec8c));
    puVar8 = func_00687E28((undefined4 *)*puVar8);
    if (puVar8 != (undefined4 *)0x0) {
      if (*(char *)(param_1 + 0xa18) == '\0') {
        *(undefined1 *)(param_1 + 0x855) = 0;
        iVar10 = (int)*(char *)(puVar8 + 0x104);
        if (iVar10 != 8) {
          if (iVar10 != -1) {
            iVar5 = puVar8[0x10b];
            pcVar9 = *(code **)(iVar5 + iVar10 * 8);
            if ((pcVar9 != (code *)0x0) ||
               (uVar6 = *(uint *)(iVar5 + iVar10 * 8 + 4), (uVar6 & 1) != 0 && uVar6 != 0)) {
              uVar6 = *(uint *)(iVar5 + iVar10 * 8 + 4);
              piVar7 = (int *)(puVar8[0x108] + ((int)uVar6 >> 1));
              if ((uVar6 & 1) != 0) {
                pcVar9 = *(code **)(pcVar9 + *piVar7);
              }
              (*pcVar9)(piVar7,8);
            }
          }
          uVar2 = *(undefined1 *)(puVar8 + 0x104);
          *(undefined1 *)(puVar8 + 0x104) = 8;
          puVar8[0x103] = 0;
          *(undefined1 *)((int)puVar8 + 0x411) = uVar2;
          if (puVar8[0x107] != 0) {
            if ((uint)puVar8[0x105] < 9) {
              piVar7 = (int *)puVar8[0x106];
            }
            else {
              piVar7 = (int *)(puVar8[0x106] + 0x120);
            }
            (**(code **)(*piVar7 + 8))(piVar7);
            objStack_20[1] = piVar7[1];
            objStack_20[0] = DAT_0050ec9c;
            func_0010BEB4(puVar8[0x107],(int *)objStack_20);
          }
          iVar5 = (int)*(char *)(puVar8 + 0x104);
          iVar10 = puVar8[0x109];
          pcVar9 = *(code **)(iVar10 + iVar5 * 8);
          if ((pcVar9 != (code *)0x0) ||
             ((uVar6 = *(uint *)(iVar10 + iVar5 * 8 + 4), (uVar6 & 1) != 0 && (uVar6 != 0)))) {
            uVar6 = *(uint *)(iVar10 + iVar5 * 8 + 4);
            if ((uVar6 & 1) != 0) {
              pcVar9 = *(code **)(pcVar9 + *(int *)(puVar8[0x108] + ((int)uVar6 >> 1)));
            }
            (*pcVar9)((int)(puVar8[0x108]) + ((int)uVar6 >> 1));
          }
        }
        *(undefined1 *)(param_1 + 0xa18) = 1;
        return '\0';
      }
      if (*(char *)(puVar8 + 0x104) != '\b') {
        *(undefined1 *)(param_1 + 0x855) = 1;
        return '\x01';
      }
      return '\0';
    }
    break;
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
    puVar8 = (undefined4 *)func_0052FBA0(*DAT_0050ec8c + 0x3dbbc,*(uint *)(param_1 + 0xa08));
    puVar8 = func_00687E28(puVar8);
    if (puVar8 != (undefined4 *)0x0) {
      func_002CDFC4((int)puVar8,param_2);
    }
  }
  return '\x01';
}

