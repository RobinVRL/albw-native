#include "ghidra_types.h"

extern int func_001119F4(undefined4 *param_1,undefined4 *param_2);
extern int func_001157FC(float *param_1,float *param_2,float *param_3);
extern int func_004D80EC(float *param_1,float *param_2,int param_3);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int *DAT_00224b7c;
extern int DAT_00224b80;
extern float DAT_00224b84;
extern float DAT_00224b88;
extern int DAT_00224b8c;
extern float DAT_00224b90;
extern float DAT_00224b94;
extern float DAT_00224b98;
extern float DAT_00224b9c;
extern int DAT_00224ba0;

// USA 002249B0 <- EU 002249B0 (Ghidra, non-matching)
// GLOBAL DAT_00224b7c int *
// GLOBAL DAT_00224b80 int
// GLOBAL DAT_00224b84 float
// GLOBAL DAT_00224b88 float
// GLOBAL DAT_00224b8c int
// GLOBAL DAT_00224b90 float
// GLOBAL DAT_00224b94 float
// GLOBAL DAT_00224b98 float
// GLOBAL DAT_00224b9c float
// GLOBAL DAT_00224ba0 int

void func_002249B0(int param_1)

{
  byte bVar1;
  uint uVar2;
  int *piVar3;
  float *pfVar4;
  uint *puVar5;
  int iVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define afStack_88 ((float *)(albw_frame + 0x8))
  #define local_58 (*(float *)(albw_frame + 0x38))
  #define uStack_54 (*(uint *)(albw_frame + 0x3c))
  #define uStack_50 (*(uint *)(albw_frame + 0x40))
  #define uStack_4c (*(uint *)(albw_frame + 0x44))
  #define uStack_48 (*(uint *)(albw_frame + 0x48))
  #define uStack_44 (*(uint *)(albw_frame + 0x4c))
  #define uStack_40 (*(uint *)(albw_frame + 0x50))
  #define uStack_3c (*(uint *)(albw_frame + 0x54))
  #define local_38 (*(uint *)(albw_frame + 0x58))
  #define uStack_34 (*(uint *)(albw_frame + 0x5c))
  #define uStack_30 (*(uint *)(albw_frame + 0x60))
  #define uStack_2c (*(uint *)(albw_frame + 0x64))
  #define local_28 (*(float *)(albw_frame + 0x68))
  #define local_24 (*(float *)(albw_frame + 0x6c))
  #define local_20 (*(float *)(albw_frame + 0x70))
  if (*(char *)(param_1 + 0x46c) != '\r') {
    uVar2 = func_004D80EC((float *)(*(int *)(param_1 + 0x608) + 4),*(float **)(*DAT_00224b7c + 0x1c)
                          ,0);
    bVar1 = *(byte *)(param_1 + 0x46c);
    if (((bVar1 != 7 && bVar1 != 9) && (1 < bVar1)) && (bVar1 != 2 && bVar1 != 3)) {
      piVar3 = (int *)(param_1 + 0x6ac);
      if (bVar1 == 4) {
        if (*(int *)(param_1 + 0x468) < 0x32) {
          fVar7 = (float)VectorSignedToFloat(*(int *)(param_1 + 0x468),(byte)(in_fpscr >> 0x15) & 3)
          ;
          iVar6 = *piVar3 - (int)((DAT_00224b94 - fVar7) * DAT_00224b98 * DAT_00224b9c);
        }
        else {
          iVar6 = DAT_00224ba0 + *piVar3;
        }
        *piVar3 = iVar6;
      }
      else {
        func_0051D2F4(piVar3,uVar2,DAT_00224b80,0x7fffffff,DAT_00224b84);
      }
    }
    local_28 = DAT_00224b90;
    pfVar4 = (float *)(DAT_00224b8c + (uVar2 >> 0x18) * 0x10);
    fVar7 = (float)VectorUnsignedToFloat(uVar2 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
    fVar8 = (float)VectorUnsignedToFloat(uVar2 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
    fVar8 = fVar8 * DAT_00224b88;
    fVar7 = *pfVar4 + pfVar4[1] * fVar7 * DAT_00224b88;
    *(float *)(param_1 + 0x648) = fVar7;
    *(float *)(param_1 + 0x64c) = local_28;
    fVar8 = pfVar4[2] + pfVar4[3] * fVar8;
    *(float *)(param_1 + 0x650) = fVar8;
    *(float *)(param_1 + 0x5c0) = fVar7;
    *(float *)(param_1 + 0x5c4) = local_28;
    *(float *)(param_1 + 0x5c8) = fVar8;
    iVar6 = *(int *)(param_1 + 0x6d8);
    local_24 = local_28;
    local_20 = local_28;
    func_004D8AEC(afStack_88,*(uint *)(param_1 + 0x6ac),&local_28);
    func_001119F4(&local_58,
                  (undefined4 *)
                  (*(int *)(*(int *)(*(int *)(param_1 + 0x594) + 0x24) + 0xc) + iVar6 * 0x40 + 0x10)
                 );
    func_001157FC(&local_58,afStack_88,&local_58);
    puVar5 = (uint *)(*(int *)(*(int *)(*(int *)(param_1 + 0x594) + 0x24) + 0xc) + iVar6 * 0x40);
    puVar5[4] = (uint)ALBW_AS_U32(local_58);
    puVar5[5] = uStack_54;
    puVar5[6] = uStack_50;
    puVar5[7] = uStack_4c;
    puVar5[8] = uStack_48;
    puVar5[9] = uStack_44;
    puVar5[10] = uStack_40;
    puVar5[0xb] = uStack_3c;
    puVar5[0xc] = local_38;
    puVar5[0xd] = uStack_34;
    puVar5[0xe] = uStack_30;
    puVar5[0xf] = uStack_2c;
    *puVar5 = *puVar5 & 0xf3ffffff;
  }
  return;
}

