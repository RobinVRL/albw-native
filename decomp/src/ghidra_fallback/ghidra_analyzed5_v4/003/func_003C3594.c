#include "ghidra_types.h"

extern int func_001119F4(undefined4 *param_1,undefined4 *param_2);
extern float func_00115154(float *param_1,float *param_2,uint param_3);
extern int func_001151EC(undefined4 *param_1,undefined4 *param_2);
extern float func_00115DC8(float *param_1);
extern int func_00115E10(float *param_1,float *param_2,float *param_3);
extern int func_003840A0(int param_1,int param_2);
extern int func_004918CC(float *param_1,float fparam_0,float fparam_1,float fparam_2);
extern float DAT_003c3920;
extern float DAT_003c3924;
extern float DAT_003c3afc;

// USA 003C3594 <- EU 003C3570 (Ghidra, non-matching)
// GLOBAL DAT_003c3920 float
// GLOBAL DAT_003c3924 float
// GLOBAL DAT_003c3afc float

undefined4 func_003C3594(int param_1,undefined4 param_2,int param_3)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  _Alignas(8) unsigned char albw_frame[0xa0];
  #define local_98 (*(float *)(albw_frame + 0x8))
  #define local_94 (*(float *)(albw_frame + 0xc))
  #define local_90 (*(float *)(albw_frame + 0x10))
  #define local_88 (*(float *)(albw_frame + 0x18))
  #define local_84 (*(float *)(albw_frame + 0x1c))
  #define local_80 ((float *)(albw_frame + 0x20))
  #define local_78 (*(float *)(albw_frame + 0x28))
  #define local_74 (*(float *)(albw_frame + 0x2c))
  #define local_70 (*(float *)(albw_frame + 0x30))
  #define local_68 (*(float *)(albw_frame + 0x38))
  #define local_64 (*(float *)(albw_frame + 0x3c))
  #define local_60 (*(float *)(albw_frame + 0x40))
  #define local_5c (*(float *)(albw_frame + 0x44))
  #define local_58 (*(float *)(albw_frame + 0x48))
  #define local_54 (*(float *)(albw_frame + 0x4c))
  #define local_50 (*(float *)(albw_frame + 0x50))
  #define local_4c (*(float *)(albw_frame + 0x54))
  #define local_48 (*(float *)(albw_frame + 0x58))
  #define local_44 (*(float *)(albw_frame + 0x5c))
  #define local_40 (*(float *)(albw_frame + 0x60))
  fVar10 = DAT_003c3924;
  fVar11 = DAT_003c3920;
  if ((*(int *)(param_1 + 8) == param_3) && (*(int *)(param_1 + 0xc) != 0)) {
    iVar4 = *(int *)(*(int *)(param_1 + 4) + 0x14);
    func_001119F4(&local_68,
                  (undefined4 *)
                  (*(int *)(*(int *)(iVar4 + 0x24) + 0x14) + *(int *)(param_1 + 8) * 0x30));
    func_00115154(&local_84,local_80,*(uint *)(param_1 + 0xc));
    fVar5 = local_68 * fVar10;
    fVar6 = local_58 * fVar10;
    fVar7 = local_48 * fVar10;
    fVar8 = -local_84;
    fVar1 = local_64 * fVar8;
    fVar9 = -fVar8;
    fVar2 = local_54 * fVar8;
    fVar8 = local_44 * fVar8;
    local_68 = local_68 * fVar11 + local_64 * fVar10 + local_60 * fVar10;
    local_64 = fVar5 + local_64 * local_80[0] + local_60 * fVar9;
    local_60 = fVar5 + fVar1 + local_60 * local_80[0];
    local_58 = local_58 * fVar11 + local_54 * fVar10 + local_50 * fVar10;
    local_54 = fVar6 + local_54 * local_80[0] + local_50 * fVar9;
    local_50 = fVar6 + fVar2 + local_50 * local_80[0];
    local_48 = local_48 * fVar11 + local_44 * fVar10 + local_40 * fVar10;
    local_44 = fVar7 + local_44 * local_80[0] + local_40 * fVar9;
    local_40 = fVar7 + fVar8 + local_40 * local_80[0];
    func_001151EC((undefined4 *)
                  (*(int *)(*(int *)(iVar4 + 0x24) + 0x14) + *(int *)(param_1 + 8) * 0x30),&local_68
                 );
  }
  if ((*(int *)(*(int *)(param_1 + 4) + 0x3c) == param_3) &&
     ((((((bVar3 = func_003840A0(*(int *)(param_1 + 4),0x1a), bVar3 ||
          (bVar3 = func_003840A0(*(int *)(param_1 + 4),0x1b), bVar3)) ||
         (bVar3 = func_003840A0(*(int *)(param_1 + 4),0x16), bVar3)) ||
        (((bVar3 = func_003840A0(*(int *)(param_1 + 4),0x17), bVar3 ||
          (bVar3 = func_003840A0(*(int *)(param_1 + 4),0x1e), bVar3)) ||
         ((bVar3 = func_003840A0(*(int *)(param_1 + 4),0x1f), bVar3 ||
          ((bVar3 = func_003840A0(*(int *)(param_1 + 4),0x20), bVar3 ||
           (bVar3 = func_003840A0(*(int *)(param_1 + 4),0x21), bVar3)))))))) ||
       (bVar3 = func_003840A0(*(int *)(param_1 + 4),0x18), bVar3)) ||
      ((((bVar3 = func_003840A0(*(int *)(param_1 + 4),0x19), bVar3 ||
         (bVar3 = func_003840A0(*(int *)(param_1 + 4),0x76), bVar3)) ||
        (bVar3 = func_003840A0(*(int *)(param_1 + 4),0x1c), bVar3)) ||
       (bVar3 = func_003840A0(*(int *)(param_1 + 4),0x1d), bVar3)))))) {
    func_001119F4(&local_98,
                  (undefined4 *)
                  (*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 0x14) + 0x24) + 0x14) +
                  *(int *)(*(int *)(param_1 + 4) + 0x3c) * 0x30));
    local_5c = local_98;
    local_58 = local_88;
    local_54 = local_78;
    local_50 = local_90;
    local_4c = local_80[0];
    local_48 = local_70;
    local_94 = fVar10;
    local_84 = fVar11;
    local_74 = fVar10;
    local_68 = fVar10;
    local_64 = fVar11;
    local_60 = fVar10;
    func_00115DC8(&local_68);
    func_00115E10(&local_50,&local_5c,&local_68);
    func_00115DC8(&local_50);
    func_00115E10(&local_5c,&local_68,&local_50);
    local_94 = local_68;
    local_84 = local_64;
    local_74 = local_60;
    local_98 = local_5c;
    local_88 = local_58;
    local_78 = local_54;
    local_90 = local_50;
    local_80[0] = local_4c;
    local_70 = local_48;
    iVar4 = *(int *)(*(int *)(param_1 + 4) + 0x10);
    func_004918CC(&local_98,*(float *)(iVar4 + 0x4e4),*(float *)(iVar4 + 0x4e8),
                  *(float *)(iVar4 + 0x4ec));
    func_001151EC((undefined4 *)
                  (*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 0x14) + 0x24) + 0x14) +
                  *(int *)(*(int *)(param_1 + 4) + 0x3c) * 0x30),&local_98);
  }
  if ((*(int *)(*(int *)(param_1 + 4) + 0x34) == param_3) &&
     (((bVar3 = func_003840A0(*(int *)(param_1 + 4),0x1c), bVar3 ||
       (bVar3 = func_003840A0(*(int *)(param_1 + 4),0x1d), bVar3)) ||
      ((bVar3 = func_003840A0(*(int *)(param_1 + 4),0x1a), bVar3 ||
       (bVar3 = func_003840A0(*(int *)(param_1 + 4),0x1b), bVar3)))))) {
    func_001119F4(&local_98,
                  (undefined4 *)
                  (*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 0x14) + 0x24) + 0x14) +
                  *(int *)(*(int *)(param_1 + 4) + 0x34) * 0x30));
    local_80[0] = DAT_003c3afc;
    local_4c = DAT_003c3afc;
    local_5c = local_94;
    local_58 = local_84;
    local_54 = local_74;
    local_68 = local_98;
    local_64 = local_88;
    local_60 = local_78;
    local_90 = fVar10;
    local_70 = fVar10;
    local_50 = fVar10;
    local_48 = fVar10;
    func_00115DC8(&local_50);
    func_00115E10(&local_68,&local_5c,&local_50);
    func_00115DC8(&local_68);
    func_00115E10(&local_5c,&local_50,&local_68);
    local_90 = local_50;
    local_80[0] = local_4c;
    local_70 = local_48;
    local_94 = local_5c;
    local_84 = local_58;
    local_74 = local_54;
    local_98 = local_68;
    local_88 = local_64;
    local_78 = local_60;
    iVar4 = *(int *)(*(int *)(param_1 + 4) + 0x10);
    func_004918CC(&local_98,*(float *)(iVar4 + 0x4e4),*(float *)(iVar4 + 0x4e8),
                  *(float *)(iVar4 + 0x4ec));
    func_001151EC((undefined4 *)
                  (*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 0x14) + 0x24) + 0x14) +
                  *(int *)(*(int *)(param_1 + 4) + 0x34) * 0x30),&local_98);
  }
  return 0;
}

