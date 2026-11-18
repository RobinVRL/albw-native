#include "ghidra_types.h"

extern int func_0010B3EC(undefined4 *param_1,int param_2,int param_3);
extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_0019B04C(uint param_1);
extern int func_002DFF7C(undefined4 *param_1);
extern int func_0033AC20(float *param_1,undefined4 param_2,undefined4 param_3);
extern int func_004C43E0(int param_1,int *param_2);
extern int func_0055696C(int param_1,int param_2);
extern int *DAT_0017ccac;
extern int DAT_0017ccb0;
extern float DAT_0017ccb4;
extern uint *DAT_0017ccb8;
extern int *DAT_0017ccbc;
extern float DAT_0017ccc0;
extern float DAT_0017ccc4;

// USA 0017CAB8 <- EU 0017CAB8 (Ghidra, non-matching)
// GLOBAL DAT_0017ccac int *
// GLOBAL DAT_0017ccb0 int
// GLOBAL DAT_0017ccb4 float
// GLOBAL DAT_0017ccb8 uint *
// GLOBAL DAT_0017ccbc int *
// GLOBAL DAT_0017ccc0 float
// GLOBAL DAT_0017ccc4 float

undefined4 func_0017CAB8(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  float fVar6;
  undefined4 *puVar7;
  int iVar8;
  float *pfVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  uint in_fpscr;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  _Alignas(8) unsigned char albw_frame[0x370];
  #define local_370 (*(uint *)(albw_frame + 0x0))
  #define local_36c (*(int *)(albw_frame + 0x4))
  #define local_368 (*(undefined4 * *)(albw_frame + 0x8))
  #define local_364 (*(int * *)(albw_frame + 0xc))
  #define local_360 (*(int * *)(albw_frame + 0x10))
  #define local_35c ((int *)(albw_frame + 0x14))
  #define uStack_33c (*(undefined4 *)(albw_frame + 0x34))
  #define auStack_338 ((undefined1 *)(albw_frame + 0x38))
  #define local_314 (*(int *)(albw_frame + 0x5c))
  #define local_310 (*(float *)(albw_frame + 0x60))
  #define local_30c (*(float *)(albw_frame + 0x64))
  #define local_308 (*(float *)(albw_frame + 0x68))
  #define local_304 (*(float *)(albw_frame + 0x6c))
  #define local_300 (*(float *)(albw_frame + 0x70))
  #define local_2fc (*(float *)(albw_frame + 0x74))
  #define local_2f8 (*(undefined4 *)(albw_frame + 0x78))
  #define local_2f4 (*(undefined4 *)(albw_frame + 0x7c))
  #define local_2f0 (*(undefined4 *)(albw_frame + 0x80))
  #define local_2ec (*(undefined2 *)(albw_frame + 0x84))
  #define local_2cc (*(undefined4 *)(albw_frame + 0xa4))
  #define local_2c8 (*(undefined4 *)(albw_frame + 0xa8))
  #define local_54 (*(undefined4 *)(albw_frame + 0x31c))
  #define local_4c (*(float *)(albw_frame + 0x324))
  #define fStack_48 (*(float *)(albw_frame + 0x328))
  #define fStack_44 (*(float *)(albw_frame + 0x32c))
  iVar5 = 0;
  iVar10 = *DAT_0017ccac;
  local_364 = local_35c;
  iVar12 = 8;
  local_370 = 0;
  local_36c = 0;
  local_368 = (undefined4 *)0x0;
  do {
    iVar12 = iVar12 + -1;
    local_364[iVar5] = (int)(local_364 + iVar5 + 1);
    iVar5 = iVar5 + 1;
  } while (iVar12 != 0);
  uStack_33c = 0;
  local_360 = local_364;
  func_0010B3EC(&local_370,9,(int)auStack_338);
  iVar5 = DAT_0017ccb0;
  pfVar9 = *(float **)(iVar10 + 0x1c);
  iVar12 = 0;
  do {
    iVar8 = *(int *)(iVar5 + iVar12 * 4);
    iVar2 = func_0055696C(iVar10,iVar8);
    piVar1 = local_364;
    if ((iVar2 == 1) && ((int)local_370 < local_36c)) {
      if (local_364 != (int *)0x0) {
        piVar4 = (int *)*local_364;
        *local_364 = iVar8;
        local_364 = piVar4;
      }
      if ((int)local_370 < local_36c) {
        local_368[local_370] = piVar1;
        local_370 = local_370 + 1;
      }
    }
    iVar12 = iVar12 + 1;
  } while (iVar12 < 9);
  if ((int)local_370 < 1) {
    uVar3 = 0;
  }
  else {
    fVar6 = pfVar9[2];
    fVar15 = *pfVar9;
    fVar14 = pfVar9[1] + DAT_0017ccb4;
    local_2f4 = 0;
    local_2f0 = 0;
    local_2f8 = 0;
    local_2cc = 0;
    local_2c8 = 0;
    local_54 = 0;
    fVar13 = DAT_0017ccb4;
    func_002DFF7C(&local_314);
    local_314 = func_0019B04C(*DAT_0017ccb8);
    local_2ec = 1;
    local_310 = fVar15;
    local_30c = fVar14;
    local_308 = fVar6;
    local_304 = fVar13;
    local_300 = fVar13;
    local_2fc = fVar13;
    func_004C43E0(*DAT_0017ccbc,&local_314);
    puVar7 = local_368;
    puVar11 = local_368 + local_370;
    fVar13 = (float)VectorSignedToFloat(local_370,(byte)(in_fpscr >> 0x15) & 3);
    uVar16 = func_00114608((uint)ALBW_AS_U32(((DAT_0017ccc0 / fVar13) * DAT_0017ccc4)),local_370);
    iVar5 = 0;
    for (; puVar7 != puVar11; puVar7 = puVar7 + 1) {
      local_4c = *pfVar9;
      fStack_48 = pfVar9[1];
      fStack_44 = pfVar9[2];
      iVar5 = iVar5 + (int)uVar16;
      func_0033AC20(&local_4c,iVar5,*(undefined4 *)*puVar7);
    }
    uVar3 = 1;
  }
  return uVar3;
}

