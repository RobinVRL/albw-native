#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_002B7CAC(int param_1,uint param_2,int param_3);
extern int func_0058A7D4(void);
extern int DAT_003953b4;
extern float DAT_003953b8;
extern int DAT_003953bc;
extern float DAT_003953c0;
extern float DAT_003953c4;

// USA 0039518C <- EU 00395168 (Ghidra, non-matching)
// GLOBAL DAT_003953b4 int
// GLOBAL DAT_003953b8 float
// GLOBAL DAT_003953bc int
// GLOBAL DAT_003953c0 float
// GLOBAL DAT_003953c4 float

undefined4 func_0039518C(int *param_1,float *param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  float fVar3;
  uint uVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(float *)(albw_frame + 0x0))
  #define fStack_1c (*(float *)(albw_frame + 0x4))
  #define local_18 (*(float *)(albw_frame + 0x8))
  if (*(short *)((int)param_1 + 0xe) == 0) {
    *(undefined2 *)((int)param_1 + 0xe) = 10;
    if ((*(int *)(param_3 + 0x2c) != 0) && (*(char *)(*(int *)(param_3 + 0x2c) + 1) == '\x06')) {
      (**(code **)(**(int **)(*(int *)(*param_1 + 0x93c) + 4) + 0x110))(*(int **)(*(int *)(*param_1 + 0x93c) + 4));
    }
    if (*(char *)(*(int *)(*(int *)(*param_1 + 0x93c) + 4) + 0x62) == '\0') {
      puVar1 = (uint *)func_0058A7D4();
      uVar2 = func_00111A64(puVar1);
      if ((uint)((ulonglong)uVar2 * 0x65 >> 0x20) < 0xb) {
        return (**(code **)(**(int **)(*(int *)(*param_1 + 0x93c) + 4) + 0x110))(*(int **)(*(int *)(*param_1 + 0x93c) + 4));
      }
    }
    else {
      local_20 = *param_2;
      fStack_1c = param_2[1];
      local_18 = param_2[2];
      func_00115C70(&local_20,&local_20,(float *)(*param_1 + 0x3d0));
      fVar3 = SQRT(local_20 * local_20 + local_18 * local_18);
      if ((int)ALBW_AS_U32(fVar3) < DAT_003953b4) {
        if ((int)ALBW_AS_U32(fVar3) < DAT_003953bc) {
          if ((int)ALBW_AS_U32(fVar3) < 0x40000000) {
            if ((int)ALBW_AS_U32(fVar3) < 0x3f800000) {
              fVar3 = DAT_003953c4;
              puVar1 = (uint *)func_0058A7D4();
              uVar2 = func_00111A64(puVar1);
              uVar4 = VectorFloatToUnsigned(ALBW_AS_F32(param_1[1]) * fVar3,3);
              if (uVar4 < (uint)((ulonglong)uVar2 * 0x65 >> 0x20)) {
                return 0;
              }
            }
            else {
              fVar3 = DAT_003953c4;
              puVar1 = (uint *)func_0058A7D4();
              uVar2 = func_00111A64(puVar1);
              uVar4 = VectorFloatToUnsigned(ALBW_AS_F32(param_1[1]) * fVar3,3);
              if (uVar4 < (uint)((ulonglong)uVar2 * 0x65 >> 0x20)) {
                return 0;
              }
            }
          }
          else {
            fVar3 = DAT_003953c4;
            puVar1 = (uint *)func_0058A7D4();
            uVar2 = func_00111A64(puVar1);
            uVar4 = VectorFloatToUnsigned(ALBW_AS_F32(param_1[1]) * fVar3,3);
            if (uVar4 < (uint)((ulonglong)uVar2 * 0x65 >> 0x20)) {
              return 0;
            }
          }
        }
        else {
          puVar1 = (uint *)func_0058A7D4();
          uVar2 = func_00111A64(puVar1);
          uVar4 = VectorFloatToUnsigned(ALBW_AS_F32(param_1[1]) * DAT_003953c0,3);
          if (uVar4 < (uint)((ulonglong)uVar2 * 0x65 >> 0x20)) {
            return 0;
          }
        }
      }
      else {
        puVar1 = (uint *)func_0058A7D4();
        uVar2 = func_00111A64(puVar1);
        uVar4 = VectorFloatToUnsigned(ALBW_AS_F32(param_1[1]) * DAT_003953b8,3);
        if (uVar4 < (uint)((ulonglong)uVar2 * 0x65 >> 0x20)) {
          return 0;
        }
      }
      func_002B7CAC(*param_1,2,1);
    }
  }
  return 0;
}

