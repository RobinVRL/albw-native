#include "ghidra_types.h"

extern int func_00110848(int param_1);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_005811E8(int *param_1);
extern int func_0066B43C(undefined4 *param_1,undefined1 param_2);
extern char s_Launch_00507d70[];

// USA 00507CD8 <- EU 00507CB0 (Ghidra, non-matching)
// GLOBAL s_Launch_00507d70 string

undefined4 func_00507CD8(int param_1)

{
  int iVar1;
  int *piVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0xc))
  iVar1 = func_005811E8((int *)(param_1 + 0x508));
  if ((iVar1 == 0) && (iVar1 = func_005811E8((int *)(param_1 + 0x500)), iVar1 == 0)) {
    piVar2 = (int *)(param_1 + 0x500);
    if (*(int *)(param_1 + 0x344) == 0) {
      *piVar2 = 0;
      *(undefined4 *)(param_1 + 0x504) = 0;
    }
    else {
      iVar1 = *piVar2;
      if ((iVar1 != 0) && (*(int *)(iVar1 + 0x1c) == *(int *)(param_1 + 0x504))) {
        func_00110848(iVar1);
      }
      func_004A1B9C(&local_18,*(int *)(param_1 + 0x344),(uint *)s_Launch_00507d70);
      *piVar2 = local_18;
      *(undefined4 *)(param_1 + 0x504) = uStack_14;
    }
  }
  if (*(short *)(param_1 + 0x2c) == 1) {
    if (*(int *)(param_1 + 0x510) < 0xb5) {
      return 0;
    }
  }
  else if (*(int *)(param_1 + 0x510) < 0x1f) {
    return 0;
  }
  return func_0066B43C((undefined4 *)(param_1 + 0x510),2);
}

