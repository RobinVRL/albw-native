// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_0010A464(undefined4 *param_1);
extern int func_00111A64(uint *param_1);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_0025B7D8(int param_1,uint param_2);
extern int func_0025B824(int param_1,float fparam_0);
extern int func_0025B860(int param_1,int param_2,float fparam_0,float fparam_1);
extern int func_0025B874(undefined4 *param_1);
extern uint DAT_004ea99c;
extern int *DAT_004ea9a0;
extern float DAT_004ea9a4;
extern float DAT_004ea9a8;
extern float DAT_004ea9ac;
extern float DAT_004ea9b0;
extern float DAT_004ea9b4;
extern float DAT_004ea9b8;

// USA 004EA868 <- EU 004EA840 (Ghidra, non-matching)
// GLOBAL DAT_004ea99c uint
// GLOBAL DAT_004ea9a0 int *
// GLOBAL DAT_004ea9a4 float
// GLOBAL DAT_004ea9a8 float
// GLOBAL DAT_004ea9ac float
// GLOBAL DAT_004ea9b0 float
// GLOBAL DAT_004ea9b4 float
// GLOBAL DAT_004ea9b8 float

int func_004EA868(int param_1,int *param_2,undefined4 *param_3,int param_4,float fparam_0)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint in_fpscr;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  _Alignas(8) unsigned char albw_frame[0xf0];
  #define auStack_e8 ((undefined4 *)(albw_frame + 0x8))
  #define auStack_88 ((undefined4 *)(albw_frame + 0x68))
  func_0010A464(auStack_e8);
  if (param_3 == (undefined4 *)0x0) {
    param_3 = auStack_e8;
  }
  if (param_4 == 0) {
    if (*(int **)(param_1 + 0x58) == (int *)0x0) goto LAB_004ea994;
    iVar3 = func_00150A84(*(int **)(param_1 + 0x58),param_2,(int)param_3);
  }
  else {
    if (*(int *)(param_1 + 0x5c) == 0) {
LAB_004ea994:
      iVar3 = 0;
      goto LAB_004ea97c;
    }
    func_0010A464(auStack_88);
    puVar5 = param_3;
    if (param_3 == (undefined4 *)0x0) {
      puVar5 = auStack_88;
    }
    func_0025B7D8((int)puVar5,DAT_004ea99c);
    iVar3 = func_00150A84(*(int **)(param_1 + 0x5c),param_2,(int)puVar5);
    func_0025B874(auStack_88);
  }
  piVar2 = DAT_004ea9a0;
  if (iVar3 != 0) {
    fVar8 = DAT_004ea9a4;
    uVar4 = func_00111A64((uint *)(*DAT_004ea9a0 + 0x660));
    fVar7 = (float)VectorUnsignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
    fVar9 = fparam_0 * DAT_004ea9ac;
    uVar4 = in_fpscr & 0xfffffff | (uint)(fVar9 < DAT_004ea9b0) << 0x1f |
            (uint)(fVar9 == DAT_004ea9b0) << 0x1e;
    uVar6 = uVar4 | (uint)(NAN(fVar9) || NAN(DAT_004ea9b0)) << 0x1c;
    bVar1 = (byte)(uVar4 >> 0x18);
    fVar10 = fVar9;
    if (!(bool)(bVar1 >> 6 & 1) && bVar1 >> 7 == ((byte)(uVar6 >> 0x1c) & 1)) {
      fVar10 = DAT_004ea9b0;
    }
    fVar11 = DAT_004ea9a8;
    func_0025B860((int)param_3,0,(DAT_004ea9b0 - fVar7 * DAT_004ea9a8 * fVar8) * fVar9,DAT_004ea9b0)
    ;
    fVar8 = DAT_004ea9b4;
    uVar4 = func_00111A64((uint *)(*piVar2 + 0x660));
    fVar7 = (float)VectorUnsignedToFloat(uVar4,(byte)(uVar6 >> 0x15) & 3);
    func_0025B824((int)param_3,fVar7 * fVar11 * fVar8 + DAT_004ea9b8 + fVar10 * fVar8);
  }
LAB_004ea97c:
  func_0025B874(auStack_e8);
  return iVar3;
}

