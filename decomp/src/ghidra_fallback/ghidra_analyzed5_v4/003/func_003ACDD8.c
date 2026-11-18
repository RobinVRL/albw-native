#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern float func_00115DC8(float *param_1);
extern int func_0014EEB8(int param_1,undefined4 *param_2,undefined4 param_3,float fparam_0);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_00520FC0(void);
extern int func_006690CC(undefined4 *param_1,undefined1 param_2);
extern float DAT_003acf70;
extern float DAT_003acf74;
extern float DAT_003acf78;
extern float DAT_003acf7c;
extern float DAT_003acf80;
extern float DAT_003acf84;
extern undefined4 DAT_003acf88;
extern float DAT_003acf8c;

// USA 003ACDD8 <- EU 003ACDB4 (Ghidra, non-matching)
// GLOBAL DAT_003acf70 float
// GLOBAL DAT_003acf74 float
// GLOBAL DAT_003acf78 float
// GLOBAL DAT_003acf7c float
// GLOBAL DAT_003acf80 float
// GLOBAL DAT_003acf84 float
// GLOBAL DAT_003acf88 undefined4
// GLOBAL DAT_003acf8c float

void func_003ACDD8(int param_1)

{
  float *pfVar1;
  int iVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define fStack_30 (*(float *)(albw_frame + 0x0))
  #define local_2c (*(float *)(albw_frame + 0x4))
  fVar7 = DAT_003acf74;
  fVar3 = DAT_003acf70;
  if (*(uint *)(param_1 + 0x460) < *(uint *)(param_1 + 0x464)) {
    iVar2 = *(uint *)(param_1 + 0x460) + 1;
    *(int *)(param_1 + 0x460) = iVar2;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x460);
  }
  iVar2 = *(uint *)(param_1 + 0x464) - iVar2;
  if (iVar2 < 2) {
    iVar2 = 1;
  }
  fVar4 = (float)VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
  fVar5 = *(float *)(param_1 + 0x4b4);
  *(float *)(param_1 + 0x4b4) = fVar5 + (fVar3 - fVar5) * (fVar7 / fVar4);
  if (*(int *)(param_1 + 0x430) == 0) {
    if (*(uint *)(param_1 + 0x454) < *(uint *)(param_1 + 0x458)) {
      *(uint *)(param_1 + 0x454) = *(uint *)(param_1 + 0x454) + 1;
      fVar4 = DAT_003acf78;
      pfVar1 = (float *)func_00520FC0();
      func_00115C70(&fStack_30,pfVar1,(float *)(param_1 + 0x3d0));
      local_2c = fVar4;
      func_00115DC8(&fStack_30);
      func_004D80A4((float *)(param_1 + 0x3dc),*(uint *)(param_1 + 1000),*(float *)(param_1 + 0x4b4)
                   );
      *(float *)(param_1 + 0x3e0) = fVar4;
      fVar5 = *(float *)(param_1 + 8) - *(float *)(param_1 + 0x3d0);
      fVar3 = *(float *)(param_1 + 0x10) - *(float *)(param_1 + 0x3d8);
      fVar3 = SQRT(fVar5 * fVar5 + fVar3 * fVar3);
      if (fVar4 < fVar3) {
        fVar3 = fVar3 / DAT_003acf7c;
        if (fVar7 < fVar3) {
          fVar3 = fVar7;
        }
        fVar6 = fVar3 * fVar3 - fVar3;
        fVar5 = fVar6 * fVar3;
        fVar3 = fVar3 * fVar3 - fVar5 * DAT_003acf84;
        *(float *)(param_1 + 0x3d4) =
             *(float *)(param_1 + 0xc) +
             (*(float *)(param_1 + 0x4b8) - *(float *)(param_1 + 0xc)) *
             ((fVar4 - fVar3 * fVar4) + fVar3 * fVar7 + (fVar5 - fVar6) * DAT_003acf80 +
             fVar5 * fVar4);
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x2d7) = 1;
      *(undefined4 *)(param_1 + 0x430) = 1;
    }
  }
  iVar2 = func_0014EEB8(param_1,(undefined4 *)(param_1 + 0x478),DAT_003acf88,DAT_003acf8c);
  if (iVar2 != 0) {
    if (*(char *)(param_1 + 0x4bc) == '\x01') {
      func_006690CC((undefined4 *)(param_1 + 0x40c),1);
    }
    *(undefined1 *)(param_1 + 0x4bc) = 1;
  }
  return;
}

