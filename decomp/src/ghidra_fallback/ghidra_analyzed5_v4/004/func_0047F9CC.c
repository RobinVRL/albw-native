#include "ghidra_types.h"

extern undefined8 func_00110D44(undefined4 *param_1,byte *param_2,uint param_3);
extern int func_001672F8(int param_1,uint param_2,float fparam_0,float fparam_1);
extern int func_002313DC(int param_1);
extern int func_00231524(int param_1);
extern undefined4 func_002316CC(int param_1,float fparam_0);
extern int func_0047FD30(int param_1,int *param_2);
extern int func_0047FE10(int param_1);
extern int func_004994B0(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,...);
extern int func_005229AC(int *param_1,int *param_2);
extern int func_0054D224(int *param_1);
extern int func_0054D240(short *param_1);
extern float DAT_0047fcc0;
extern int *DAT_0047fcc4;
extern int DAT_0047fcc8;
extern float DAT_0047fccc;
extern float DAT_0047fcd0;
extern int DAT_0047fcd4;
extern float DAT_0047fcd8;
extern undefined DAT_0047fcdc;
extern int DAT_0047fcf0;
extern char s__P_Heart__02d_0047fcdf[];
extern char s_cf_0047fcdf[];
extern undefined4 _DAT_0047fcdc;

// USA 0047F9CC <- EU 0047F9A4 (Ghidra, non-matching)
// GLOBAL DAT_0047fcc0 float
// GLOBAL DAT_0047fcc4 int *
// GLOBAL DAT_0047fcc8 int
// GLOBAL DAT_0047fccc float
// GLOBAL DAT_0047fcd0 float
// GLOBAL DAT_0047fcd4 int
// GLOBAL DAT_0047fcd8 float
// GLOBAL DAT_0047fcdc undefined
// GLOBAL DAT_0047fcf0 int
// GLOBAL s_cf_0047fcdf string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void func_0047F9CC(int param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  undefined4 in_r3;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint in_fpscr;
  undefined4 uVar8;
  float fparam_0;
  float fVar9;
  float fparam_0_00;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  _Alignas(8) unsigned char albw_frame[0x220];
  #define local_218 (*(int *)(albw_frame + 0x8))
  #define local_214 (*(undefined1 * *)(albw_frame + 0xc))
  #define uStack_210 (*(undefined4 *)(albw_frame + 0x10))
  #define local_20c ((undefined1 *)(albw_frame + 0x14))
  #define uStack_1fd (*(undefined1 *)(albw_frame + 0x23))
  #define local_1f8 (*(byte *)(albw_frame + 0x28))
  #define local_1f7 (*(byte *)(albw_frame + 0x29))
  #define local_48 (*(int *)(albw_frame + 0x1d8))
  #define local_44 (*(int *)(albw_frame + 0x1dc))
  fVar9 = DAT_0047fcc0;
  func_001672F8(*(int *)(param_1 + 0x1c),(int)*(short *)(param_1 + 0x46),DAT_0047fcc0,DAT_0047fcc0);
  iVar7 = DAT_0047fcc8;
  piVar4 = DAT_0047fcc4;
  uVar8 = ALBW_AS_U32(VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x15) & 3));
  iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + 0xc);
  if ((uint)(int)*(short *)(param_1 + 0x46) < *(uint *)(*(int *)(param_1 + 0x1c) + 8)) {
    iVar3 = iVar3 + *(short *)(param_1 + 0x46) * 0x38;
  }
  *(undefined4 *)(iVar3 + 0x14) = uVar8;
  iVar7 = param_2 * iVar7;
  *(undefined4 *)(*(int *)(iVar3 + 0x10) + 0x10) = uVar8;
  fparam_0_00 = fVar9;
  bVar2 = func_0054D224((int *)(*piVar4 + 0x9cc + iVar7 * 4));
  if ((bVar2) && (bVar2 = func_0054D240((short *)(*piVar4 + iVar7 * 4 + 0x172c)), bVar2)) {
    func_0047FE10(param_1);
  }
  else {
    func_00110D44((undefined4 *)&local_1f8,(byte *)(*DAT_0047fcc4 + iVar7 * 4 + 0xa8c),0x1a0);
    uVar6 = (uint)local_1f8;
    local_214 = local_20c;
    uStack_210 = 0x10;
    fVar9 = DAT_0047fccc;
    if (10 < local_1f7 >> 2) {
      fVar9 = DAT_0047fcd0;
    }
    uStack_1fd = 0;
    uVar5 = 0;
    local_20c[0] = 0;
    local_218 = DAT_0047fcd4;
    fVar10 = DAT_0047fccc;
    fVar11 = DAT_0047fcd0;
    fVar12 = DAT_0047fcd8;
    fVar13 = ALBW_AS_F32(_DAT_0047fcdc);
    do {
      func_004994B0((int)&local_218,s__P_Heart__02d_0047fcdf + 1,uVar5,in_r3);
      piVar4 = *(int **)(param_1 + 0x1c);
      if ((int)uVar5 < (int)(uint)(local_1f7 >> 2)) {
        iVar3 = func_005229AC(piVar4,&local_218);
        if (*(char *)(iVar3 + 0x45) != -1) {
          *(undefined1 *)(iVar3 + 0x45) = 0xff;
          *(byte *)(piVar4 + 0x1c) = *(byte *)(piVar4 + 0x1c) | 2;
        }
        if ((int)uVar6 <= (int)(uVar5 * 4)) goto joined_r0x0047fcb0;
        if (uVar5 * 4 + 1 == uVar6) {
          iVar3 = param_1 + 0x68;
          fparam_0 = fVar10;
          if (uVar5 < 0x14) {
            iVar3 = param_1 + 0x68 + uVar5 * 0xc;
          }
        }
        else if (uVar5 * 4 + 2 == uVar6) {
          iVar3 = param_1 + 0x68;
          fparam_0 = fVar11;
          if (uVar5 < 0x14) {
            iVar3 = param_1 + 0x68 + uVar5 * 0xc;
          }
        }
        else if (uVar5 * 4 + 3 == uVar6) {
          iVar3 = param_1 + 0x68;
          fparam_0 = fVar12;
          if (uVar5 < 0x14) {
            iVar3 = param_1 + 0x68 + uVar5 * 0xc;
          }
        }
        else {
          iVar3 = param_1 + 0x68;
          fparam_0 = fVar13;
          if (uVar5 < 0x14) {
            iVar3 = param_1 + 0x68 + uVar5 * 0xc;
          }
        }
        func_002316CC(iVar3,fparam_0);
      }
      else {
        iVar3 = func_005229AC(piVar4,&local_218);
        if (*(char *)(iVar3 + 0x45) != '\0') {
          *(undefined1 *)(iVar3 + 0x45) = 0;
          *(byte *)(piVar4 + 0x1c) = *(byte *)(piVar4 + 0x1c) | 2;
        }
joined_r0x0047fcb0:
        iVar3 = param_1 + 0x68;
        if (uVar5 < 0x14) {
          iVar3 = param_1 + 0x68 + uVar5 * 0xc;
        }
        func_002316CC(iVar3,fparam_0_00);
      }
      piVar4 = DAT_0047fcc4;
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < 0x14);
    local_48 = DAT_0047fcf0;
    local_44 = *DAT_0047fcc4 + iVar7 * 4 + 0x172c;
    func_0047FD30(param_1,&local_48);
    cVar1 = *(char *)(*piVar4 + iVar7 * 4 + 0x1742);
    *(undefined2 *)(param_1 + 0x20) = 0;
    if (cVar1 == '\0') {
      func_002313DC(param_1 + 0x20);
      *(undefined1 *)(param_1 + 0x158) = 0;
    }
    else {
      func_00231524(param_1 + 0x20);
      *(undefined1 *)(param_1 + 0x158) = 1;
    }
  }
  func_001672F8(*(int *)(param_1 + 0x1c),(int)*(short *)(param_1 + 0x3a),fparam_0_00,fparam_0_00);
  iVar7 = *(int *)(*(int *)(param_1 + 0x1c) + 0xc);
  if ((uint)(int)*(short *)(param_1 + 0x3a) < *(uint *)(*(int *)(param_1 + 0x1c) + 8)) {
    iVar7 = iVar7 + *(short *)(param_1 + 0x3a) * 0x38;
  }
  *(float *)(iVar7 + 0x14) = fVar9;
  *(float *)(*(int *)(iVar7 + 0x10) + 0x10) = fVar9;
  return;
}

