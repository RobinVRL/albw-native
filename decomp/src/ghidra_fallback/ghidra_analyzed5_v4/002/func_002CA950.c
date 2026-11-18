#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_001D6FD0(undefined4 *param_1,uint param_2,int param_3,int *param_4,int param_5);
extern int func_004E97FC(int param_1,undefined4 param_2,undefined4 param_3);
extern int *DAT_002cab40;
extern float DAT_002cab44;
extern float DAT_002cab48;
extern float DAT_002cab4c;
extern int DAT_002cab50;
extern float DAT_002cab54;
extern float DAT_002cab58;
extern int *DAT_002cab5c;
extern uint DAT_002cab60;
extern char s_SE_Rupee_APPEAR_1_002cab7c[];
extern char s_SE_Rupee_APPEAR_2_002cab90[];
extern char s_SE_Rupee_APPEAR_3_002caba4[];
extern char s_SE_Rupee_APPEAR_A_LOT_002cab64[];

// USA 002CA950 <- EU 002CA92C (Ghidra, non-matching)
// GLOBAL DAT_002cab40 int *
// GLOBAL DAT_002cab44 float
// GLOBAL DAT_002cab48 float
// GLOBAL DAT_002cab4c float
// GLOBAL DAT_002cab50 int
// GLOBAL DAT_002cab54 float
// GLOBAL DAT_002cab58 float
// GLOBAL DAT_002cab5c int *
// GLOBAL DAT_002cab60 uint
// GLOBAL s_SE_Rupee_APPEAR_1_002cab7c string
// GLOBAL s_SE_Rupee_APPEAR_2_002cab90 string
// GLOBAL s_SE_Rupee_APPEAR_3_002caba4 string
// GLOBAL s_SE_Rupee_APPEAR_A_LOT_002cab64 string

/* WARNING: Variable defined which should be unmapped: objStack_50 */

undefined4 func_002CA950(undefined4 *param_1)

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
  piVar1 = DAT_002cab40;
  uVar3 = func_00111A64((uint *)(*DAT_002cab40 + 0x660));
  iVar2 = DAT_002cab50;
  iVar4 = (int)((ulonglong)uVar3 * 6 >> 0x20);
  iVar8 = iVar4 + 5;
  iVar7 = 0;
  fVar14 = DAT_002cab44;
  fVar15 = DAT_002cab4c;
  fVar16 = DAT_002cab54;
  fVar17 = DAT_002cab58;
  fVar12 = DAT_002cab48;
  fVar10 = DAT_002cab44;
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
      if ((uint)((ulonglong)uVar3 * 100 >> 0x20) < 5) {
        func_001D6FD0(param_1,1,2,(int *)&local_4c,-1);
      }
      else {
        func_001D6FD0(param_1,0,2,(int *)&local_4c,-1);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar8);
  }
  if (iVar8 == 1) {
    objStack_50[0] = DAT_002cab60;
    local_4c = s_SE_Rupee_APPEAR_1_002cab7c;
    return func_004E97FC(*DAT_002cab5c,objStack_50,param_1);
  }
  if (iVar8 == 2) {
    objStack_50[0] = DAT_002cab60;
    local_4c = s_SE_Rupee_APPEAR_2_002cab90;
    return func_004E97FC(*DAT_002cab5c,objStack_50,param_1);
  }
  objStack_50[0] = DAT_002cab60;
  if (iVar8 == 3) {
    local_4c = s_SE_Rupee_APPEAR_3_002caba4;
    return func_004E97FC(*DAT_002cab5c,objStack_50,param_1);
  }
  local_4c = s_SE_Rupee_APPEAR_A_LOT_002cab64;
  return func_004E97FC(*DAT_002cab5c,objStack_50,param_1);
}

