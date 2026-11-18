#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern float func_00115DC8(float *param_1);
extern int DAT_00531040;
extern float DAT_00531044;
extern float DAT_00531048;
extern float *DAT_0053104c;
extern float DAT_00531050;
extern undefined4 DAT_00531054;

// USA 00530F44 <- EU 00530F1C (Ghidra, non-matching)
// GLOBAL DAT_00531040 int
// GLOBAL DAT_00531044 float
// GLOBAL DAT_00531048 float
// GLOBAL DAT_0053104c float *
// GLOBAL DAT_00531050 float
// GLOBAL DAT_00531054 undefined4

void func_00530F44(int param_1,int param_2,int param_3)

{
  float fVar1;
  float fVar2;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(float *)(albw_frame + 0x0))
  #define uStack_3c (*(undefined4 *)(albw_frame + 0x4))
  #define uStack_38 (*(undefined4 *)(albw_frame + 0x8))
  #define local_34 (*(float *)(albw_frame + 0xc))
  #define fStack_30 (*(float *)(albw_frame + 0x10))
  #define local_2c (*(float *)(albw_frame + 0x14))
  #define local_24 (*(float *)(albw_frame + 0x1c))
  #define local_20 (*(undefined4 *)(albw_frame + 0x20))
  #define local_1c (*(undefined4 *)(albw_frame + 0x24))
  #define local_18 (*(float *)(albw_frame + 0x28))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_10 (*(undefined4 *)(albw_frame + 0x30))
  if (*(char *)(param_1 + 0xba4) == '\0' && param_2 == 0x12) {
    fVar2 = *(float *)(param_1 + 0x3d0) - *(float *)(param_1 + 0x900);
    fVar1 = *(float *)(param_1 + 0x3d8) - *(float *)(param_1 + 0x908);
    if (DAT_00531040 < (int)ALBW_AS_U32(SQRT(fVar2 * fVar2 + fVar1 * fVar1))) {
      local_34 = *DAT_0053104c;
      fStack_30 = DAT_0053104c[1];
      local_2c = DAT_0053104c[2];
      if (fVar1 <= fVar2) {
        if (fVar2 < -fVar1) {
          local_2c = DAT_00531044;
        }
        else {
          local_34 = DAT_00531048;
        }
      }
      else if (fVar2 < -fVar1) {
        local_34 = DAT_00531044;
      }
      else {
        local_2c = DAT_00531048;
      }
      func_00115D70(&local_18,&local_34,DAT_00531050);
      local_40 = local_18;
      uStack_3c = uStack_14;
      uStack_38 = local_10;
      func_00115C54(&local_18,(float *)(param_3 + 0xc),&local_40);
      local_24 = local_18;
      local_1c = local_10;
      local_20 = DAT_00531054;
      func_00115DC8(&local_24);
      return;
    }
  }
  return;
}

