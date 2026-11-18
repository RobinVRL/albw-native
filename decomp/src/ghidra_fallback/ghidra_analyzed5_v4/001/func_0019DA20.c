#include "ghidra_types.h"

extern int func_0014FDC4(int param_1,float *param_2,int param_3,float fparam_0,float fparam_1);
extern int func_00520FC0(void);
extern int func_0065A1EC(undefined4 *param_1,undefined1 param_2);
extern int func_0068C794(float *param_1,float fparam_0,float fparam_1,float fparam_2,float fparam_3);
extern float DAT_0019db4c;
extern float DAT_0019db50;
extern float DAT_0019db54;
extern int DAT_0019db58;
extern float DAT_0019db5c;
extern int DAT_0019db60;
extern float DAT_0019db64;
extern int DAT_0019db68;
extern int DAT_0019db6c;

// USA 0019DA20 <- EU 0019DA20 (Ghidra, non-matching)
// GLOBAL DAT_0019db4c float
// GLOBAL DAT_0019db50 float
// GLOBAL DAT_0019db54 float
// GLOBAL DAT_0019db58 int
// GLOBAL DAT_0019db5c float
// GLOBAL DAT_0019db60 int
// GLOBAL DAT_0019db64 float
// GLOBAL DAT_0019db68 int
// GLOBAL DAT_0019db6c int

undefined4 func_0019DA20(int param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(float *)(albw_frame + 0x0))
  #define local_1c (*(float *)(albw_frame + 0x4))
  #define local_18 (*(float *)(albw_frame + 0x8))
  local_20 = *(float *)(param_1 + 8);
  local_1c = *(float *)(param_1 + 0xc);
  local_18 = *(float *)(param_1 + 0x10);
  fVar2 = DAT_0019db54;
  func_0068C794((float *)(param_1 + 0x3d4),local_1c + DAT_0019db4c,DAT_0019db54,DAT_0019db50,
                DAT_0019db50);
  local_1c = *(float *)(param_1 + 0x3d4);
  func_0014FDC4(param_1,&local_20,DAT_0019db58,DAT_0019db5c,fVar2);
  fVar2 = local_20 - *(float *)(param_1 + 0x3d0);
  fVar3 = local_18 - *(float *)(param_1 + 0x3d8);
  if ((int)ALBW_AS_U32((fVar2 * fVar2 + fVar3 * fVar3)) < DAT_0019db60) {
    func_0065A1EC((undefined4 *)(param_1 + 0x8bc),0);
  }
  else {
    pfVar1 = (float *)func_00520FC0();
    fVar2 = pfVar1[1] - *(float *)(param_1 + 0xc);
    if (fVar2 <= DAT_0019db64) {
      fVar2 = -fVar2;
    }
    if (((int)ALBW_AS_U32(fVar2) < DAT_0019db68) &&
       (fVar2 = *pfVar1 - *(float *)(param_1 + 0x3d0),
       fVar3 = pfVar1[2] - *(float *)(param_1 + 0x3d8),
       (int)ALBW_AS_U32((fVar2 * fVar2 + fVar3 * fVar3)) <= DAT_0019db6c)) {
      return func_0065A1EC((undefined4 *)(param_1 + 0x8bc),1);
    }
  }
  return 0;
}

