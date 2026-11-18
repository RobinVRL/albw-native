#include "ghidra_types.h"

extern int func_001507D8(int param_1,int *param_2,int param_3);
extern int func_004C9AFC(int param_1,float *param_2);
extern int func_004CA164(int *param_1);
extern int func_004CA984(int param_1);
extern int func_0066A284(undefined4 *param_1,undefined1 param_2);
extern int DAT_004ca6b8;
extern int DAT_004ca6bc;
extern int DAT_004ca6c0;
extern float DAT_004ca6c4;
extern char s_SE_Bee_FLY_ATTACK_004ca6a4[];

// USA 004CA5A4 <- EU 004CA57C (Ghidra, non-matching)
// GLOBAL DAT_004ca6b8 int
// GLOBAL DAT_004ca6bc int
// GLOBAL DAT_004ca6c0 int
// GLOBAL DAT_004ca6c4 float
// GLOBAL s_SE_Bee_FLY_ATTACK_004ca6a4 string

undefined4 func_004CA5A4(int *param_1)

{
  int iVar1;
  float fVar2;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  local_10 = DAT_004ca6b8;
  local_c = s_SE_Bee_FLY_ATTACK_004ca6a4;
  func_001507D8((int)param_1,&local_10,0);
  iVar1 = func_004CA984((int)param_1);
  if (iVar1 == 0) {
    if (param_1[0x255] == 0) {
      if ((uint)param_1[0x272] < (uint)param_1[0x273]) {
        param_1[0x272] = param_1[0x272] + 1;
      }
      else {
        param_1[0xf8] = DAT_004ca6bc;
        iVar1 = DAT_004ca6c0;
        param_1[0x273] = 5;
        param_1[0x274] = iVar1;
        param_1[0x272] = 0;
        param_1[0x255] = 1;
      }
    }
    else if (param_1[0x255] == 1) {
      fVar2 = ALBW_AS_F32(param_1[0xf9]) * DAT_004ca6c4;
      param_1[0xf7] = (int)ALBW_AS_U32((ALBW_AS_F32(param_1[0xf7]) * DAT_004ca6c4));
      param_1[0xf9] = (int)ALBW_AS_U32(fVar2);
      if (((uint)param_1[0x273] <= (uint)param_1[0x272]) ||
         (param_1[0x272] = param_1[0x272] + 1, *(char *)((int)param_1 + 0x991) == ',')) {
        func_004CA164(param_1);
      }
    }
    return func_004C9AFC((int)param_1,(float *)(param_1 + 0x23a));
  }
  return func_0066A284(param_1 + 0x22f,9);
}

