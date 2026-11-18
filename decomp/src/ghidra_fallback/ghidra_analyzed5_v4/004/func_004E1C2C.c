#include "ghidra_types.h"

extern int func_00110848(int param_1);
extern int func_001509A4(int param_1,int *param_2,int param_3);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern undefined4 func_00151148(int param_1,int param_2);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004A2F38(int param_1,undefined4 *param_2);
extern float fRam004e1d1c;
extern int iRam004e1d30;
extern char s_ReactInvalid_004e1d0c[];
extern char s_SE_Arrow_STICK_004e1d34[];
extern char s_cf_004e1d20[];

// USA 004E1C2C <- EU 004E1C04 (Ghidra, non-matching)
// GLOBAL UNK_004e1d1c float
// GLOBAL UNK_004e1d30 int
// GLOBAL s_ReactInvalid_004e1d0c string
// GLOBAL s_SE_Arrow_STICK_004e1d34 string

undefined4 func_004E1C2C(int param_1)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define iStack_20 (*(int *)(albw_frame + 0x0))
  #define pcStack_1c (*(char * *)(albw_frame + 0x4))
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0xc))
  if (*(char *)(param_1 + 0x52c) != '\0') {
    piVar3 = (int *)(param_1 + 0x4fc);
    if (*(int *)(param_1 + 0x344) == 0) {
      *piVar3 = 0;
      *(undefined4 *)(param_1 + 0x500) = 0;
    }
    else {
      iVar2 = *piVar3;
      if ((iVar2 != 0) && (*(int *)(iVar2 + 0x1c) == *(int *)(param_1 + 0x500))) {
        func_00110848(iVar2);
      }
      func_004A1B9C(&local_18,*(int *)(param_1 + 0x344),(uint *)s_ReactInvalid_004e1d0c);
      *piVar3 = local_18;
      *(undefined4 *)(param_1 + 0x500) = uStack_14;
    }
    iVar2 = *piVar3;
    if ((iVar2 != 0) && (*(int *)(iVar2 + 0x1c) == *(int *)(param_1 + 0x500))) {
      func_004A2F38(iVar2,(undefined4 *)(param_1 + 0x3d0));
    }
  }
  func_00151148(*(int *)(param_1 + 0x458),0);
  fVar1 = fRam004e1d1c;
  *(undefined4 *)(param_1 + 0x50c) = *(undefined4 *)(param_1 + 1000);
  iVar2 = iRam004e1d30;
  *(float *)(param_1 + 0x508) = *(float *)(param_1 + 0x508) - fVar1;
  pcStack_1c = (char *)((int)s_cf_004e1d20);
  iStack_20 = iVar2;
  func_001509A4(param_1,&iStack_20,0);
  pcStack_1c = s_SE_Arrow_STICK_004e1d34;
  iStack_20 = iVar2;
  return func_00150A84((int *)param_1,&iStack_20,0);
}

