#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern float func_00115154(float *param_1,float *param_2,uint param_3);
extern int func_002D5350(int param_1,int param_2,int param_3,float fparam_0);
extern int func_004D80EC(float *param_1,float *param_2,int param_3);
extern float DAT_003a7704;
extern uint DAT_003a7708;

// USA 003A762C <- EU 003A7608 (Ghidra, non-matching)
// GLOBAL DAT_003a7704 float
// GLOBAL DAT_003a7708 uint

bool func_003A762C(int param_1,int param_2,float fparam_0)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  float *pfVar4;
  int iVar5;
  uint extraout_r1;
  uint *puVar6;
  uint uVar7;
  bool bVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define local_24 ((float *)(albw_frame + 0xc))
  uVar7 = **(uint **)(param_1 + 0x3c);
  pfVar4 = *(float **)(param_1 + 0x30);
  fVar9 = *pfVar4 - *(float *)(param_1 + 0x70);
  fVar10 = pfVar4[2] - *(float *)(param_1 + 0x78);
  fVar9 = SQRT(fVar9 * fVar9 + fVar10 * fVar10);
  bVar1 = fVar9 == fparam_0;
  bVar2 = fparam_0 <= fVar9;
  if (!bVar2 || bVar1) {
    fparam_0 = DAT_003a7704;
  }
  fVar9 = DAT_003a7704;
  if (bVar2 && !bVar1) {
    iVar5 = func_004D80EC(pfVar4,(float *)(param_1 + 0x70),uVar7);
    uVar11 = func_00114608(DAT_003a7708,extraout_r1);
    puVar6 = (uint *)((ulonglong)uVar11 >> 0x20);
    if (param_2 == 0) {
      puVar6 = *(uint **)(param_1 + 0x3c);
    }
    uVar7 = (int)uVar11 + iVar5 & 0xe0000000;
    if (param_2 == 0) {
      *puVar6 = uVar7;
    }
  }
  func_00115154(&local_28,local_24,uVar7);
  *(float *)(*(int *)(param_1 + 0x34) + 4) = fVar9;
  **(float **)(param_1 + 0x38) = fparam_0 * local_28;
  *(float *)(*(int *)(param_1 + 0x38) + 8) = fparam_0 * local_24[0];
  cVar3 = *(char *)(param_1 + 0x89);
  bVar8 = cVar3 == '\0';
  if (bVar8) {
    cVar3 = *(char *)(param_1 + 0x8c);
  }
  if (bVar8 && cVar3 == '\0') {
    func_002D5350(param_1,0,7,fparam_0);
  }
  return !bVar2 || bVar1;
}

