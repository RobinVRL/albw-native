#include "ghidra_types.h"

extern int func_001119F4(undefined4 *param_1,undefined4 *param_2);
extern float func_00115154(float *param_1,float *param_2,uint param_3);
extern int func_001151EC(undefined4 *param_1,undefined4 *param_2);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_0068C690(float *param_1);
extern float DAT_003b5338;
extern float DAT_003b533c;

// USA 003B4FAC <- EU 003B4F88 (Ghidra, non-matching)
// GLOBAL DAT_003b5338 float
// GLOBAL DAT_003b533c float

undefined4 func_003B4FAC(int param_1,undefined4 param_2,int param_3)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  _Alignas(8) unsigned char albw_frame[0xc0];
  #define local_b8 (*(float *)(albw_frame + 0x8))
  #define local_b4 (*(float *)(albw_frame + 0xc))
  #define local_b0 (*(float *)(albw_frame + 0x10))
  #define local_ac (*(float *)(albw_frame + 0x14))
  #define local_a8 (*(float *)(albw_frame + 0x18))
  #define local_a4 (*(float *)(albw_frame + 0x1c))
  #define local_a0 (*(float *)(albw_frame + 0x20))
  #define local_9c (*(float *)(albw_frame + 0x24))
  #define local_98 (*(float *)(albw_frame + 0x28))
  #define local_94 (*(float *)(albw_frame + 0x2c))
  #define local_90 (*(float *)(albw_frame + 0x30))
  #define local_8c (*(undefined4 *)(albw_frame + 0x34))
  #define local_88 (*(float *)(albw_frame + 0x38))
  #define uStack_84 (*(undefined4 *)(albw_frame + 0x3c))
  #define uStack_80 (*(undefined4 *)(albw_frame + 0x40))
  #define local_78 (*(float *)(albw_frame + 0x48))
  #define local_74 (*(float *)(albw_frame + 0x4c))
  #define local_70 (*(float *)(albw_frame + 0x50))
  #define local_6c (*(float *)(albw_frame + 0x54))
  #define local_68 (*(float *)(albw_frame + 0x58))
  #define local_64 (*(float *)(albw_frame + 0x5c))
  #define local_60 (*(float *)(albw_frame + 0x60))
  #define local_58 (*(float *)(albw_frame + 0x68))
  #define local_54 (*(float *)(albw_frame + 0x6c))
  #define local_50 (*(float *)(albw_frame + 0x70))
  #define local_4c (*(float *)(albw_frame + 0x74))
  #define local_48 (*(float *)(albw_frame + 0x78))
  #define local_44 (*(undefined4 *)(albw_frame + 0x7c))
  #define local_40 (*(float *)(albw_frame + 0x80))
  #define uStack_3c (*(undefined4 *)(albw_frame + 0x84))
  #define uStack_38 (*(undefined4 *)(albw_frame + 0x88))
  fVar13 = DAT_003b533c;
  fVar14 = DAT_003b5338;
  if ((*(int *)(param_1 + 8) == param_3) && (*(int *)(param_1 + 0x10) != 0)) {
    iVar4 = *(int *)(param_1 + 4);
    func_001119F4(&local_b8,
                  (undefined4 *)
                  (*(int *)(*(int *)(iVar4 + 0x24) + 0x14) + *(int *)(param_1 + 8) * 0x30));
    *(float *)(param_1 + 0x20) = local_ac;
    *(float *)(param_1 + 0x24) = local_9c;
    *(undefined4 *)(param_1 + 0x28) = local_8c;
    func_00115154(&local_70,&local_6c,*(uint *)(param_1 + 0x10));
    fVar9 = local_b8 * fVar13;
    fVar11 = local_a8 * fVar13;
    fVar7 = -local_70;
    fVar10 = local_b8 * local_70;
    fVar12 = local_a8 * local_70;
    fVar5 = local_98 * local_70;
    fVar1 = local_b4 * fVar13;
    fVar2 = local_94 * fVar13;
    fVar8 = local_a4 * fVar13;
    fVar6 = local_94 * fVar13;
    local_b8 = local_b8 * local_6c + local_b4 * fVar13 + local_b0 * fVar7;
    local_b4 = fVar9 + local_b4 * fVar14 + local_b0 * fVar13;
    local_a8 = local_a8 * local_6c + local_a4 * fVar13 + local_a0 * fVar7;
    local_a4 = fVar11 + local_a4 * fVar14 + local_a0 * fVar13;
    local_94 = local_98 * fVar13 + local_94 * fVar14 + local_90 * fVar13;
    local_98 = local_98 * local_6c + fVar6 + local_90 * fVar7;
    local_b0 = fVar10 + fVar1 + local_b0 * local_6c;
    local_a0 = fVar12 + fVar8 + local_a0 * local_6c;
    local_90 = fVar5 + fVar2 + local_90 * local_6c;
    func_001151EC((undefined4 *)
                  (*(int *)(*(int *)(iVar4 + 0x24) + 0x14) + *(int *)(param_1 + 8) * 0x30),&local_b8
                 );
  }
  if ((*(int *)(param_1 + 0xc) == param_3) && (*(int *)(param_1 + 0x10) != 0)) {
    iVar4 = *(int *)(param_1 + 4);
    func_001119F4(&local_78,
                  (undefined4 *)
                  (*(int *)(*(int *)(iVar4 + 0x24) + 0x14) + *(int *)(param_1 + 0xc) * 0x30));
    func_00115154(&local_ac,&local_9c,*(uint *)(param_1 + 0x10));
    fVar9 = local_78 * fVar13;
    fVar11 = local_68 * fVar13;
    fVar7 = -local_ac;
    fVar10 = local_78 * local_ac;
    fVar12 = local_68 * local_ac;
    fVar5 = local_58 * local_ac;
    fVar1 = local_74 * fVar13;
    fVar2 = local_54 * fVar13;
    fVar8 = local_64 * fVar13;
    fVar6 = local_54 * fVar13;
    local_78 = local_78 * local_9c + local_74 * fVar13 + local_70 * fVar7;
    local_74 = fVar9 + local_74 * fVar14 + local_70 * fVar13;
    local_68 = local_68 * local_9c + local_64 * fVar13 + local_60 * fVar7;
    local_64 = fVar11 + local_64 * fVar14 + local_60 * fVar13;
    local_54 = local_58 * fVar13 + local_54 * fVar14 + local_50 * fVar13;
    local_58 = local_58 * local_9c + fVar6 + local_50 * fVar7;
    local_70 = fVar10 + fVar1 + local_70 * local_9c;
    local_60 = fVar12 + fVar8 + local_60 * local_9c;
    local_50 = fVar5 + fVar2 + local_50 * local_9c;
    func_001151EC((undefined4 *)
                  (*(int *)(*(int *)(iVar4 + 0x24) + 0x14) + *(int *)(param_1 + 0xc) * 0x30),
                  &local_78);
  }
  if (*(int *)(param_1 + 0x14) == param_3) {
    iVar4 = *(int *)(param_1 + 4);
    func_001119F4(&local_b8,
                  (undefined4 *)
                  (*(int *)(*(int *)(iVar4 + 0x24) + 0x14) + *(int *)(param_1 + 0x14) * 0x30));
    *(float *)(param_1 + 0x2c) = local_ac;
    *(float *)(param_1 + 0x30) = local_9c;
    *(undefined4 *)(param_1 + 0x34) = local_8c;
    func_00115C70(&local_88,(float *)(param_1 + 0x20),(float *)(param_1 + 0x2c));
    local_4c = local_88;
    local_48 = ALBW_AS_F32(uStack_84);
    local_44 = uStack_80;
    uVar3 = func_0068C690(&local_4c);
    func_00115154(&local_74,&local_70,uVar3);
    fVar6 = local_b8 * fVar13;
    fVar7 = local_a8 * fVar13;
    fVar5 = local_98 * fVar13;
    fVar8 = -local_74;
    fVar1 = local_b4 * fVar8;
    fVar9 = -fVar8;
    fVar2 = local_a4 * fVar8;
    fVar8 = local_94 * fVar8;
    local_b8 = local_b8 * fVar14 + local_b4 * fVar13 + local_b0 * fVar13;
    local_b4 = fVar6 + local_b4 * local_70 + local_b0 * fVar9;
    local_b0 = fVar6 + fVar1 + local_b0 * local_70;
    local_a8 = local_a8 * fVar14 + local_a4 * fVar13 + local_a0 * fVar13;
    local_a4 = fVar7 + local_a4 * local_70 + local_a0 * fVar9;
    local_a0 = fVar7 + fVar2 + local_a0 * local_70;
    local_98 = local_98 * fVar14 + local_94 * fVar13 + local_90 * fVar13;
    local_94 = fVar5 + local_94 * local_70 + local_90 * fVar9;
    local_90 = fVar5 + fVar8 + local_90 * local_70;
    func_001151EC((undefined4 *)
                  (*(int *)(*(int *)(iVar4 + 0x24) + 0x14) + *(int *)(param_1 + 0x14) * 0x30),
                  &local_b8);
  }
  if (*(int *)(param_1 + 0x18) == param_3) {
    iVar4 = *(int *)(param_1 + 4);
    func_001119F4(&local_b8,
                  (undefined4 *)
                  (*(int *)(*(int *)(iVar4 + 0x24) + 0x14) + *(int *)(param_1 + 0x18) * 0x30));
    local_4c = local_ac;
    local_48 = local_9c;
    local_44 = local_8c;
    func_00115C70(&local_88,(float *)(param_1 + 0x2c),&local_4c);
    local_40 = local_88;
    uStack_3c = uStack_84;
    uStack_38 = uStack_80;
    uVar3 = func_0068C690(&local_40);
    func_00115154(&local_74,&local_70,uVar3);
    fVar6 = local_a8 * fVar13;
    fVar5 = local_98 * fVar13;
    fVar7 = local_b8 * fVar13;
    fVar8 = -local_74;
    fVar1 = local_a4 * fVar8;
    fVar9 = -fVar8;
    fVar2 = local_94 * fVar8;
    fVar8 = local_b4 * fVar8;
    local_b8 = local_b8 * fVar14 + local_b4 * fVar13 + local_b0 * fVar13;
    local_a8 = local_a8 * fVar14 + local_a4 * fVar13 + local_a0 * fVar13;
    local_a4 = fVar6 + local_a4 * local_70 + local_a0 * fVar9;
    local_a0 = fVar6 + fVar1 + local_a0 * local_70;
    local_98 = local_98 * fVar14 + local_94 * fVar13 + local_90 * fVar13;
    local_94 = fVar5 + local_94 * local_70 + local_90 * fVar9;
    local_90 = fVar5 + fVar2 + local_90 * local_70;
    local_b4 = fVar7 + local_b4 * local_70 + local_b0 * fVar9;
    local_b0 = fVar7 + fVar8 + local_b0 * local_70;
    func_001151EC((undefined4 *)
                  (*(int *)(*(int *)(iVar4 + 0x24) + 0x14) + *(int *)(param_1 + 0x18) * 0x30),
                  &local_b8);
  }
  return 0;
}

