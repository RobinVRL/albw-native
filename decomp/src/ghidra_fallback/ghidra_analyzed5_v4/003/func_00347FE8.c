#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_0028C8EC(int param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_0028D700(int param_1,float fparam_0,float fparam_1);
extern int func_004EA104(int param_1,int *param_2,int param_3);
extern int func_004EAA98(int param_1);
extern float func_0053EDC8(int param_1);
extern int func_005468EC(int param_1,uint *param_2,float fparam_0,float fparam_1);
extern int func_005841A8(int param_1,undefined4 param_2,int *param_3);
extern uint DAT_003483dc;
extern float DAT_003483e0;
extern float DAT_003483e4;
extern float DAT_003483e8;
extern float DAT_003483ec;
extern float DAT_003483f0;
extern float DAT_003483f4;
extern float DAT_003483f8;
extern float DAT_003483fc;
extern float DAT_00348400;
extern float DAT_00348404;
extern float DAT_00348408;
extern float DAT_0034840c;
extern float DAT_00348410;
extern float DAT_00348414;
extern float DAT_00348418;
extern int *DAT_0034841c;
extern undefined4 *DAT_00348420;
extern int DAT_00348424;
extern float DAT_00348428;
extern float DAT_0034842c;
extern float DAT_00348430;
extern int DAT_00348434;
extern int *DAT_00348438;
extern float DAT_0034843c;
extern undefined DAT_00348440;
extern int DAT_00348454;
extern uint DAT_0034852c;
extern float DAT_00348530;
extern char s__SE_PL_JUMP_S_00348443[];
extern char s_fff_SE_PL_JUMP_L_00348458[];
extern undefined4 _DAT_00348440;

// USA 00347FE8 <- EU 00347FC4 (Ghidra, non-matching)
// GLOBAL DAT_003483dc uint
// GLOBAL DAT_003483e0 float
// GLOBAL DAT_003483e4 float
// GLOBAL DAT_003483e8 float
// GLOBAL DAT_003483ec float
// GLOBAL DAT_003483f0 float
// GLOBAL DAT_003483f4 float
// GLOBAL DAT_003483f8 float
// GLOBAL DAT_003483fc float
// GLOBAL DAT_00348400 float
// GLOBAL DAT_00348404 float
// GLOBAL DAT_00348408 float
// GLOBAL DAT_0034840c float
// GLOBAL DAT_00348410 float
// GLOBAL DAT_00348414 float
// GLOBAL DAT_00348418 float
// GLOBAL DAT_0034841c int *
// GLOBAL DAT_00348420 undefined4 *
// GLOBAL DAT_00348424 int
// GLOBAL DAT_00348428 float
// GLOBAL DAT_0034842c float
// GLOBAL DAT_00348430 float
// GLOBAL DAT_00348434 int
// GLOBAL DAT_00348438 int *
// GLOBAL DAT_0034843c float
// GLOBAL DAT_00348440 undefined
// GLOBAL DAT_00348454 int
// GLOBAL DAT_0034852c uint
// GLOBAL DAT_00348530 float

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_00347FE8(int param_1,uint param_2,float *param_3,int *param_4)

{
  short sVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  float *pfVar7;
  float *pfVar8;
  int iVar9;
  uint in_fpscr;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(char * *)(albw_frame + 0x4))
  iVar5 = DAT_00348434;
  fVar15 = DAT_00348430;
  switch(*(undefined2 *)(param_2 + 2)) {
  case 0:
    sVar1 = *(short *)(*(int *)(param_1 + 0x4c) + 0x50);
    if (sVar1 == 0x4f || sVar1 == 0x50) {
      return func_0028C8EC(*(int *)(param_1 + 0x4c),4,param_3,param_4);
    }
    break;
  case 2:
  case 3:
    *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(*(int *)(param_1 + 0x30) + 4);
    uVar16 = func_00114608(DAT_003483dc,param_2);
    fVar15 = DAT_003483e0;
    iVar5 = (int)uVar16;
    iVar9 = 3;
    uVar6 = iVar5 + *(int *)(param_1 + 0x80) & 0xe0000000;
    *(uint *)(param_1 + 0x80) = uVar6;
    switch(uVar6 + iVar5 >> 0x1d) {
    case 0:
    case 1:
    case 7:
      func_005468EC(param_1,(uint *)(param_1 + 0x80),DAT_003483e8,DAT_003483e4);
      iVar4 = func_005468EC(param_1,(uint *)(param_1 + 0x80),DAT_003483f0,DAT_003483ec);
      break;
    case 2:
    case 3:
    case 5:
    case 6:
      func_005468EC(param_1,(uint *)(param_1 + 0x80),DAT_003483f4,DAT_003483e4);
      iVar4 = func_005468EC(param_1,(uint *)(param_1 + 0x80),DAT_003483f8,DAT_003483ec);
      break;
    case 4:
      fVar12 = DAT_003483e4;
      func_005468EC(param_1,(uint *)(param_1 + 0x80),DAT_003483fc,DAT_003483e4);
      iVar4 = func_005468EC(param_1,(uint *)(param_1 + 0x80),DAT_00348400,DAT_003483ec);
      if (iVar4 != 0) {
        iVar9 = 6;
      }
      iVar4 = func_005468EC(param_1,(uint *)(param_1 + 0x80),fVar12,DAT_00348404);
      if (iVar4 != 0) {
        iVar9 = 9;
      }
    default:
      goto switchD_00348078_default;
    }
    if (iVar4 != 0) {
      iVar9 = 6;
    }
switchD_00348078_default:
    piVar2 = DAT_0034841c;
    fVar12 = fVar15;
    switch((uint)(*(int *)(param_1 + 0x80) + iVar5) >> 0x1d) {
    case 0:
    case 1:
    case 7:
      fVar12 = DAT_0034840c;
      fVar15 = DAT_00348408;
      break;
    case 2:
    case 3:
    case 5:
    case 6:
      fVar12 = DAT_0034840c;
      fVar15 = DAT_00348410;
      break;
    case 4:
      fVar12 = DAT_0034840c;
      fVar15 = DAT_00348414;
    }
    if (iVar9 == 6) {
      fVar15 = fVar15 * DAT_00348418;
      fVar12 = fVar12 * DAT_00348418;
    }
    iVar5 = func_005841A8(*DAT_0034841c,*DAT_00348420,*(int **)(DAT_00348424 + *DAT_0034841c));
    pfVar7 = *(float **)(param_1 + 0x34);
    uVar6 = *(uint *)(param_1 + 0x80);
    if (iVar5 != *(int *)(*piVar2 + 0x3dbc8)) {
      fVar12 = DAT_0034842c;
      fVar15 = DAT_00348428;
    }
    pfVar8 = (float *)(DAT_00348434 + (uVar6 >> 0x18) * 0x10);
    fVar10 = (float)VectorUnsignedToFloat(uVar6 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
    fVar13 = pfVar8[2];
    fVar14 = pfVar8[3];
    fVar11 = (float)VectorUnsignedToFloat(uVar6 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
    fVar11 = fVar11 * DAT_00348430;
    *pfVar7 = (*pfVar8 + pfVar8[1] * fVar10 * DAT_00348430) * fVar15;
    pfVar7[1] = fVar12;
    pfVar7[2] = (fVar13 + fVar14 * fVar11) * fVar15;
    *(undefined1 *)(*(int *)(param_1 + 0x50) + 0x52b) = 1;
    return func_004EAA98(*DAT_00348438);
  case 4:
    uVar6 = *(uint *)(param_2 + 0xc);
    *(uint *)(param_1 + 0x58) = uVar6;
    fVar12 = ALBW_AS_F32(_DAT_00348440);
    pfVar7 = (float *)(iVar5 + (uVar6 >> 0x18) * 0x10);
    fVar10 = (float)VectorUnsignedToFloat(uVar6 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
    pfVar8 = *(float **)(param_1 + 0x34);
    fVar11 = (float)VectorUnsignedToFloat(uVar6 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
    fVar11 = (pfVar7[2] + pfVar7[3] * fVar11 * fVar15) * DAT_0034843c;
    *pfVar8 = (*pfVar7 + pfVar7[1] * fVar10 * fVar15) * DAT_0034843c;
    pfVar8[1] = fVar12;
    pfVar8[2] = fVar11;
    local_1c = s__SE_PL_JUMP_S_00348443 + 1;
    local_20 = DAT_00348454;
    func_004EA104(*DAT_00348438,&local_20,0);
    break;
  case 5:
    uVar6 = *(uint *)(param_2 + 0xc);
    *(uint *)(param_1 + 0x58) = uVar6;
    uVar3 = (*(undefined4 *)((char *)&s_fff_SE_PL_JUMP_L_00348458 + 0));
    fVar12 = DAT_00348430;
    fVar15 = DAT_00348414;
    if (*(char *)(param_2 + 8) != '\0') {
      param_4 = (int *)(uVar6 & 0xffffff);
      pfVar7 = (float *)(DAT_00348434 + (uVar6 >> 0x18) * 0x10);
      fVar10 = (float)VectorUnsignedToFloat(param_4,(byte)(in_fpscr >> 0x15) & 3);
      param_3 = *(float **)(param_1 + 0x34);
      fVar13 = pfVar7[2];
      fVar14 = pfVar7[3];
      fVar11 = (float)VectorUnsignedToFloat(uVar6 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
      *param_3 = (*pfVar7 + pfVar7[1] * fVar10 * DAT_00348430) * DAT_00348414;
      param_3[1] = ALBW_AS_F32(uVar3);
      param_3[2] = (fVar13 + fVar14 * fVar11 * fVar12) * fVar15;
    }
    func_0028C8EC(*(int *)(param_1 + 0x4c),1,param_3,param_4);
    local_1c = s_fff_SE_PL_JUMP_L_00348458 + 4;
    local_20 = DAT_00348454;
    return func_004EA104(*DAT_00348438,&local_20,0);
  case 6:
    *(undefined1 *)(param_1 + 0x70) = 0;
    *(bool *)(param_1 + 0x71) = DAT_0034852c < *(uint *)(*(int *)(param_1 + 0x34) + 4);
    return 0;
  case 7:
    *(undefined1 *)(param_1 + 0x70) = 0;
    *(bool *)(param_1 + 0x71) = DAT_0034852c < *(uint *)(*(int *)(param_1 + 0x34) + 4);
    if (*(char *)(param_2 + 9) != '\0') {
      fVar12 = func_0053EDC8(*(int *)(param_1 + 0x4c) + 0x3c);
      fVar15 = DAT_00348530;
      func_0028D700(*(int *)(param_1 + 0x4c) + 0x3c,fVar12,DAT_00348530);
      fVar12 = func_0053EDC8(*(int *)(param_1 + 0x4c) + 0x3c);
      return func_0028D700(*(int *)(param_1 + 0x4c) + 0x5c,fVar12,fVar15);
    }
    break;
  case 8:
  case 9:
  case 10:
    return func_0028C8EC(*(int *)(param_1 + 0x4c),1,param_3,param_4);
  }
  return 0;
}

