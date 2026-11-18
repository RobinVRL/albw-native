#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_0014EEC8(int param_1,uint param_2,undefined4 *param_3,undefined4 param_4,float fparam_0);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_004ED9C8(int param_1);
extern float DAT_00174254;
extern float DAT_00174258;
extern undefined4 DAT_0017425c;

// USA 001740FC <- EU 001740FC (Ghidra, non-matching)
// GLOBAL DAT_00174254 float
// GLOBAL DAT_00174258 float
// GLOBAL DAT_0017425c undefined4

undefined4 func_001740FC(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  uint in_fpscr;
  uint uVar5;
  float fVar6;
  float fVar7;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(float *)(albw_frame + 0x0))
  #define local_2c (*(float *)(albw_frame + 0x4))
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define local_24 (*(float *)(albw_frame + 0xc))
  #define local_20 (*(float *)(albw_frame + 0x10))
  #define local_1c (*(float *)(albw_frame + 0x14))
  fVar7 = DAT_00174254;
  fVar6 = *(float *)(param_1 + 0x3e0);
  uVar2 = in_fpscr & 0xfffffff | (uint)(fVar6 < DAT_00174254) << 0x1f |
          (uint)(fVar6 == DAT_00174254) << 0x1e | (uint)(DAT_00174254 <= fVar6) << 0x1d;
  uVar5 = uVar2 | (uint)(NAN(fVar6) || NAN(DAT_00174254)) << 0x1c;
  bVar1 = (byte)(uVar2 >> 0x18);
  if ((!(bool)(bVar1 >> 5 & 1)) ||
     (!(bool)(bVar1 >> 6 & 1) && bVar1 >> 7 == ((byte)(uVar5 >> 0x1c) & 1))) {
    fVar6 = DAT_00174254;
  }
  *(float *)(param_1 + 0x3e0) = fVar6;
  func_00115C54((float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3dc));
  piVar4 = (int *)(*(int *)(param_1 + 0x434) + *(char *)(param_1 + 0x41c) * 8);
  uVar2 = *(uint *)(*(int *)(param_1 + 0x434) + *(char *)(param_1 + 0x41c) * 8 + 4);
  if ((uVar2 & 1) != 0) {
    piVar4 = (int *)(*piVar4 + *(int *)(*(int *)(param_1 + 0x42c) + ((int)uVar2 >> 1)));
  }
  (*(code *)*piVar4)();
  iVar3 = *(int *)(param_1 + 0x418) + 1;
  *(int *)(param_1 + 0x418) = iVar3;
  if (*(int *)(param_1 + 0x428) != 0) {
    fVar6 = (float)VectorUnsignedToFloat(iVar3,(byte)(uVar5 >> 0x15) & 3);
    func_00352210(*(int *)(param_1 + 0x428),1,fVar6);
  }
  local_20 = DAT_00174258;
  local_1c = DAT_00174258;
  local_30 = fVar7;
  local_2c = fVar7;
  local_28 = fVar7;
  local_24 = fVar7;
  iVar3 = func_0014EEC8(param_1,(uint)&local_30,&local_24,DAT_0017425c,DAT_00174258);
  if (iVar3 != 0) {
    func_00115C54((float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3d0),&local_30);
    *(float *)(param_1 + 0x3dc) = fVar7;
    *(float *)(param_1 + 0x3e0) = fVar7;
    *(float *)(param_1 + 0x3e4) = fVar7;
  }
  iVar3 = *(int *)(*(int *)(param_1 + 0x40c) + 0x18);
  *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(param_1 + 0x3d0);
  *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(param_1 + 0x3d4);
  *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(param_1 + 0x3d8);
  return func_004ED9C8(*(int *)(param_1 + 0x40c));
}

