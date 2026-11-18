#include "ghidra_types.h"

extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_00504D48(int param_1,int param_2);
extern int func_0050525C(int param_1,uint param_2,int param_3,int *param_4);
extern undefined4 DAT_00505214;
extern undefined4 DAT_00505218;
extern undefined4 DAT_0050521c;
extern char s_LUT_common_lut_bch_00505220[];
extern char s_Shader_nwh3d_DefaultShader_bch_005051f4[];
extern char s_cf_005051f4[];
extern char s_cf_00505220[];

// USA 00505094 <- EU 0050506C (Ghidra, non-matching)
// GLOBAL DAT_00505214 undefined4
// GLOBAL DAT_00505218 undefined4
// GLOBAL DAT_0050521c undefined4
// GLOBAL s_cf_00505220 string
// GLOBAL s_cf_005051f4 string

void func_00505094(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define uStack_78 (*(undefined4 *)(albw_frame + 0x8))
  #define uStack_74 (*(undefined4 *)(albw_frame + 0xc))
  #define local_70 (*(undefined4 *)(albw_frame + 0x10))
  #define local_6c (*(undefined4 *)(albw_frame + 0x14))
  #define uStack_68 (*(undefined4 *)(albw_frame + 0x18))
  #define local_64 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_60 (*(undefined4 *)(albw_frame + 0x20))
  #define local_5c (*(undefined4 *)(albw_frame + 0x24))
  #define local_58 (*(undefined4 *)(albw_frame + 0x28))
  #define local_54 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_50 (*(undefined4 *)(albw_frame + 0x30))
  #define local_4c (*(undefined4 *)(albw_frame + 0x34))
  #define local_48 (*(undefined4 *)(albw_frame + 0x38))
  #define local_44 (*(undefined1 *)(albw_frame + 0x3c))
  #define local_43 (*(undefined1 *)(albw_frame + 0x3d))
  #define local_42 (*(undefined1 *)(albw_frame + 0x3e))
  #define local_41 (*(undefined1 *)(albw_frame + 0x3f))
  #define local_40 (*(undefined1 *)(albw_frame + 0x40))
  #define local_3c (*(undefined4 *)(albw_frame + 0x44))
  #define local_38 (*(char * *)(albw_frame + 0x48))
  #define local_34 (*(undefined4 *)(albw_frame + 0x4c))
  #define local_30 (*(undefined4 *)(albw_frame + 0x50))
  #define local_2c (*(undefined1 *)(albw_frame + 0x54))
  uVar2 = DAT_00505218;
  uVar1 = DAT_00505214;
  local_70 = 0;
  local_6c = 0;
  uStack_68 = 0x20;
  local_64 = 0;
  local_60 = 0;
  local_5c = 0;
  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  uStack_78 = DAT_00505214;
  uStack_74 = DAT_00505218;
  local_4c = DAT_00505214;
  local_48 = DAT_0050521c;
  local_44 = 7;
  local_38 = s_Shader_nwh3d_DefaultShader_bch_005051f4;
  local_40 = 0;
  local_41 = 0;
  local_2c = 1;
  local_30 = 0;
  local_42 = 0xf;
  local_3c = DAT_00505214;
  local_34 = 0;
  local_43 = 0;
  puVar3 = func_00504D48(param_1,(int)&uStack_78);
  *(undefined4 **)(param_1 + 0xb0) = puVar3;
  iVar7 = puVar3[0x31];
  uVar6 = (uint)*(ushort *)(*(int *)(iVar7 + 0x30) + 0x1c);
  if ((uVar6 != 0) && (iVar4 = func_0010CEE0(uVar6 << 2,(int *)0x0,4), iVar4 != 0)) {
    *(int *)(param_1 + 0x14) = iVar4;
    *(uint *)(param_1 + 0x10) = uVar6;
  }
  uVar5 = 0;
  if (uVar6 != 0) {
    do {
      func_0050525C(param_1,uVar5,*(int *)(*(int *)(*(int *)(iVar7 + 0x30) + 0x18) + uVar5 * 4),
                    (int *)0x0);
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < (int)uVar6);
  }
  local_70 = 0;
  local_6c = 0;
  uStack_68 = 0x20;
  local_64 = 0;
  local_60 = 0;
  local_5c = 0;
  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  uStack_78 = uVar1;
  uStack_74 = uVar2;
  local_4c = uVar1;
  local_38 = s_LUT_common_lut_bch_00505220;
  local_48 = DAT_0050521c;
  local_44 = 7;
  local_40 = 0;
  local_41 = 0;
  local_2c = 1;
  local_30 = 0;
  local_42 = 0xf;
  local_3c = uVar1;
  local_34 = 0;
  local_43 = 0;
  puVar3 = func_00504D48(param_1,(int)&uStack_78);
  *(undefined4 **)(param_1 + 0xb4) = puVar3;
  return;
}

