#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern float func_00115DC8(float *param_1);
extern float func_0042DA98(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5, float *param_6);
extern void func_0068A458(float *param_1,float *param_2);
extern float DAT_0042bd34;
extern undefined4 *DAT_0042bd38;

// USA 0042BB2C <- EU 0042BB0C (Ghidra, non-matching)
// GLOBAL DAT_0042bd34 float
// GLOBAL DAT_0042bd38 undefined4 *

/* WARNING: Variable defined which should be unmapped: objStack_a0 */

undefined4 func_0042BB2C(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  _Alignas(8) unsigned char albw_frame[0xa0];
  #define objStack_a0 ((uint *)(albw_frame + 0x0))
  #define local_94 (*(float *)(albw_frame + 0xc))
  #define local_90 (*(uint *)(albw_frame + 0x10))
  #define local_8c (*(float *)(albw_frame + 0x14))
  #define local_84 (*(float *)(albw_frame + 0x1c))
  #define uStack_80 (*(uint *)(albw_frame + 0x20))
  #define fStack_7c (*(float *)(albw_frame + 0x24))
  #define local_70 (*(float *)(albw_frame + 0x30))
  #define local_6c ((float *)(albw_frame + 0x34))
  #define local_64 (*(float *)(albw_frame + 0x3c))
  #define uStack_60 (*(uint *)(albw_frame + 0x40))
  #define fStack_5c (*(float *)(albw_frame + 0x44))
  #define afStack_58 ((float *)(albw_frame + 0x48))
  #define afStack_4c ((float *)(albw_frame + 0x54))
  #define local_40 (*(float *)(albw_frame + 0x60))
  #define uStack_3c (*(uint *)(albw_frame + 0x64))
  #define local_38 (*(float *)(albw_frame + 0x68))
  #define uStack_34 (*(undefined4 *)(albw_frame + 0x6c))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x70))
  pfVar3 = (float *)(param_2 + 100);
  pfVar4 = (float *)(param_1 + 0x58);
  objStack_a0[1] = (uint)&local_70;
  objStack_a0[0] = (uint)local_6c;
  fVar5 = func_0042DA98(pfVar4,(float *)(param_1 + 100),(float *)(param_2 + 0x58),pfVar3,
                        (float *)objStack_a0[0],(float *)objStack_a0[1]);
  fVar6 = *(float *)(param_1 + 0x70) + *(float *)(param_2 + 0x70);
  if (fVar6 * fVar6 <= fVar5) {
    uVar2 = 0;
  }
  else {
    if (param_3 != 0) {
      func_00115C70(&local_38,(float *)(param_1 + 100),pfVar4);
      local_84 = local_38;
      uStack_80 = uStack_34;
      fStack_7c = ALBW_AS_F32(uStack_30);
      func_0068A458(afStack_58,&local_84);
      func_00115C70(&local_38,pfVar3,(float *)(param_2 + 0x58));
      local_84 = local_38;
      uStack_80 = uStack_34;
      fStack_7c = ALBW_AS_F32(uStack_30);
      func_0068A458(afStack_4c,&local_84);
      *(float *)(param_3 + 0x1c) = fVar6 - SQRT(fVar5);
      func_00115D70(&local_40,afStack_58,local_6c[0]);
      objStack_a0[0] = (uint)ALBW_AS_U32(local_40);
      objStack_a0[1] = uStack_3c;
      objStack_a0[2] = (uint)ALBW_AS_U32(local_38);
      func_00115C54(&local_40,pfVar4,(float *)objStack_a0);
      local_84 = local_40;
      uStack_80 = uStack_3c;
      fStack_7c = local_38;
      local_64 = local_40;
      uStack_60 = uStack_3c;
      fStack_5c = local_38;
      func_00115D70(&local_40,afStack_4c,local_70);
      local_94 = local_40;
      local_90 = uStack_3c;
      local_8c = local_38;
      func_00115C54(&local_40,pfVar3,&local_94);
      local_84 = local_40;
      uStack_80 = uStack_3c;
      fStack_7c = local_38;
      func_00115C70(&local_40,&local_64,&local_84);
      objStack_a0[0] = (uint)ALBW_AS_U32(local_40);
      objStack_a0[1] = uStack_3c;
      objStack_a0[2] = (uint)ALBW_AS_U32(local_38);
      *(float *)(param_3 + 4) = local_40;
      *(uint *)(param_3 + 8) = uStack_3c;
      *(float *)(param_3 + 0xc) = local_38;
      fVar5 = func_00115DC8((float *)(param_3 + 4));
      puVar1 = DAT_0042bd38;
      if (fVar5 <= DAT_0042bd34) {
        *(undefined4 *)(param_3 + 4) = *DAT_0042bd38;
        *(undefined4 *)(param_3 + 8) = puVar1[1];
        *(undefined4 *)(param_3 + 0xc) = puVar1[2];
      }
      func_00115D70(&local_40,(float *)(param_3 + 4),*(float *)(param_1 + 0x70));
      objStack_a0[0] = (uint)ALBW_AS_U32(local_40);
      objStack_a0[1] = uStack_3c;
      objStack_a0[2] = (uint)ALBW_AS_U32(local_38);
      func_00115C54(&local_40,&local_64,(float *)objStack_a0);
      *(float *)(param_3 + 0x10) = local_40;
      *(uint *)(param_3 + 0x14) = uStack_3c;
      *(float *)(param_3 + 0x18) = local_38;
    }
    uVar2 = 1;
  }
  return uVar2;
}

