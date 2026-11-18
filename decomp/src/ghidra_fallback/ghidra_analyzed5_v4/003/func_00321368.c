#include "ghidra_types.h"

extern int func_003DDB5C(float fparam_0);
extern int func_003DE120(void);
extern int func_003DE2D0(uint param_1);
extern int func_004102BC(undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_0048EF78(int *param_1);
extern float DAT_003213ac;

// USA 00321368 <- EU 00321344 (Ghidra, non-matching)
// GLOBAL DAT_003213ac float

undefined4 func_00321368(int *param_1)

{
  char cVar1;
  undefined4 in_r2;
  int *in_r3;
  
  func_0048EF78(param_1);
  func_003DDB5C(DAT_003213ac);
  func_003DE2D0(0);
  cVar1 = func_003DE120();
  if (cVar1 == '\0') {
    return func_004102BC(0,0,in_r2,in_r3);
  }
  if (cVar1 != '\x01') {
    if (cVar1 == '\x02') {
      return func_004102BC(0,2,in_r2,in_r3);
    }
    return 0;
  }
  return func_004102BC(0,1,in_r2,in_r3);
}

