#include "ghidra_types.h"

extern int func_00392E48(undefined4 *param_1,int param_2,undefined4 *param_3,undefined1 param_4);
extern int func_00520FF8(int param_1);
extern int func_0052107C(int param_1);
extern int func_0066AB60(undefined4 *param_1,undefined1 param_2);
extern float DAT_004e8ae8;
extern float DAT_004e8aec;
extern int DAT_004e8af0;
extern float DAT_004e8af4;
extern undefined4 DAT_004e8af8;
extern uint DAT_004e8afc;
extern uint DAT_004e8b00;

// USA 004E89CC <- EU 004E89A4 (Ghidra, non-matching)
// GLOBAL DAT_004e8ae8 float
// GLOBAL DAT_004e8aec float
// GLOBAL DAT_004e8af0 int
// GLOBAL DAT_004e8af4 float
// GLOBAL DAT_004e8af8 undefined4
// GLOBAL DAT_004e8afc uint
// GLOBAL DAT_004e8b00 uint

undefined4 func_004E89CC(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  float *pfVar6;
  int iVar7;
  uint uVar8;
  float *pfVar9;
  undefined4 *puVar10;
  uint in_fpscr;
  float fVar11;
  float fVar12;
  
  iVar7 = DAT_004e8af0;
  fVar1 = DAT_004e8aec;
  puVar10 = (undefined4 *)(param_1 + 0x4dc);
  *(float *)(param_1 + 0x3e0) = *(float *)(param_1 + 0x3e0) - DAT_004e8ae8;
  uVar5 = *(uint *)(param_1 + 0x50c);
  uVar8 = *(int *)(param_1 + 0x510) + uVar5;
  *(uint *)(param_1 + 0x50c) = uVar8;
  uVar3 = DAT_004e8afc;
  uVar2 = DAT_004e8af8;
  pfVar9 = (float *)(iVar7 + (uVar8 >> 0x18) * 0x10);
  fVar11 = (float)VectorUnsignedToFloat(uVar8 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
  pfVar6 = (float *)(iVar7 + (uVar5 >> 0x18) * 0x10);
  fVar12 = (float)VectorUnsignedToFloat(uVar5 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
  *(float *)(param_1 + 0x3dc) =
       ((*pfVar9 + pfVar9[1] * fVar11 * fVar1) - (*pfVar6 + pfVar6[1] * fVar12 * fVar1)) *
       DAT_004e8af4;
  *(undefined4 *)(param_1 + 0x3e4) = uVar2;
  uVar5 = *(uint *)(param_1 + 0x3e0);
  if (uVar3 <= uVar5) {
    uVar5 = DAT_004e8b00;
  }
  *(uint *)(param_1 + 0x3e0) = uVar5;
  if ((*(float *)(param_1 + 0x3d4) <= *(float *)(param_1 + 0xc)) &&
     (iVar7 = func_00392E48((undefined4 *)(param_1 + 0x3d0),1,(undefined4 *)0x0,0), iVar7 == 0)) {
    return func_0066AB60(puVar10,4);
  }
  iVar7 = func_00520FF8(param_1);
  if (iVar7 == 0) {
    bVar4 = func_0052107C(param_1);
    if ((bVar4) && (*(char *)(param_1 + 0x4e0) != '\x04')) {
      return func_0066AB60(puVar10,2);
    }
  }
  else {
    func_0066AB60(puVar10,3);
  }
  return 0;
}

