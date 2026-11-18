#include "ghidra_types.h"

extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_004FB4E0(int param_1,float fparam_0);
extern int func_00520FC0(void);
extern int func_00521078(int param_1);
extern int func_005291BC(int param_1,float *param_2,float fparam_0);
extern int func_005292FC(int param_1);
extern int func_0058A8F0(int param_1);
extern undefined8 func_0058AB74(int param_1);
extern int func_0065B29C(undefined4 *param_1,undefined1 param_2);
extern float DAT_001b47a8;
extern float DAT_001b47ac;

// GLOBAL DAT_001b47a8 float
// GLOBAL DAT_001b47ac float
// USA 001B45BC <- EU 001B4598 (Ghidra, function missing from the decomp table)

undefined4 func_001B45BC(int param_1)

{
  bool bVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint in_r2;
  undefined4 *puVar6;
  uint uVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  
  uVar11 = func_0058AB74(param_1);
  fVar10 = DAT_001b47a8;
  puVar6 = (undefined4 *)(param_1 + 0x8bc);
  if ((int)uVar11 == 10) {
    fVar8 = DAT_001b47a8;
    bVar1 = func_00521078(param_1);
    fVar10 = DAT_001b47ac;
    if ((bVar1) || (iVar3 = *(int *)(param_1 + 0x8bc), 0x3c < iVar3)) {
      func_004FB4E0(param_1,DAT_001b47ac);
      *(float *)(*(int *)(param_1 + 0x40c) + 0x158) = fVar10;
      iVar3 = func_0058A8F0(param_1);
      if (iVar3 != 0) {
        func_004FABDC(param_1,1,0xffffffff,0);
      }
    }
    else {
      uVar7 = *(uint *)(param_1 + 0x934);
      if (*(uint *)(param_1 + 0x930) < uVar7) {
        *(uint *)(param_1 + 0x930) = *(uint *)(param_1 + 0x930) + 1;
      }
      if (uVar7 != 0) {
        in_r2 = *(uint *)(param_1 + 0x930);
      }
      if ((uVar7 != 0 && in_r2 != 0) && (fVar8 = fVar10, in_r2 < uVar7)) {
        fVar8 = (float)VectorUnsignedToFloat(in_r2,(byte)(in_fpscr >> 0x15) & 3);
        fVar8 = fVar8 * *(float *)(param_1 + 0x938);
      }
      *(float *)(param_1 + 0x3d0) =
           *(float *)(param_1 + 0x978) +
           (*(float *)(param_1 + 8) - *(float *)(param_1 + 0x978)) * fVar8;
      *(float *)(param_1 + 0x3d4) =
           *(float *)(param_1 + 0x97c) +
           (*(float *)(param_1 + 0xc) - *(float *)(param_1 + 0x97c)) * fVar8;
      *(float *)(param_1 + 0x3d8) =
           *(float *)(param_1 + 0x980) +
           (*(float *)(param_1 + 0x10) - *(float *)(param_1 + 0x980)) * fVar8;
      iVar4 = iVar3;
      if (0x13 < iVar3) {
        iVar4 = *(int *)(param_1 + 0x40c);
      }
      if (iVar3 < 0x14) {
        iVar4 = 0x14 - iVar4;
        if (iVar4 < 2) {
          iVar4 = 1;
        }
        fVar8 = *(float *)(*(int *)(param_1 + 0x40c) + 0x158);
        fVar9 = (float)VectorSignedToFloat(iVar4,(byte)(in_fpscr >> 0x15) & 3);
        *(float *)(*(int *)(param_1 + 0x40c) + 0x158) = fVar8 + (fVar10 - fVar8) * (fVar10 / fVar9);
      }
      else {
        *(float *)(iVar4 + 0x158) = fVar10;
      }
    }
    *(undefined1 *)(param_1 + 0x829) = 1;
    return 0;
  }
  if (*(char *)(param_1 + 0x986) == '\0') {
    *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) | 0x80000084;
    pfVar2 = (float *)func_00520FC0();
    iVar3 = func_005291BC(param_1,pfVar2,fVar10);
    if (iVar3 == 0) {
      puVar5 = func_005292FC(param_1);
      if ((puVar5 != (undefined4 *)0x0) &&
         (iVar3 = func_005291BC(param_1,(float *)(puVar5 + 0xf4),fVar10), iVar3 != 0)) {
        return func_0065B29C(puVar6,5);
      }
      return func_0065B29C(puVar6,0);
    }
    func_0065B29C(puVar6,3);
  }
  return 0;
}

