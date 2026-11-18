#include "ghidra_types.h"

extern int func_001119F4(undefined4 *param_1,undefined4 *param_2);
extern float func_00115154(float *param_1,float *param_2,uint param_3);
extern int func_001151EC(undefined4 *param_1,undefined4 *param_2);
extern float DAT_0038f40c;
extern float DAT_0038f410;

// USA 0038F2E4 <- EU 0038F2C0 (Ghidra, non-matching)
// GLOBAL DAT_0038f40c float
// GLOBAL DAT_0038f410 float

undefined4 func_0038F2E4(int param_1,undefined4 param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_58 (*(float *)(albw_frame + 0x8))
  #define local_54 (*(float *)(albw_frame + 0xc))
  #define local_50 (*(float *)(albw_frame + 0x10))
  #define local_48 (*(float *)(albw_frame + 0x18))
  #define local_44 (*(float *)(albw_frame + 0x1c))
  #define fStack_40 (*(float *)(albw_frame + 0x20))
  #define local_38 (*(float *)(albw_frame + 0x28))
  #define local_34 (*(float *)(albw_frame + 0x2c))
  #define local_30 (*(float *)(albw_frame + 0x30))
  #define local_28 (*(float *)(albw_frame + 0x38))
  #define local_24 ((float *)(albw_frame + 0x3c))
  if ((*(int *)(param_1 + 8) == param_3) && (*(int *)(param_1 + 0xc) != 0)) {
    iVar4 = *(int *)(*(int *)(param_1 + 4) + 0x40c);
    func_001119F4(&local_58,
                  (undefined4 *)
                  (*(int *)(*(int *)(iVar4 + 0x24) + 0x14) + *(int *)(param_1 + 8) * 0x30));
    func_00115154(&local_28,local_24,*(uint *)(param_1 + 0xc));
    fVar9 = local_58 * DAT_0038f40c;
    fVar10 = local_58 * local_28;
    fVar6 = local_48 * DAT_0038f40c;
    fVar5 = -local_28;
    fVar7 = local_48 * local_28;
    fVar8 = local_38 * DAT_0038f40c;
    local_28 = local_38 * local_28;
    fVar1 = local_54 * DAT_0038f40c;
    fVar2 = local_34 * DAT_0038f40c;
    fVar3 = local_44 * DAT_0038f40c;
    local_58 = local_58 * local_24[0] + local_54 * DAT_0038f40c + local_50 * fVar5;
    local_54 = fVar9 + local_54 * DAT_0038f410 + local_50 * DAT_0038f40c;
    local_50 = fVar10 + fVar1 + local_50 * local_24[0];
    local_48 = local_48 * local_24[0] + local_44 * DAT_0038f40c + fStack_40 * fVar5;
    local_38 = local_38 * local_24[0] + local_34 * DAT_0038f40c + local_30 * fVar5;
    local_34 = fVar8 + local_34 * DAT_0038f410 + local_30 * DAT_0038f40c;
    local_30 = local_28 + fVar2 + local_30 * local_24[0];
    local_44 = fVar6 + local_44 * DAT_0038f410 + fStack_40 * DAT_0038f40c;
    fStack_40 = fVar7 + fVar3 + fStack_40 * local_24[0];
    func_001151EC((undefined4 *)
                  (*(int *)(*(int *)(iVar4 + 0x24) + 0x14) + *(int *)(param_1 + 8) * 0x30),&local_58
                 );
  }
  return 0;
}

