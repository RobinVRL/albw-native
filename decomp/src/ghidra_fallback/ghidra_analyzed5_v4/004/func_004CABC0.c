#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_004C90E8(int param_1);
extern int func_004C9AFC(int param_1,float *param_2);
extern int func_004CA984(int param_1);
extern int func_004D838C(float *param_1,float *param_2,float fparam_0,float fparam_1,float fparam_2);
extern int func_00520FC0(void);
extern float func_00521298(int param_1);
extern int func_0058A7D4(void);
extern int func_0066A284(undefined4 *param_1,undefined1 param_2);
extern int DAT_004cad30;
extern float DAT_004cad34;
extern float DAT_004cad38;
extern undefined4 DAT_004cad3c;
extern float DAT_004cad40;
extern float DAT_004cad44;
extern undefined4 DAT_004cad48;
extern float DAT_004cad4c;
extern float DAT_004cad50;
extern float DAT_004cad54;
extern float DAT_004cad58;

// USA 004CABC0 <- EU 004CAB98 (Ghidra, non-matching)
// GLOBAL DAT_004cad30 int
// GLOBAL DAT_004cad34 float
// GLOBAL DAT_004cad38 float
// GLOBAL DAT_004cad3c undefined4
// GLOBAL DAT_004cad40 float
// GLOBAL DAT_004cad44 float
// GLOBAL DAT_004cad48 undefined4
// GLOBAL DAT_004cad4c float
// GLOBAL DAT_004cad50 float
// GLOBAL DAT_004cad54 float
// GLOBAL DAT_004cad58 float

undefined4 func_004CABC0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  float *pfVar3;
  uint *puVar4;
  uint uVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(float *)(albw_frame + 0x0))
  #define local_2c (*(float *)(albw_frame + 0x4))
  #define local_28 (*(float *)(albw_frame + 0x8))
  func_004C90E8(param_1);
  iVar2 = func_004CA984(param_1);
  if (iVar2 == 0) {
    pfVar3 = (float *)func_00520FC0();
    local_30 = *pfVar3;
    local_2c = pfVar3[1];
    local_28 = pfVar3[2];
    fVar6 = func_00521298(param_1);
    lVar8 = (ulonglong)(uint)ALBW_AS_U32(DAT_004cad38) << 0x20;
    if ((int)ALBW_AS_U32(fVar6) < DAT_004cad30) {
      if (*(uint *)(param_1 + 0x948) < *(uint *)(param_1 + 0x94c)) {
        *(uint *)(param_1 + 0x948) = *(uint *)(param_1 + 0x948) + 1;
      }
      else {
        fVar6 = DAT_004cad38;
        fVar9 = DAT_004cad34;
        puVar4 = (uint *)func_0058A7D4();
        lVar8 = CONCAT44(fVar6,DAT_004cad3c);
        uVar5 = func_00111A64(puVar4);
        fVar10 = DAT_004cad44;
        fVar6 = DAT_004cad40;
        fVar7 = (float)VectorUnsignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
        *(float *)(param_1 + 0x93c) = fVar7 * DAT_004cad40 * ALBW_AS_F32(lVar8) + DAT_004cad44;
        puVar4 = (uint *)func_0058A7D4();
        uVar5 = func_00111A64(puVar4);
        fVar7 = (float)VectorUnsignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
        *(float *)(param_1 + 0x944) = fVar7 * fVar6 * ALBW_AS_F32(lVar8) + fVar10;
        *(float *)(param_1 + 0x940) = fVar9;
        uVar1 = DAT_004cad48;
        *(undefined4 *)(param_1 + 0x94c) = 0x46;
        *(undefined4 *)(param_1 + 0x950) = uVar1;
        *(undefined4 *)(param_1 + 0x948) = 0;
      }
      fVar6 = ALBW_AS_F32(((ulonglong)lVar8 >> 0x20));
      func_00115C54(&local_30,&local_30,(float *)(param_1 + 0x93c));
      func_004D838C((float *)(param_1 + 0x3d0),&local_30,DAT_004cad50,fVar6,DAT_004cad4c);
    }
    else {
      local_2c = local_2c + DAT_004cad34;
      func_004D838C((float *)(param_1 + 0x3d0),&local_30,DAT_004cad58,DAT_004cad38,DAT_004cad54);
    }
    pfVar3 = (float *)func_00520FC0();
    return func_004C9AFC(param_1,pfVar3);
  }
  return func_0066A284((undefined4 *)(param_1 + 0x8bc),9);
}

