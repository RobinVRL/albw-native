#include "ghidra_types.h"

extern int func_0010DBBC(int param_1,int *param_2,int param_3,float fparam_0);
extern void func_0010F1F8(int *param_1,float fparam_0);
extern int func_004A1520();
extern int func_004A1B00(int param_1);
extern int func_004A1F20(int param_1);
extern int func_004A1FCC(int param_1);
extern int func_004A6784(int param_1);
extern int func_004A7480(int param_1);
extern undefined4 DAT_00352ad4;
extern int *DAT_00352ad8;
extern undefined4 DAT_00352adc;
extern int DAT_00352ae0;
extern float DAT_00352ae4;

// USA 00352A28 <- EU 00352A04 (Ghidra, non-matching)
// GLOBAL DAT_00352ad4 undefined4
// GLOBAL DAT_00352ad8 int *
// GLOBAL DAT_00352adc undefined4
// GLOBAL DAT_00352ae0 int
// GLOBAL DAT_00352ae4 float

undefined4 * func_00352A28(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  float in_s0;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(undefined4 *)(albw_frame + 0xc))
  *param_1 = DAT_00352ad4;
  if (param_1[8] != 0) {
    if (*(char *)(*DAT_00352ad8 + 0x298) == '\0') {
      func_004A1B00(param_1[8]);
    }
    else if (*(char *)((int)param_1 + 0x3a) != '\0') {
      local_14 = DAT_00352adc;
      local_18 = DAT_00352ae0;
      in_s0 = DAT_00352ae4;
      func_0010DBBC((int)param_1,&local_18,2,DAT_00352ae4);
      func_004A1F20(param_1[8]);
      if (param_1[9] != 0) {
        func_004A6784(param_1[9]);
      }
    }
    func_004A1FCC(param_1[8]);
    if (param_1[9] != 0) {
      func_004A7480(param_1[9]);
    }
    iVar2 = param_1[7];
    if (iVar2 != 0) {
      param_1[7] = 0;
      func_0010F1F8(param_1 + 4,in_s0);
      *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + -1;
    }
  }
  puVar1 = func_004A1520(param_1);
  return puVar1;
}

