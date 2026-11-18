// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_0014FB58(int param_1,float *param_2,int param_3,float fparam_0);
extern int func_0019DF7C(int param_1,float *param_2,undefined1 *param_3,undefined1 *param_4);
extern int func_00520FC0(void);
extern int func_00556B3C(int param_1);
extern int func_0065A1EC(undefined4 *param_1,undefined1 param_2);
extern int func_0068C794(float *param_1,float fparam_0,float fparam_1,float fparam_2,float fparam_3);
extern int DAT_0019dd34;
extern float DAT_0019dd38;
extern int DAT_0019dd3c;
extern float DAT_0019dd40;
extern int DAT_0019dd44;
extern float DAT_0019dd48;
extern float DAT_0019dd4c;
extern float DAT_0019dd50;
extern float DAT_0019dd54;
extern int *DAT_0019dd58;

// USA 0019DB78 <- EU 0019DB78 (Ghidra, non-matching)
// GLOBAL DAT_0019dd34 int
// GLOBAL DAT_0019dd38 float
// GLOBAL DAT_0019dd3c int
// GLOBAL DAT_0019dd40 float
// GLOBAL DAT_0019dd44 int
// GLOBAL DAT_0019dd48 float
// GLOBAL DAT_0019dd4c float
// GLOBAL DAT_0019dd50 float
// GLOBAL DAT_0019dd54 float
// GLOBAL DAT_0019dd58 int *

undefined4 func_0019DB78(int param_1)

{
  bool bVar1;
  float *pfVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  float *pfVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(float *)(albw_frame + 0x0))
  #define local_3c ((char *)(albw_frame + 0x4))
  #define local_30 ((char *)(albw_frame + 0x10))
  #define local_2c ((float *)(albw_frame + 0x14))
  iVar4 = DAT_0019dd34;
  pfVar2 = (float *)func_00520FC0();
  bVar1 = func_0014FB58(param_1,pfVar2,iVar4,DAT_0019dd38);
  uVar3 = (uint)bVar1;
  uVar5 = DAT_0019dd3c + *(int *)(param_1 + 0x8e0);
  if (0x3fffffff < uVar5) {
    uVar3 = 0x40000000;
  }
  *(uint *)(param_1 + 0x8e0) = uVar5;
  if (0x3fffffff < uVar5) {
    *(uint *)(param_1 + 0x8e0) = uVar3;
  }
  local_30[0] = '\0';
  local_3c[0] = '\0';
  local_40 = *(float *)(param_1 + 0x8ec);
  uVar3 = func_0019DF7C(param_1,&local_40,local_3c,local_30);
  pfVar2 = (float *)(DAT_0019dd44 + (*(uint *)(param_1 + 0x8e0) >> 0x18) * 0x10);
  fVar7 = (float)VectorUnsignedToFloat
                           (*(uint *)(param_1 + 0x8e0) & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
  pfVar6 = (float *)(DAT_0019dd44 + (uVar3 >> 0x18) * 0x10);
  local_40 = (*pfVar2 + pfVar2[1] * fVar7 * DAT_0019dd40) * local_40;
  fVar7 = (float)VectorUnsignedToFloat(uVar3 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
  local_2c[0] = *(float *)(param_1 + 0x3d4);
  fVar11 = (*pfVar6 + pfVar6[1] * fVar7 * DAT_0019dd40) * local_40;
  fVar7 = DAT_0019dd40;
  iVar4 = func_00520FC0();
  uVar5 = func_0068C794(local_2c,*(float *)(iVar4 + 4) + DAT_0019dd48,DAT_0019dd54,DAT_0019dd50,
                        DAT_0019dd4c);
  fVar9 = pfVar6[2];
  fVar10 = pfVar6[3];
  fVar8 = (float)VectorUnsignedToFloat(uVar3 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
  *(float *)(param_1 + 0x3dc) = fVar11;
  *(float *)(param_1 + 0x3e0) = local_2c[0] - *(float *)(param_1 + 0x3d4);
  *(float *)(param_1 + 0x3e4) = (fVar9 + fVar10 * fVar8 * fVar7) * local_40;
  uVar3 = (uint)local_3c[0];
  local_3c[0] = (char)(uVar5 & uVar3);
  if ((uVar5 & uVar3) == 0) {
    if (((local_30[0] != '\0') || (0x59 < *(int *)(param_1 + 0x8bc))) ||
       (bVar1 = func_00556B3C(*DAT_0019dd58), bVar1)) {
      return func_0065A1EC((undefined4 *)(param_1 + 0x8bc),5);
    }
  }
  else {
    func_0065A1EC((undefined4 *)(param_1 + 0x8bc),3);
  }
  return 0;
}

