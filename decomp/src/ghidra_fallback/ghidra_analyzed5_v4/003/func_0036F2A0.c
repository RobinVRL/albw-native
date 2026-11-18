#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_0036E490(byte *param_1,uint param_2,undefined4 param_3);
extern float func_0036EAF8(undefined4 param_1,int param_2);
extern int func_004D7F70(float *param_1,uint param_2);
extern int func_004D80EC(float *param_1,float *param_2,int param_3);
extern int *DAT_0036f3ac;
extern uint DAT_0036f3b0;
extern float DAT_0036f3b4;

// USA 0036F2A0 <- EU 0036F27C (Ghidra, non-matching)
// GLOBAL DAT_0036f3ac int *
// GLOBAL DAT_0036f3b0 uint
// GLOBAL DAT_0036f3b4 float

undefined4 func_0036F2A0(byte *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  float *pfVar4;
  uint uVar5;
  float fVar6;
  ulonglong uVar7;
  
  param_1[0x68] = 1;
  piVar1 = DAT_0036f3ac;
  param_1[0x69] = 0;
  param_1[0x6c] = 0;
  iVar2 = func_004D80EC((float *)(param_1 + 4),*(float **)(*piVar1 + 0x1c),0);
  uVar7 = (ulonglong)DAT_0036f3b0;
  uVar5 = 0;
  *(int *)(param_1 + 0x4c) = iVar2;
  do {
    pfVar4 = (float *)(param_1 + uVar5 * 0xc + 0x1c);
    fVar6 = ALBW_AS_F32(uVar7);
    switch(*param_1) {
    case 5:
    case 6:
    case 7:
    case 8:
      uVar3 = *(undefined4 *)(param_1 + 0x5c);
      *pfVar4 = fVar6;
      *(float *)(param_1 + uVar5 * 0xc + 0x20) = fVar6;
      *(undefined4 *)(param_1 + uVar5 * 0xc + 0x24) = uVar3;
      func_004D7F70(pfVar4,*(int *)(param_1 + 0x48) * uVar5 + *(int *)(param_1 + 0x44));
      func_00115C54(pfVar4,pfVar4,(float *)(param_1 + 4));
      break;
    case 9:
    case 10:
    case 0xb:
      break;
    default:
      uVar3 = *(undefined4 *)(param_1 + 0x5c);
      *pfVar4 = fVar6;
      *(float *)(param_1 + uVar5 * 0xc + 0x20) = fVar6;
      *(undefined4 *)(param_1 + uVar5 * 0xc + 0x24) = uVar3;
      func_004D7F70(pfVar4,*(int *)(param_1 + 0x48) * uVar5 + *(int *)(param_1 + 0x44));
      func_00115C54(pfVar4,pfVar4,(float *)(param_1 + 4));
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < 3);
  fVar6 = func_0036EAF8(param_1,param_2);
  *(float *)(param_1 + 0x60) = fVar6 + DAT_0036f3b4;
  return func_0036E490(param_1,9,param_2);
}

