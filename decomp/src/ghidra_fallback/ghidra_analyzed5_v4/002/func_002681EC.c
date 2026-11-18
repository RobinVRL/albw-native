#include "ghidra_types.h"

extern int func_00267F94(int *param_1,int param_2,int param_3);
extern int func_00269288(int param_1,uint param_2,int param_3,int param_4,uint param_5);
extern int func_003C33F0(int param_1);
extern int func_004CF478(int param_1,int param_2);
extern int func_004F81F0(int param_1);
extern int func_004FBA3C(int param_1,undefined4 param_2,int param_3);
extern int func_0053A440(int param_1,float *param_2,uint *param_3,int param_4,float *param_5);
extern int func_0053A720(int param_1,float *param_2);
extern int func_0053A7AC(int param_1,float *param_2);
extern int func_0053A900(int param_1);
extern uint DAT_0026853c;
extern int *DAT_00268540;
extern undefined4 DAT_00268544;
extern float DAT_00268548;
extern float DAT_0026854c;

// USA 002681EC <- EU 00268214 (Ghidra, non-matching)
// GLOBAL DAT_0026853c uint
// GLOBAL DAT_00268540 int *
// GLOBAL DAT_00268544 undefined4
// GLOBAL DAT_00268548 float
// GLOBAL DAT_0026854c float

float func_002681EC(int *param_1,int param_2)

{
  bool bVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  float fVar10;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define afStack_44 ((float *)(albw_frame + 0xc))
  iVar8 = (int)*(char *)(param_2 + 0x21);
  *(undefined1 *)(param_1 + 0x2e9) = 0;
  if (*(char *)((int)param_1 + 0x4b5) == '\0') {
    iVar3 = param_1[0x10c];
  }
  else {
    iVar3 = param_1[0x10d];
  }
  uVar2 = func_004F81F0(iVar3);
  lVar9 = (ulonglong)DAT_0026853c << 0x20;
  if ((uVar2 == 7) || (*(int *)(*DAT_00268540 + 0x44) != 0)) goto LAB_00268418;
  lVar9 = CONCAT44(DAT_0026853c,DAT_00268544);
  piVar6 = param_1 + 0x2c6;
  fVar10 = DAT_00268548;
  if (iVar8 == 0x10) {
    if (param_1[0x2ca] < 1) {
      iVar8 = func_0053A900((int)param_1);
      if (iVar8 == 0) {
        func_003C33F0((int)(param_1 + 0x2fc));
        goto LAB_00268418;
      }
      func_003C33F0((int)(param_1 + 0x2fc));
      iVar5 = param_1[0x2ca];
      iVar8 = iVar5;
      iVar3 = iVar5;
      if (iVar5 < 1) {
        iVar3 = param_1[0x2e8];
        iVar8 = iVar3 + -0x18;
      }
      if (iVar8 < 0 != (iVar5 < 1 && SBORROW4(iVar3,0x18))) {
        param_1[0x2e8] = iVar3 + (uint)*(ushort *)(param_2 + 0x30);
      }
LAB_00268384:
      *(undefined1 *)(param_1 + 0x2e9) = 1;
      *(undefined1 *)((int)param_1 + 0xba5) = 1;
      return fVar10;
    }
    func_00269288((int)param_1,0,0x30,0xf,0);
    uVar7 = 0;
    do {
      piVar6 = param_1 + 0x23b;
      if (uVar7 < 2) {
        piVar6 = param_1 + 0x23b + uVar7;
      }
      func_004CF478(*(int *)(*piVar6 + 0x18),(uint)(uVar7 == 1));
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < 2);
  }
  else {
    if (param_1[0x2ca] < 1) {
      iVar3 = func_0053A900((int)param_1);
      if (iVar3 != 0) {
        func_0053A440((int)param_1,afStack_44,(uint *)(param_2 + 4),iVar8,(float *)(param_2 + 0x14))
        ;
        bVar1 = func_0053A720((int)param_1,afStack_44);
        if (bVar1) {
          param_1[0x26a] = param_1[0x26a] + 1;
          func_003C33F0((int)(param_1 + 0x2fc));
          iVar4 = param_1[0x2ca];
          iVar3 = iVar4;
          iVar5 = iVar4;
          if (iVar4 < 1) {
            iVar5 = param_1[0x2e8];
            iVar3 = iVar5 + -0x18;
          }
          if (iVar3 < 0 != (iVar4 < 1 && SBORROW4(iVar5,0x18))) {
            if (iVar8 == 0) {
              iVar5 = iVar5 + 4;
            }
            else {
              iVar5 = iVar5 + (uint)*(ushort *)(param_2 + 0x30);
            }
            param_1[0x2e8] = iVar5;
            if (iVar8 == 0) goto LAB_00268488;
          }
          if (iVar8 == 0xf || iVar8 == 2) goto LAB_00268384;
          if (iVar8 == 8 || iVar8 == 1) {
LAB_002684ec:
            *(undefined1 *)(param_1 + 0x2e9) = 1;
            *(undefined1 *)((int)param_1 + 0xba5) = 1;
            func_004FBA3C((int)param_1,iVar8,(int)*(char *)(param_2 + 0x23));
          }
          else {
            if (iVar8 == 3) {
              if (*(char *)(param_2 + 0x23) == '\x01') goto LAB_002684ec;
            }
            else if (iVar8 == 0) {
LAB_00268488:
              *(undefined1 *)(param_1 + 0x2e9) = 1;
              *(undefined1 *)((int)param_1 + 0xba5) = 1;
              return DAT_0026854c;
            }
            param_1[0x19a] = 0xc;
            param_1[0x19b] = (int)lVar9;
            param_1[0x199] = 0;
            func_00267F94(param_1,iVar8,0);
            func_004FBA3C((int)param_1,iVar8,(int)*(char *)(param_2 + 0x23));
          }
          return fVar10;
        }
      }
      func_00267F94(param_1,iVar8,1);
      func_004FBA3C((int)param_1,iVar8,(int)*(char *)(param_2 + 0x23));
      goto LAB_00268418;
    }
    func_0053A440((int)param_1,afStack_44,(uint *)(param_2 + 4),iVar8,(float *)(param_2 + 0x14));
    uVar7 = func_0053A7AC((int)param_1,afStack_44);
    if (uVar7 < 5) {
      piVar6 = piVar6 + uVar7 * 5;
    }
    if (piVar6[4] < 1) {
      if (param_1[0x2ca] < 1) {
        *(undefined1 *)(param_1 + 0x2e9) = 1;
        return fVar10;
      }
LAB_00268578:
      func_00267F94(param_1,iVar8,0);
      goto LAB_00268418;
    }
    if (iVar8 != 0xf && iVar8 != 0) {
      if (iVar8 != 8 && iVar8 != 1) {
        if (iVar8 == 3) {
          uVar7 = (uint)*(byte *)(param_2 + 0x23);
        }
        if (iVar8 != 3 || uVar7 != 1) goto LAB_00268578;
      }
      func_00267F94(param_1,iVar8,0);
      func_004FBA3C((int)param_1,iVar8,(int)*(char *)(param_2 + 0x23));
      goto LAB_00268418;
    }
    func_00269288((int)param_1,uVar7,(uint)*(ushort *)(param_2 + 0x30),iVar8,0);
    *(undefined1 *)(param_1 + 0x2e9) = 1;
  }
  param_1[0x19a] = 0xc;
  param_1[0x19b] = (int)lVar9;
  param_1[0x199] = 0;
LAB_00268418:
  return ALBW_AS_F32(((ulonglong)lVar9 >> 0x20));
}

