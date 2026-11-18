#include "ghidra_types.h"

extern int func_00110848(int param_1);
extern int func_0033CA24(int param_1,int *param_2,float fparam_0);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_005811E8(int *param_1);
extern float DAT_0033c41c;
extern char s_GanonGuard_0033c410[];

// USA 0033C394 <- EU 0033C370 (Ghidra, non-matching)
// GLOBAL DAT_0033c41c float
// GLOBAL s_GanonGuard_0033c410 string

undefined4 func_0033C394(int param_1)

{
  int iVar1;
  int *piVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0xc))
  piVar2 = (int *)(param_1 + 0x504);
  if (*(int *)(param_1 + 0x344) == 0) {
    *piVar2 = 0;
    *(undefined4 *)(param_1 + 0x508) = 0;
  }
  else {
    iVar1 = *piVar2;
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x1c) == *(int *)(param_1 + 0x508))) {
      func_00110848(iVar1);
    }
    func_004A1B9C(&local_18,*(int *)(param_1 + 0x344),(uint *)s_GanonGuard_0033c410);
    *piVar2 = local_18;
    *(undefined4 *)(param_1 + 0x508) = uStack_14;
  }
  iVar1 = func_005811E8(piVar2);
  if (iVar1 == 0) {
    return 0;
  }
  return func_0033CA24(param_1,piVar2,DAT_0033c41c);
}

