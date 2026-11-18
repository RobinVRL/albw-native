#include "ghidra_types.h"

extern int func_0010C0B8(int param_1);
extern int func_0010EEE0(int param_1);
extern int func_00408458(void);
extern int func_0040BE08(int param_1,undefined4 param_2,int *param_3,int *param_4);

// USA 0048ECF0 <- EU 0048ECC8 (Ghidra, non-matching)

undefined4 func_0048ECF0(int param_1)

{
  int iVar1;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  int *in_r2;
  int *in_r3;
  
  iVar1 = func_00408458();
  if (iVar1 == 0) {
    return 0;
  }
  if (*(char *)(param_1 + 0x168) != '\0') {
    func_0010C0B8(param_1 + 0x14c);
    func_0040BE08(param_1 + 4,extraout_r1_00,in_r2,in_r3);
    return func_0010EEE0(param_1 + 0x14c);
  }
  return func_0040BE08(param_1 + 4,extraout_r1,in_r2,in_r3);
}

