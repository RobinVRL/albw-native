#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_001D6FD0(undefined4 *param_1,uint param_2,int param_3,int *param_4,int param_5);
extern int func_004E97FC(int param_1,undefined4 param_2,undefined4 param_3);
extern int func_0058E2B8(int *param_1);
extern int *DAT_00323808;
extern uint DAT_0032380c;
extern int DAT_00323810;
extern float DAT_00323814;
extern float DAT_00323818;
extern int DAT_0032381c;
extern undefined4 DAT_00323838;
extern int *DAT_0032383c;
extern char s_SE_Rupee_APPEAR_WATER_00323820[];

// USA 00323570 <- EU 0032354C (Ghidra, non-matching)
// GLOBAL DAT_00323808 int *
// GLOBAL DAT_0032380c uint
// GLOBAL DAT_00323810 int
// GLOBAL DAT_00323814 float
// GLOBAL DAT_00323818 float
// GLOBAL DAT_0032381c int
// GLOBAL DAT_00323838 undefined4
// GLOBAL DAT_0032383c int *
// GLOBAL s_SE_Rupee_APPEAR_WATER_00323820 string

/* WARNING: Variable defined which should be unmapped: objStack_60 */

void func_00323570(int param_1)

{
  int *piVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint in_fpscr;
  float fVar13;
  float fVar14;
  float fVar15;
  ulonglong uVar16;
  float fVar17;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define objStack_60 ((uint *)(albw_frame + 0x0))
  #define local_5c (*(float *)(albw_frame + 0x4))
  #define uStack_58 (*(undefined4 *)(albw_frame + 0x8))
  #define uStack_54 (*(undefined4 *)(albw_frame + 0xc))
  #define local_50 (*(float *)(albw_frame + 0x10))
  #define fStack_4c (*(float *)(albw_frame + 0x14))
  #define local_48 (*(float *)(albw_frame + 0x18))
  #define local_40 (*(undefined4 *)(albw_frame + 0x20))
  #define local_3c (*(char * *)(albw_frame + 0x24))
  #define local_38 (*(float *)(albw_frame + 0x28))
  #define uStack_34 (*(undefined4 *)(albw_frame + 0x2c))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x30))
  if ((*(char *)(param_1 + 0x334) != '\0') &&
     (uVar3 = *(int *)(param_1 + 0x32c) + 1, *(uint *)(param_1 + 0x32c) = uVar3,
     piVar1 = DAT_00323808, *(uint *)(param_1 + 0x330) <= uVar3)) {
    iVar6 = *(int *)(param_1 + 0x33c);
    iVar9 = *(int *)(param_1 + 0x340);
    uVar3 = func_00111A64((uint *)(*DAT_00323808 + 0x660));
    iVar7 = DAT_00323810;
    uVar16 = (ulonglong)DAT_0032380c;
    *(undefined4 *)(param_1 + 0x32c) = 0;
    uVar2 = 0;
    *(int *)(param_1 + 0x330) =
         (int)((ulonglong)(uint)(iVar9 - iVar6) * (ulonglong)uVar3 >> 0x20) +
         *(int *)(param_1 + 0x33c);
    do {
      uVar3 = func_00111A64((uint *)(*piVar1 + 0x660));
      objStack_60[0] = *(int *)(param_1 + 0x338) - uVar3;
      iVar6 = func_0058E2B8((int *)objStack_60);
      fVar13 = (float)VectorUnsignedToFloat(iVar6,(byte)(in_fpscr >> 0x15) & 3);
      if (iVar7 <= (int)ALBW_AS_U32((fVar13 * ALBW_AS_F32(uVar16)))) {
        *(uint *)(param_1 + 0x338) = uVar3;
        break;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < 0x14);
    iVar7 = *(int *)(param_1 + 0x348);
    iVar6 = *(int *)(param_1 + 0x344);
    uVar4 = func_00111A64((uint *)(*piVar1 + 0x660));
    fVar15 = *(float *)(param_1 + 0x34c);
    fVar17 = *(float *)(param_1 + 0x350) - fVar15;
    uVar10 = iVar6 + (int)((ulonglong)(uint)(iVar7 - iVar6) * (ulonglong)uVar4 >> 0x20);
    uVar4 = func_00111A64((uint *)(*piVar1 + 0x660));
    fVar13 = (float)VectorUnsignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
    pfVar5 = (float *)(DAT_0032381c + (uVar3 >> 0x18) * 0x10);
    pfVar8 = (float *)(DAT_0032381c + (uVar10 >> 0x18) * 0x10);
    fVar14 = (float)VectorUnsignedToFloat(uVar3 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
    fVar15 = fVar13 * DAT_00323814 * fVar17 + fVar15;
    fVar13 = (float)VectorUnsignedToFloat(uVar10 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
    local_50 = (pfVar5[2] + pfVar5[3] * fVar14 * DAT_00323818) *
               (pfVar8[2] + pfVar8[3] * fVar13 * DAT_00323818);
    fVar13 = (float)VectorUnsignedToFloat(uVar10 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
    fStack_4c = *pfVar8 + pfVar8[1] * fVar13 * DAT_00323818;
    fVar13 = (float)VectorUnsignedToFloat(uVar3 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
    fVar14 = (float)VectorUnsignedToFloat(uVar10 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
    local_48 = (*pfVar5 + pfVar5[1] * fVar13 * DAT_00323818) *
               (pfVar8[2] + pfVar8[3] * fVar14 * DAT_00323818);
    uVar4 = *(uint *)(param_1 + 0x354);
    iVar7 = *(int *)(param_1 + 0x364);
    uVar12 = uVar4 + *(int *)(param_1 + 0x358);
    uVar10 = uVar12 + *(int *)(param_1 + 0x35c);
    uVar11 = uVar10 + *(int *)(param_1 + 0x360);
    uVar3 = func_00111A64((uint *)(*piVar1 + 0x660));
    uVar3 = (uint)((ulonglong)(uVar11 + iVar7) * (ulonglong)uVar3 >> 0x20);
    if (uVar3 < uVar11) {
      if (uVar3 < uVar10) {
        if (uVar3 < uVar12) {
          if (uVar3 < uVar4) {
            uVar3 = 0;
          }
          else {
            uVar3 = 1;
          }
        }
        else {
          uVar3 = 2;
        }
      }
      else {
        uVar3 = 3;
      }
    }
    else {
      uVar3 = 4;
    }
    uVar2 = *(ushort *)(param_1 + 0x448);
    if ((uint)uVar2 < *(uint *)(param_1 + 0x37c)) {
      uVar3 = (uint)*(byte *)((uint)uVar2 + param_1 + 0x380);
      *(ushort *)(param_1 + 0x448) = uVar2 + 1;
    }
    func_00115D70(&local_38,&local_50,fVar15);
    objStack_60[0] = 0xffffffff;
    local_5c = local_38;
    uStack_58 = uStack_34;
    uStack_54 = uStack_30;
    func_001D6FD0((undefined4 *)(param_1 + 800),uVar3,0xb,(int *)&local_5c,-1);
    local_3c = s_SE_Rupee_APPEAR_WATER_00323820;
    local_40 = DAT_00323838;
    func_004E97FC(*DAT_0032383c,&local_40,param_1 + 800);
  }
  return;
}

