#include "ghidra_types.h"

extern int func_003D6F78(undefined4 *param_1,int param_2);
extern int func_003DA0A0(uint param_1);
extern int func_003DA498(int *param_1,int param_2);
extern int func_00676A08(undefined4 *param_1,undefined4 *param_2,undefined2 param_3);
extern int func_00676A20(undefined4 *param_1);
extern int func_00676AA0(undefined4 *param_1,int *param_2);

// USA 003D8460 <- EU 003D8440 (Ghidra, non-matching)

undefined4 func_003D8460(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(int *)(albw_frame + 0x0))
  #define local_3c (*(int * *)(albw_frame + 0x4))
  #define local_38 (*(int *)(albw_frame + 0x8))
  #define local_34 (*(int *)(albw_frame + 0xc))
  #define piStack_30 (*(int * *)(albw_frame + 0x10))
  #define local_2c (*(int * *)(albw_frame + 0x14))
  #define piStack_28 (*(int * *)(albw_frame + 0x18))
  piStack_30 = param_1;
  local_2c = param_2;
  piStack_28 = param_3;
  func_003D6F78(&local_40,(int)param_1);
  if (local_40 != 0) {
    iVar2 = func_003DA0A0((uint)*(ushort *)(*param_1 + 10));
    func_00676AA0(&local_3c,(int *)(*param_3 + 8));
    if (local_3c != (int *)0x0) {
      local_38 = local_40;
      func_00676A08(local_3c + 2,&local_38,*(undefined2 *)(*param_1 + 10));
      if (iVar2 != 0) {
        piVar5 = (int *)0x0;
        do {
          iVar6 = iVar2 + (int)piVar5 * 2;
          if (*(short *)(iVar6 + 2) == 0) break;
          piVar4 = (int *)(*param_3 + 8);
          piVar3 = (int *)func_003DA498(*(int **)(*param_3 + 0x10),2);
          piVar1 = (int *)0x0;
          if (piVar3 != (int *)0x0) {
            if (piVar3 + 2 != (int *)0x0) {
              func_00676A20(piVar3 + 2);
            }
            *piVar3 = *piVar4;
            piVar3[1] = (int)piVar4;
            *piVar4 = (int)piVar3;
            *(int **)(*piVar3 + 4) = piVar3;
            piVar1 = piVar3;
          }
          if (piVar1 == (int *)0x0) {
            return 2;
          }
          local_34 = local_40;
          local_3c = piVar1;
          func_00676A08(piVar1 + 2,&local_34,*(undefined2 *)(iVar6 + 2));
          piVar5 = (int *)((int)piVar5 + 1);
        } while ((int)piVar5 < 3);
      }
      *local_2c = local_40;
      *param_1 = *(int *)(*param_1 + 4);
      return 0;
    }
  }
  return 2;
}

