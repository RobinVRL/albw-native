#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_001D6FD0(undefined4 *param_1,uint param_2,int param_3,int *param_4,int param_5);
extern int *DAT_0013f118;
extern float DAT_0013f11c;
extern float DAT_0013f120;
extern float DAT_0013f124;
extern int DAT_0013f128;
extern float DAT_0013f12c;
extern float DAT_0013f130;
extern uint DAT_0013f134;
extern char s_SE_Rupee_APPEAR_1_0013f150[];
extern char s_SE_Rupee_APPEAR_2_0013f164[];
extern char s_SE_Rupee_APPEAR_3_0013f178[];
extern char s_SE_Rupee_APPEAR_A_LOT_0013f138[];

// USA 0013EF04 <- EU 0013EF04 (Ghidra, non-matching)
// GLOBAL DAT_0013f118 int *
// GLOBAL DAT_0013f11c float
// GLOBAL DAT_0013f120 float
// GLOBAL DAT_0013f124 float
// GLOBAL DAT_0013f128 int
// GLOBAL DAT_0013f12c float
// GLOBAL DAT_0013f130 float
// GLOBAL DAT_0013f134 uint
// GLOBAL s_SE_Rupee_APPEAR_1_0013f150 string
// GLOBAL s_SE_Rupee_APPEAR_2_0013f164 string
// GLOBAL s_SE_Rupee_APPEAR_3_0013f178 string
// GLOBAL s_SE_Rupee_APPEAR_A_LOT_0013f138 string

/* WARNING: Variable defined which should be unmapped: objStack_50 */

undefined4 func_0013EF04(int *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  uint in_fpscr;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  char *pcVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define objStack_50 ((uint *)(albw_frame + 0x0))
  #define local_4c (*(char * *)(albw_frame + 0x4))
  #define local_48 (*(float *)(albw_frame + 0x8))
  #define fStack_44 (*(float *)(albw_frame + 0xc))
  piVar1 = DAT_0013f118;
  uVar3 = func_00111A64((uint *)(*DAT_0013f118 + 0x660));
  iVar2 = DAT_0013f128;
  iVar4 = (int)((ulonglong)uVar3 * 6 >> 0x20);
  iVar8 = iVar4 + 5;
  iVar7 = 0;
  fVar14 = DAT_0013f11c;
  fVar15 = DAT_0013f124;
  fVar16 = DAT_0013f12c;
  fVar17 = DAT_0013f130;
  fVar12 = DAT_0013f120;
  fVar10 = DAT_0013f11c;
  if (iVar4 != -5) {
    do {
      uVar3 = func_00111A64((uint *)(*piVar1 + 0x660));
      uVar5 = func_00111A64((uint *)(*piVar1 + 0x660));
      fVar9 = (float)VectorUnsignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
      fVar11 = fVar14 + fVar9 * fVar15 * fVar10;
      pfVar6 = (float *)(iVar2 + (uVar3 >> 0x18) * 0x10);
      fVar9 = (float)VectorUnsignedToFloat(uVar3 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
      pcVar13 = (char *)ALBW_PTR_BITS(((*pfVar6 + pfVar6[1] * fVar9 * fVar16) * fVar11));
      uVar5 = func_00111A64((uint *)(*piVar1 + 0x660));
      fVar9 = (float)VectorUnsignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
      local_48 = fVar17 + fVar9 * fVar15 * fVar12;
      iVar4 = iVar2 + (uVar3 >> 0x18) * 0x10;
      fVar9 = (float)VectorUnsignedToFloat(uVar3 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
      fStack_44 = (*(float *)(iVar4 + 8) + *(float *)(iVar4 + 0xc) * fVar9 * fVar16) * fVar11;
      local_4c = pcVar13;
      uVar3 = func_00111A64((uint *)(*piVar1 + 0x660));
      objStack_50[0] = 0xffffffff;
      if ((uint)((ulonglong)uVar3 * 100 >> 0x20) < 10) {
        func_001D6FD0(param_1 + 0xf4,1,2,(int *)&local_4c,-1);
      }
      else {
        func_001D6FD0(param_1 + 0xf4,0,2,(int *)&local_4c,-1);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar8);
  }
  if (iVar8 == 1) {
    objStack_50[0] = DAT_0013f134;
    local_4c = s_SE_Rupee_APPEAR_1_0013f150;
    return func_00150A84(param_1,(int *)objStack_50,0);
  }
  if (iVar8 == 2) {
    objStack_50[0] = DAT_0013f134;
    local_4c = s_SE_Rupee_APPEAR_2_0013f164;
    return func_00150A84(param_1,(int *)objStack_50,0);
  }
  objStack_50[0] = DAT_0013f134;
  if (iVar8 == 3) {
    local_4c = s_SE_Rupee_APPEAR_3_0013f178;
    return func_00150A84(param_1,(int *)objStack_50,0);
  }
  local_4c = s_SE_Rupee_APPEAR_A_LOT_0013f138;
  return func_00150A84(param_1,(int *)objStack_50,0);
}

