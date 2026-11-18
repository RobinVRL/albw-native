#include "ghidra_types.h"

extern int func_00414FF0(void);
extern int func_00569658(int param_1);
extern int func_0056D6B0(undefined4 param_1,int param_2,int *param_3,uint *param_4);

// USA 0040B738 <- EU 0040B718 (Ghidra, non-matching)

undefined4 * func_0040B738(int param_1,int param_2,int param_3,uint *param_4)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define puStack_18 (*(uint * *)(albw_frame + 0x8))
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 4);
  if ((iVar2 != 0) && (puStack_18 = param_4, bVar1 = func_00569658(iVar2), bVar1)) {
    puVar3 = func_0056D6B0(&puStack_18,param_2 + param_3 * 0xc + 0x134,
                           (int *)(param_2 + param_3 * 0x10 + 0xf4),param_4);
    puVar4 = func_00414FF0();
    puVar4[0x7f] = puVar4[0x7f] + 1;
    return puVar3;
  }
  return (undefined4 *)0x0;
}

