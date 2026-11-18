#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_00588BF0(int param_1,int param_2);
extern float DAT_002cd93c;
extern int *DAT_002cd940;

// USA 002CD830 <- EU 002CD80C (Ghidra, non-matching)
// GLOBAL DAT_002cd93c float
// GLOBAL DAT_002cd940 int *

undefined4 func_002CD830(int *param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (((char)param_1[0x218] == '\0') && (bVar1 = func_00588BF0((int)param_1,0), bVar1)) {
    iVar3 = *(int *)(param_1[0x1eb] + 0x14);
    fVar4 = *(float *)(iVar3 + 0x14);
    fVar5 = *(float *)(iVar3 + 8);
    fVar6 = *(float *)(iVar3 + 0xc);
    if (fVar5 < fVar6) {
      if (fVar4 <= fVar6) {
        if (fVar4 < DAT_002cd93c) {
          return 0;
        }
        if (fVar5 < fVar4) {
          return 0;
        }
        goto LAB_002cd8d4;
      }
      if (fVar6 < fVar4) goto LAB_002cd8d4;
      if (fVar4 < DAT_002cd93c) {
        return 0;
      }
    }
    else if (fVar4 <= fVar6) {
      return 0;
    }
    if (fVar4 <= fVar5) {
LAB_002cd8d4:
      if ((**(int **)(param_1[0x1eb] + 0x14) != 5) &&
         (uVar2 = func_00111A64((uint *)(*DAT_002cd940 + 0x660)),
         0x4a < (uint)((ulonglong)uVar2 * 100 >> 0x20))) {
                    /* WARNING: Could not recover jumptable at 0x002cd938. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        return (**(code **)(*param_1 + 0xac))(param_1,5,0xffffffff);
      }
                    /* WARNING: Could not recover jumptable at 0x002cd91c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      return (**(code **)(*param_1 + 0xac))(param_1,0,0xffffffff);
    }
  }
  return 0;
}

