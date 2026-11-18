#include "ghidra_types.h"

extern int func_00588BF0(int param_1,int param_2);
extern int *DAT_00327afc;
extern float DAT_00327b00;

// USA 00327A78 <- EU 00327A54 (Ghidra, non-matching)
// GLOBAL DAT_00327afc int *
// GLOBAL DAT_00327b00 float

undefined4 func_00327A78(int *param_1)

{
  bool bVar1;
  float *pfVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  bVar1 = func_00588BF0((int)param_1,0);
  if (!bVar1) {
    pfVar2 = *(float **)(*DAT_00327afc + 0x1c);
    fVar5 = *pfVar2;
    fVar4 = pfVar2[2];
    fVar6 = pfVar2[1] + DAT_00327b00;
    bVar1 = ALBW_AS_F32(param_1[0x103]) == fVar5;
    bVar3 = fVar5 <= ALBW_AS_F32(param_1[0x103]);
    if (!bVar3 || bVar1) {
      bVar1 = fVar5 == ALBW_AS_F32(param_1[0x106]);
      bVar3 = ALBW_AS_F32(param_1[0x106]) <= fVar5;
    }
    if (!bVar3 || bVar1) {
      bVar1 = ALBW_AS_F32(param_1[0x104]) == fVar6;
      bVar3 = fVar6 <= ALBW_AS_F32(param_1[0x104]);
      if (!bVar3 || bVar1) {
        bVar1 = fVar6 == ALBW_AS_F32(param_1[0x107]);
        bVar3 = ALBW_AS_F32(param_1[0x107]) <= fVar6;
      }
      if (!bVar3 || bVar1) {
        bVar1 = ALBW_AS_F32(param_1[0x105]) == fVar4;
        bVar3 = fVar4 <= ALBW_AS_F32(param_1[0x105]);
        if (!bVar3 || bVar1) {
          bVar1 = fVar4 == ALBW_AS_F32(param_1[0x108]);
          bVar3 = ALBW_AS_F32(param_1[0x108]) <= fVar4;
        }
        if (!bVar3 || bVar1) {
                    /* WARNING: Could not recover jumptable at 0x00327af4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          return (**(code **)(*param_1 + 0x4c))(param_1);
        }
      }
    }
  }
  return 0;
}

