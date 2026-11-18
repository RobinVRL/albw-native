#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_001282AC(int param_1,float *param_2);
extern int func_001283A8(int param_1);
extern int func_005211F4(int param_1,float fparam_0,float fparam_1);
extern int func_006568D8(undefined4 *param_1,undefined1 param_2);
extern float DAT_00128084;
extern float DAT_00128088;
extern float DAT_0012808c;
extern int *DAT_00128090;
extern float DAT_00128094;
extern float DAT_00128098;
extern float DAT_0012809c;

// USA 00127F48 <- EU 00127F48 (Ghidra, non-matching)
// GLOBAL DAT_00128084 float
// GLOBAL DAT_00128088 float
// GLOBAL DAT_0012808c float
// GLOBAL DAT_00128090 int *
// GLOBAL DAT_00128094 float
// GLOBAL DAT_00128098 float
// GLOBAL DAT_0012809c float

undefined4 func_00127F48(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define local_24 (*(undefined4 *)(albw_frame + 0xc))
  #define local_20 (*(float *)(albw_frame + 0x10))
  iVar2 = func_005211F4(param_1,DAT_00128088,DAT_00128084);
  piVar1 = DAT_00128090;
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 0x8ec);
    if (iVar2 == 0) {
      fVar4 = DAT_00128094;
      uVar3 = func_00111A64((uint *)(*DAT_00128090 + 0x660));
      fVar5 = (float)VectorUnsignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
      local_28 = fVar5 * DAT_00128098 * fVar4 + DAT_0012809c + *(float *)(param_1 + 8);
      local_24 = *(undefined4 *)(param_1 + 0xc);
      fVar5 = DAT_00128098;
      fVar7 = DAT_0012809c;
      uVar3 = func_00111A64((uint *)(*piVar1 + 0x660));
      fVar6 = (float)VectorUnsignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
      local_20 = fVar6 * fVar5 * fVar4 + fVar7 + *(float *)(param_1 + 0x10);
      return func_001282AC(param_1,&local_28);
    }
    if (iVar2 == 1) {
      return func_001283A8(param_1);
    }
    if (iVar2 == 2) {
      fVar4 = *(float *)(param_1 + 0x3e4) * DAT_0012808c;
      *(float *)(param_1 + 0x3dc) = *(float *)(param_1 + 0x3dc) * DAT_0012808c;
      *(float *)(param_1 + 0x3e4) = fVar4;
      if (*(uint *)(param_1 + 0x8e0) < *(uint *)(param_1 + 0x8e4)) {
        *(uint *)(param_1 + 0x8e0) = *(uint *)(param_1 + 0x8e0) + 1;
      }
      else {
        *(undefined4 *)(param_1 + 0x8ec) = 0;
      }
      return 0;
    }
  }
  else {
    func_006568D8((undefined4 *)(param_1 + 0x8bc),2);
  }
  return 0;
}

