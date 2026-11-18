#include "ghidra_types.h"

extern int func_0010A464(undefined4 *param_1);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_0025B860(int param_1,int param_2,float fparam_0,float fparam_1);
extern int func_0025B874(undefined4 *param_1);
extern int func_0052107C(int param_1);
extern int func_00539200(int param_1);
extern float func_0059163C(float fparam_0);
extern int func_0065C988(undefined4 *param_1,undefined1 param_2);
extern float DAT_001d642c;
extern float DAT_001d6430;
extern float DAT_001d6434;
extern float DAT_001d6438;
extern float DAT_001d643c;
extern undefined DAT_001d6440;
extern int DAT_001d6454;
extern int DAT_001d6458;
extern char s_L_SE_Rupee_BOUND_001d6442[];
extern undefined4 _DAT_001d6440;

// USA 001D628C <- EU 001D628C (Ghidra, non-matching)
// GLOBAL DAT_001d642c float
// GLOBAL DAT_001d6430 float
// GLOBAL DAT_001d6434 float
// GLOBAL DAT_001d6438 float
// GLOBAL DAT_001d643c float
// GLOBAL DAT_001d6440 undefined
// GLOBAL DAT_001d6454 int
// GLOBAL DAT_001d6458 int

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void func_001D628C(int *param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define auStack_88 ((undefined4 *)(albw_frame + 0x8))
  #define local_28 (*(int *)(albw_frame + 0x68))
  #define local_24 (*(char * *)(albw_frame + 0x6c))
  uVar2 = param_1[0x13f];
  if (uVar2 != 0) {
    param_2 = param_1[0x13e];
  }
  fVar5 = DAT_001d642c;
  if ((uVar2 != 0 && param_2 != 0) && (fVar5 = DAT_001d6430, param_2 < uVar2)) {
    fVar5 = (float)VectorUnsignedToFloat(param_2,(byte)(in_fpscr >> 0x15) & 3);
    fVar5 = fVar5 * ALBW_AS_F32(param_1[0x140]);
  }
  fVar8 = DAT_001d6430;
  fVar7 = DAT_001d642c;
  fVar6 = func_0059163C(DAT_001d6434 * fVar5 * DAT_001d6438);
  fVar8 = fVar8 - fVar5;
  fVar6 = fVar6 * fVar8;
  if (fVar6 <= fVar7) {
    fVar6 = -fVar6;
  }
  fVar7 = fVar6 * DAT_001d643c;
  if ((uint)param_1[0x13e] < (uint)param_1[0x13f]) {
    param_1[0x13e] = param_1[0x13e] + 1;
    if ((int)ALBW_AS_U32(fVar5) < _DAT_001d6440) {
      fVar5 = ALBW_AS_F32((_DAT_001d6440 + -0x1800000));
      if (*(char *)((int)param_1 + 0x52d) == '\0') {
        bVar4 = SBORROW4((int)ALBW_AS_U32(fVar7),(int)ALBW_AS_U32(fVar5));
        bVar1 = (int)ALBW_AS_U32(fVar7) - (int)ALBW_AS_U32(fVar5) < 0;
        bVar3 = fVar7 == fVar5;
        if ((int)ALBW_AS_U32(fVar5) < (int)ALBW_AS_U32(fVar7)) {
          fVar5 = ALBW_AS_F32(param_1[0x143]);
          bVar1 = fVar5 < fVar7;
          bVar3 = fVar5 == fVar7;
          bVar4 = NAN(fVar5) || NAN(fVar7);
        }
        if (!bVar3 && bVar1 == bVar4) {
          *(undefined1 *)((int)param_1 + 0x52d) = 1;
        }
      }
      else if ((int)ALBW_AS_U32(fVar7) < (int)ALBW_AS_U32(fVar5)) {
        func_0010A464(auStack_88);
        local_24 = s_L_SE_Rupee_BOUND_001d6442 + 2;
        local_28 = DAT_001d6454;
        func_00150A84(param_1,&local_28,(int)auStack_88);
        bVar1 = func_00539200((int)auStack_88);
        if (bVar1) {
          func_0025B860((int)auStack_88,0,fVar8,fVar6);
        }
        *(undefined1 *)((int)param_1 + 0x52d) = 0;
        func_0025B874(auStack_88);
      }
    }
    param_1[0x143] = (int)ALBW_AS_U32(fVar7);
    param_1[0x142] = (int)ALBW_AS_U32(fVar7);
    return;
  }
  bVar1 = func_0052107C((int)param_1);
  if (bVar1) {
    *(undefined1 *)((int)param_1 + 0x427) = 0;
    func_0065C988(param_1 + 0x135,3);
  }
  else {
    param_1[0xf8] = DAT_001d6458;
  }
  return;
}

