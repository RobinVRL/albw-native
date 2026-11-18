#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C8C(float *param_1,float *param_2,float *param_3);
extern int func_00588BE4(int param_1);
extern int *DAT_0019b738;
extern uint *DAT_0019b73c;
extern undefined4 *DAT_0019b740;
extern undefined4 DAT_0019b744;
extern float DAT_0019b748;
extern undefined4 DAT_0019b74c;
extern float DAT_0019b750;
extern int *DAT_0019b754;

// USA 0019B5FC <- EU 0019B5FC (Ghidra, non-matching)
// GLOBAL DAT_0019b738 int *
// GLOBAL DAT_0019b73c uint *
// GLOBAL DAT_0019b740 undefined4 *
// GLOBAL DAT_0019b744 undefined4
// GLOBAL DAT_0019b748 float
// GLOBAL DAT_0019b74c undefined4
// GLOBAL DAT_0019b750 float
// GLOBAL DAT_0019b754 int *

undefined4 func_0019B5FC(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  float *pfVar2;
  undefined4 *puVar3;
  bool bVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 ((float *)(albw_frame + 0x0))
  #define local_38 (*(float *)(albw_frame + 0x8))
  #define local_34 (*(float *)(albw_frame + 0xc))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x10))
  #define local_2c (*(float *)(albw_frame + 0x14))
  #define local_28 (*(float *)(albw_frame + 0x18))
  #define fStack_24 (*(float *)(albw_frame + 0x1c))
  #define fStack_20 (*(float *)(albw_frame + 0x20))
  iVar1 = func_00588BE4((int)param_2);
  if (iVar1 == *DAT_0019b738) {
    if (((*DAT_0019b73c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0019b73c), iVar1 != 0)) {
      *DAT_0019b740 = DAT_0019b744;
    }
    iVar1 = (**(code **)*param_2)(param_2,DAT_0019b740);
    local_34 = DAT_0019b748;
    uStack_30 = DAT_0019b74c;
    puVar3 = param_2;
    if (iVar1 == 0) {
      puVar3 = (undefined4 *)0x0;
    }
    local_2c = DAT_0019b748;
    func_00115C8C(local_40,(float *)(param_2 + 5),&local_34);
    fVar7 = ALBW_AS_F32(puVar3[0xf4]) - local_40[0];
    fVar8 = ALBW_AS_F32(puVar3[0xf5]) - DAT_0019b750;
    fVar9 = ALBW_AS_F32(puVar3[0xf6]) - local_38;
    func_00115C54(&local_28,(float *)(puVar3 + 0xf4),local_40);
    pfVar2 = *(float **)(*DAT_0019b754 + 0x1c);
    fVar6 = *pfVar2;
    bVar4 = fVar7 == fVar6;
    bVar5 = fVar6 <= fVar7;
    if (!bVar5 || bVar4) {
      bVar4 = fVar6 == local_28;
      bVar5 = local_28 <= fVar6;
    }
    if (!bVar5 || bVar4) {
      fVar6 = pfVar2[1];
      bVar4 = fVar8 == fVar6;
      bVar5 = fVar6 <= fVar8;
      if (!bVar5 || bVar4) {
        bVar4 = fVar6 == fStack_24;
        bVar5 = fStack_24 <= fVar6;
      }
      if (!bVar5 || bVar4) {
        fVar6 = pfVar2[2];
        bVar4 = fVar9 == fVar6;
        bVar5 = fVar6 <= fVar9;
        if (!bVar5 || bVar4) {
          bVar4 = fVar6 == fStack_20;
          bVar5 = fStack_20 <= fVar6;
        }
        if (!bVar5 || bVar4) {
          return 1;
        }
      }
    }
  }
  return 0;
}

