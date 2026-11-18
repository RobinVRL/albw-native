#include "ghidra_types.h"

extern int func_00110848(int param_1);
extern int func_001509A4(int param_1,int *param_2,int param_3);
extern undefined4 func_00151148(int param_1,int param_2);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004A2F38(int param_1,undefined4 *param_2);
extern undefined4 DAT_004e1984;
extern undefined DAT_004e1988;
extern int DAT_004e199c;
extern char s_ASE_Arrow_FLY_004e198b[];
extern char s_ReactInvalid_004e1974[];
extern undefined4 _DAT_004e1988;

// USA 004E18A0 <- EU 004E1878 (Ghidra, non-matching)
// GLOBAL DAT_004e1984 undefined4
// GLOBAL DAT_004e1988 undefined
// GLOBAL DAT_004e199c int
// GLOBAL s_ASE_Arrow_FLY_004e198b string
// GLOBAL s_ReactInvalid_004e1974 string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_004E18A0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(char * *)(albw_frame + 0x4))
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
      func_004A1B9C(&local_18,*(int *)(param_1 + 0x344),(uint *)s_ReactInvalid_004e1974);
      *piVar3 = local_18;
      *(undefined4 *)(param_1 + 0x500) = uStack_14;
    }
    iVar2 = *piVar3;
    if ((iVar2 != 0) && (*(int *)(iVar2 + 0x1c) == *(int *)(param_1 + 0x500))) {
      func_004A2F38(iVar2,(undefined4 *)(param_1 + 0x3d0));
    }
  }
  uVar1 = DAT_004e1984;
  *(undefined4 *)(param_1 + 0x4e8) = 0x3c;
  *(undefined4 *)(param_1 + 0x4ec) = uVar1;
  uVar1 = _DAT_004e1988;
  *(undefined4 *)(param_1 + 0x4e4) = 0;
  *(undefined4 *)(param_1 + 0x504) = uVar1;
  local_1c = s_ASE_Arrow_FLY_004e198b + 1;
  local_20 = DAT_004e199c;
  func_001509A4(param_1,&local_20,0);
  return func_00151148(*(int *)(param_1 + 0x458),0);
}

