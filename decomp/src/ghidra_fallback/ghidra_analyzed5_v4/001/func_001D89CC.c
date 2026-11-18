#include "ghidra_types.h"

extern float func_00115154(float *param_1,float *param_2,uint param_3);
extern int func_001D90EC(int param_1,int param_2);
extern void func_0051D0B0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,float fparam_0);
extern int func_0058E2B8(int *param_1);
extern int func_0065CACC(undefined4 *param_1,undefined1 param_2);
extern int *DAT_001d8bd0;
extern float DAT_001d8bd4;
extern float DAT_001d8bd8;
extern float DAT_001d8bdc;
extern float DAT_001d8be0;
extern int DAT_001d8be4;
extern float DAT_001d8be8;
extern float DAT_001d8bec;
extern int DAT_001d8bf0;

// USA 001D89CC <- EU 001D89CC (Ghidra, non-matching)
// GLOBAL DAT_001d8bd0 int *
// GLOBAL DAT_001d8bd4 float
// GLOBAL DAT_001d8bd8 float
// GLOBAL DAT_001d8bdc float
// GLOBAL DAT_001d8be0 float
// GLOBAL DAT_001d8be4 int
// GLOBAL DAT_001d8be8 float
// GLOBAL DAT_001d8bec float
// GLOBAL DAT_001d8bf0 int

void func_001D89CC(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  float fVar6;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_48 (*(int *)(albw_frame + 0x8))
  #define local_44 (*(int *)(albw_frame + 0xc))
  #define local_40 (*(float *)(albw_frame + 0x10))
  #define local_3c ((float *)(albw_frame + 0x14))
  if (*(int *)(param_1 + 0x414) < 0x14) {
    uVar3 = 1;
    if ((*(uint *)(*DAT_001d8bd0 + 0x10) & 3) == 0) {
      uVar3 = (uint)(*(char *)(param_1 + 0x49c) == '\0');
    }
    if ((int)*(char *)(param_1 + 0x49c) != uVar3) {
      func_001D90EC(param_1,uVar3);
    }
  }
  else {
    func_001D90EC(param_1,1);
  }
  func_00115154(local_3c,&local_40,*(uint *)(param_1 + 0x484));
  fVar4 = DAT_001d8bd4;
  fVar6 = DAT_001d8bd8;
  func_0051D0B0((undefined4 *)(param_1 + 0x488),*(undefined4 *)(param_1 + 0x488),
                (int)(*(float *)(param_1 + 0x47c) * local_40 * DAT_001d8bd4),DAT_001d8bd8);
  fVar5 = DAT_001d8bdc;
  func_0051D0B0((undefined4 *)(param_1 + 0x48c),*(undefined4 *)(param_1 + 0x48c),
                (int)(*(float *)(param_1 + 0x47c) * local_3c[0] * DAT_001d8bdc),fVar6);
  local_44 = *(int *)(param_1 + 0x488) - (int)(*(float *)(param_1 + 0x47c) * local_40 * fVar4);
  iVar1 = func_0058E2B8(&local_44);
  fVar4 = (float)VectorUnsignedToFloat(iVar1,(byte)(in_fpscr >> 0x15) & 3);
  fVar4 = fVar4 * DAT_001d8be0;
  local_48 = *(int *)(param_1 + 0x48c) - (int)(*(float *)(param_1 + 0x47c) * local_3c[0] * fVar5);
  fVar6 = DAT_001d8be0;
  iVar2 = func_0058E2B8(&local_48);
  iVar1 = (int)ALBW_AS_U32(fVar4) - DAT_001d8be4;
  fVar5 = (float)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
  if ((int)ALBW_AS_U32(fVar4) < DAT_001d8be4) {
    iVar1 = (int)ALBW_AS_U32((fVar5 * fVar6)) - DAT_001d8be4;
    fVar4 = fVar5 * fVar6;
  }
  if (iVar1 < 0 != SBORROW4((int)ALBW_AS_U32(fVar4),DAT_001d8be4)) {
    *(int *)(param_1 + 0x484) = *(int *)(param_1 + 0x484) + -0x80000000;
  }
  iVar1 = DAT_001d8bf0;
  fVar4 = DAT_001d8be8;
  fVar6 = *(float *)(param_1 + 0x47c);
  fVar6 = fVar6 + -fVar6 * DAT_001d8bec;
  *(float *)(param_1 + 0x47c) = fVar6;
  if (fVar6 <= fVar4) {
    fVar6 = -fVar6;
  }
  if ((int)ALBW_AS_U32(fVar6) <= iVar1) {
    *(undefined4 *)(param_1 + 0x48c) = 0;
    *(undefined4 *)(param_1 + 0x488) = 0;
    func_001D90EC(param_1,1);
    func_0065CACC((undefined4 *)(param_1 + 0x414),0);
  }
  return;
}

