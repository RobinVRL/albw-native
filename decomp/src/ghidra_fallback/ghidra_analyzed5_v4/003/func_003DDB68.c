#include "ghidra_types.h"

extern int func_003DCE04(void);
extern int func_003DCFD0(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4, int *param_5,undefined4 param_6,undefined4 param_7,int param_8);

// USA 003DDB68 <- EU 003DDB48 (Ghidra, non-matching)

uint func_003DDB68(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000004;
  int in_stack_00000008;
  
  puVar1 = func_003DCE04();
  uVar2 = func_003DCFD0(puVar1,param_1,param_2,param_3,param_4,in_stack_00000000,in_stack_00000004,
                        in_stack_00000008);
  return uVar2;
}

